/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/ErrorPrinter.h>

int main() {
 return CxxTest::ErrorPrinter().run();
}
#include "testBank_Simulator.h"

static testBank_Simulator suite_testBank_Simulator;

static CxxTest::List Tests_testBank_Simulator = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_testBank_Simulator( "testBank_Simulator.h", 25, "testBank_Simulator", suite_testBank_Simulator, Tests_testBank_Simulator );

static class TestDescription_testBank_Simulator_testMyFunction : public CxxTest::RealTestDescription {
public:
 TestDescription_testBank_Simulator_testMyFunction() : CxxTest::RealTestDescription( Tests_testBank_Simulator, suiteDescription_testBank_Simulator, 28, "testMyFunction" ) {}
 void runTest() { suite_testBank_Simulator.testMyFunction(); }
} testDescription_testBank_Simulator_testMyFunction;

#include <cxxtest/Root.cpp>
