/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/ErrorPrinter.h>

int main() {
 return CxxTest::ErrorPrinter().run();
}
#include "test_Expression_Tree.h"

static test_Expression_Tree suite_test_Expression_Tree;

static CxxTest::List Tests_test_Expression_Tree = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_test_Expression_Tree( "test_Expression_Tree.h", 26, "test_Expression_Tree", suite_test_Expression_Tree, Tests_test_Expression_Tree );

static class TestDescription_test_Expression_Tree_testAllMyFunction : public CxxTest::RealTestDescription {
public:
 TestDescription_test_Expression_Tree_testAllMyFunction() : CxxTest::RealTestDescription( Tests_test_Expression_Tree, suiteDescription_test_Expression_Tree, 33, "testAllMyFunction" ) {}
 void runTest() { suite_test_Expression_Tree.testAllMyFunction(); }
} testDescription_test_Expression_Tree_testAllMyFunction;

#include <cxxtest/Root.cpp>
