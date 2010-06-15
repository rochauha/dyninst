

#if !defined(Absloc_Interface_H)
#define Absloc_Interface_H

#include "Instruction.h"
#include "Register.h"
#include "Expression.h"
#include "Operand.h"
#include "Absloc.h"

class int_function;
class BPatch_function;

namespace Dyninst {

  namespace ParseAPI {
    class Function; 
  };

class AbsRegionConverter {
 public:
 SYMEVAL_EXPORT AbsRegionConverter(bool cache) : 
  cacheEnabled_(cache) {};

  // Definition: the first AbsRegion represents the expression.
  // If it's a memory reference, any other AbsRegions represent
  // registers used in this expression.

  SYMEVAL_EXPORT void convertAll(InstructionAPI::Expression::Ptr expr,
		  Address addr,
		  ParseAPI::Function *func,
		  std::vector<AbsRegion> &regions);

  SYMEVAL_EXPORT void convertAll(InstructionAPI::Instruction::Ptr insn,
		  Address addr,
		  ParseAPI::Function *func,
		  std::vector<AbsRegion> &used,
		  std::vector<AbsRegion> &defined);

  // Single converters
  
  SYMEVAL_EXPORT AbsRegion convert(InstructionAPI::RegisterAST::Ptr reg);

  SYMEVAL_EXPORT AbsRegion convert(InstructionAPI::Expression::Ptr expr,
		    Address addr,
		    ParseAPI::Function *func);

  // Cons up a stack reference at the current addr
  SYMEVAL_EXPORT AbsRegion stack(Address addr,
		  ParseAPI::Function *func,
		  bool push);

  SYMEVAL_EXPORT AbsRegion frame(Address addr,
		  ParseAPI::Function *func,
		  bool push);

 private:
    // Returns false if the current height is unknown.
  bool getCurrentStackHeight(ParseAPI::Function *func,
			     Address addr, 
			     long &height, int &region);
  bool getCurrentFrameHeight(ParseAPI::Function *func,
			     Address addr, 
			     long &height, int &region);

  bool convertResultToAddr(const InstructionAPI::Result &res, Address &addr);
  bool convertResultToSlot(const InstructionAPI::Result &res, int &slot);

  bool usedCache(Address, ParseAPI::Function *, std::vector<AbsRegion> &used);
  bool definedCache(Address, ParseAPI::Function *, std::vector<AbsRegion> &defined);

  // Caching mechanism...
  typedef std::vector<AbsRegion> RegionVec;

  typedef std::map<Address, RegionVec> AddrCache;
  typedef std::map<ParseAPI::Function *, AddrCache> FuncCache;

  FuncCache used_cache_;
  FuncCache defined_cache_;
  bool cacheEnabled_;
};

class AssignmentConverter {
 public:  
 SYMEVAL_EXPORT AssignmentConverter(bool cache) : cacheEnabled_(cache), aConverter(false) {};

  SYMEVAL_EXPORT void convert(InstructionAPI::Instruction::Ptr insn,
	       const Address &addr,
	       ParseAPI::Function *func,
	       std::vector<Assignment::Ptr> &assignments);


 private:
  void handlePushEquivalent(const InstructionAPI::Instruction::Ptr I,
			    Address addr,
			    ParseAPI::Function *func,
			    std::vector<AbsRegion> &operands,
			    std::vector<Assignment::Ptr> &assignments);
  void handlePopEquivalent(const InstructionAPI::Instruction::Ptr I,
			   Address addr,
			   ParseAPI::Function *func,
			   std::vector<AbsRegion> &operands,
			   std::vector<Assignment::Ptr> &assignments);

  bool cache(ParseAPI::Function *func, Address addr, std::vector<Assignment::Ptr> &assignments);

  typedef std::vector<Assignment::Ptr> AssignmentVec;
  typedef std::map<Address, AssignmentVec> AddrCache;
  typedef std::map<ParseAPI::Function *, AddrCache> FuncCache;

  FuncCache cache_;
  bool cacheEnabled_;

  AbsRegionConverter aConverter;
};

};
#endif

