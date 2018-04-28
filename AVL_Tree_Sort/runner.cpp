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
#include "test_AVL_Tree.h"

static test_AVL_Tree suite_test_AVL_Tree;

static CxxTest::List Tests_test_AVL_Tree = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_test_AVL_Tree( "test_AVL_Tree.h", 29, "test_AVL_Tree", suite_test_AVL_Tree, Tests_test_AVL_Tree );

static class TestDescription_test_AVL_Tree_testMyFunction : public CxxTest::RealTestDescription {
public:
 TestDescription_test_AVL_Tree_testMyFunction() : CxxTest::RealTestDescription( Tests_test_AVL_Tree, suiteDescription_test_AVL_Tree, 35, "testMyFunction" ) {}
 void runTest() { suite_test_AVL_Tree.testMyFunction(); }
} testDescription_test_AVL_Tree_testMyFunction;

#include <cxxtest/Root.cpp>
