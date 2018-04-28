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
#include "testSingle_Linked_List.h"

static testSingle_Linked_List suite_testSingle_Linked_List;

static CxxTest::List Tests_testSingle_Linked_List = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_testSingle_Linked_List( "testSingle_Linked_List.h", 16, "testSingle_Linked_List", suite_testSingle_Linked_List, Tests_testSingle_Linked_List );

static class TestDescription_testSingle_Linked_List_testAllFuntions : public CxxTest::RealTestDescription {
public:
 TestDescription_testSingle_Linked_List_testAllFuntions() : CxxTest::RealTestDescription( Tests_testSingle_Linked_List, suiteDescription_testSingle_Linked_List, 19, "testAllFuntions" ) {}
 void runTest() { suite_testSingle_Linked_List.testAllFuntions(); }
} testDescription_testSingle_Linked_List_testAllFuntions;

#include <cxxtest/Root.cpp>
