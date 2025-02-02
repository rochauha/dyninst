#include <stddef.h>

struct amdgpu_vega_insn_entry {
	entryID op;
	const char *mnemonic;
	std::size_t operandCnt;
	const operandFactory *operands;
	static const amdgpu_vega_insn_table main_insn_table;
	static const operandFactory operandTable[];
	static const amdgpu_vega_insn_table sop2_insn_table;
	static const amdgpu_vega_insn_table sop1_insn_table;
	static const amdgpu_vega_insn_table sopk_insn_table;
	static const amdgpu_vega_insn_table sopc_insn_table;
	static const amdgpu_vega_insn_table sopp_insn_table;
	static const amdgpu_vega_insn_table smem_insn_table;
	static const amdgpu_vega_insn_table vop2_insn_table;
	static const amdgpu_vega_insn_table vop1_insn_table;
	static const amdgpu_vega_insn_table vopc_insn_table;
	static const amdgpu_vega_insn_table vintrp_insn_table;
	static const amdgpu_vega_insn_table ds_insn_table;
	static const amdgpu_vega_insn_table mtbuf_insn_table;
	static const amdgpu_vega_insn_table mubuf_insn_table;
	static const amdgpu_vega_insn_table vop3ab_insn_table;
	static const amdgpu_vega_insn_table vop3p_insn_table;
	static const amdgpu_vega_insn_table flat_insn_table;
};
