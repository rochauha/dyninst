/*
 * Copyright (c) 1996-2011 Barton P. Miller
 * 
 * We provide the Paradyn Parallel Performance Tools (below
 * described as "Paradyn") on an AS IS basis, and do not warrant its
 * validity or performance.  We reserve the right to update, modify,
 * or discontinue this software at any time.  We shall have no
 * obligation to supply such updates or modifications or any other
 * form of support to you.
 * 
 * By your use of Paradyn, you understand and agree that we (or any
 * other person or entity with proprietary rights in Paradyn) are
 * under no obligation to provide either maintenance services,
 * update services, notices of latent defects, or correction of
 * defects for Paradyn.
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef WALKER_H_
#define WALKER_H_

#include "basetypes.h"
#include "Process.h"
#include <vector>
#include <list>
#include <string>

#define SW_MAJOR 2
#define SW_MINOR 1
#define SW_BETA  0

namespace Dyninst {
namespace Stackwalker {

class ProcessState;
class ProcDebug; 
class SymbolLookup;
class Frame;
class FrameStepper;
class StepperGroup;

class SW_EXPORT Walker {
 private:
   //Object creation functions
   Walker(ProcessState *p,
          StepperGroup *grp,
          SymbolLookup *sym, 
          bool default_steppers,
          std::string exec_name);
   SymbolLookup *createDefaultSymLookup(std::string exec_name);
   StepperGroup *createDefaultStepperGroup();
   static ProcessState *createDefaultProcess(std::string exec_name = std::string(""));
   static ProcessState *createDefaultProcess(Dyninst::PID pid, std::string exe);
   static ProcessState *createDefaultProcess(Dyninst::ProcControlAPI::Process::ptr proc);
   static bool createDefaultProcess(const std::vector<Dyninst::PID> &pids,
                                    std::vector<ProcDebug *> &pds);
   static ProcessState *createDefaultProcess(std::string exec_name, 
                                             const std::vector<std::string> &argv);

   bool createDefaultSteppers();

   Dyninst::THR_ID getActualThread(Dyninst::THR_ID tid, 
                                bool &error);

   bool checkValidFrame(const Frame &in, const Frame &out);
   bool callPreStackwalk(THR_ID tid = NULL_THR_ID);
   bool callPostStackwalk(THR_ID tid = NULL_THR_ID);
 public:
   static void version(int& major, int& minor, int& maintenance);
   //Create an object that operates on the current process
   static Walker *newWalker(std::string exec_name = std::string(""));

   //Create an object that operates on the specified process
   static Walker *newWalker(Dyninst::PID pid,
                            std::string executable);
   static Walker *newWalker(Dyninst::PID pid);
   static Walker *newWalker(Dyninst::ProcControlAPI::Process::ptr proc);
   static bool newWalker(const std::vector<Dyninst::PID> &pids,
                         std::vector<Walker *> &walkers_out,
                         std::string executable);
   static bool newWalker(const std::vector<Dyninst::PID> &pids,
                         std::vector<Walker *> &walkers_out);      

   //Create an object that creates the specified process
   static Walker *newWalker(std::string exec_name, 
                            const std::vector<std::string> &argv);

   //Create an object with custom backend classes
   static Walker *newWalker(ProcessState *proc, 
                            StepperGroup *grp = NULL,
                            SymbolLookup *lookup = NULL,
                            bool default_steppers = true);
   
   //Get the default symbol reader
   static SymbolReaderFactory *getSymbolReader();

   //Set the default symbol reader
   static void setSymbolReader(SymbolReaderFactory *srf);

   //Collect a stackwalk
   bool walkStack(std::vector<Frame> &stackwalk, 
                  Dyninst::THR_ID thread = NULL_THR_ID);

   //Collect a stackwalk starting at a certain frame
   bool walkStackFromFrame(std::vector<Frame> &stackwalk, 
                           const Frame &frame);

   //Walk a single frame
   bool walkSingleFrame(const Frame &in, 
                        Frame &out);

   //Return the intitial frame in a stackwalk.
   bool getInitialFrame(Frame &frame, 
                        Dyninst::THR_ID thread = NULL_THR_ID);

   //Return a list of threads available for stackwalking.
   bool getAvailableThreads(std::vector<Dyninst::THR_ID> &threads) const;

   //Return the ProcessState object
   ProcessState *getProcessState() const;

   //Return the symbolLookup object
   SymbolLookup *getSymbolLookup() const;

   //Return stepper group
   StepperGroup *getStepperGroup() const;
   
   //Add frame steppers to the group
   bool addStepper(FrameStepper *stepper);


   virtual ~Walker();
 private:
   static SymbolReaderFactory *symrfact;
   ProcessState *proc;
   SymbolLookup *lookup;
   bool creation_error;
   StepperGroup *group;
   unsigned call_count;
};

}
}

#endif
