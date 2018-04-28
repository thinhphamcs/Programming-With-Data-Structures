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
#include "testProcessOrders.h"

static testProcessOrders suite_testProcessOrders;

static CxxTest::List Tests_testProcessOrders = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_testProcessOrders( "testProcessOrders.h", 23, "testProcessOrders", suite_testProcessOrders, Tests_testProcessOrders );

static class TestDescription_testProcessOrders_testProcess_order : public CxxTest::RealTestDescription {
public:
 TestDescription_testProcessOrders_testProcess_order() : CxxTest::RealTestDescription( Tests_testProcessOrders, suiteDescription_testProcessOrders, 29, "testProcess_order" ) {}
 void runTest() { suite_testProcessOrders.testProcess_order(); }
} testDescription_testProcessOrders_testProcess_order;

#include <cxxtest/Root.cpp>
