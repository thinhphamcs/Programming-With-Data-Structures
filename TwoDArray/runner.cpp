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
#include "testTwoDArray.h"

static testTwoDArray suite_testTwoDArray;

static CxxTest::List Tests_testTwoDArray = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_testTwoDArray( "testTwoDArray.h", 23, "testTwoDArray", suite_testTwoDArray, Tests_testTwoDArray );

static class TestDescription_testTwoDArray_testSet_Row : public CxxTest::RealTestDescription {
public:
 TestDescription_testTwoDArray_testSet_Row() : CxxTest::RealTestDescription( Tests_testTwoDArray, suiteDescription_testTwoDArray, 32, "testSet_Row" ) {}
 void runTest() { suite_testTwoDArray.testSet_Row(); }
} testDescription_testTwoDArray_testSet_Row;

static class TestDescription_testTwoDArray_testGet_Row : public CxxTest::RealTestDescription {
public:
 TestDescription_testTwoDArray_testGet_Row() : CxxTest::RealTestDescription( Tests_testTwoDArray, suiteDescription_testTwoDArray, 60, "testGet_Row" ) {}
 void runTest() { suite_testTwoDArray.testGet_Row(); }
} testDescription_testTwoDArray_testGet_Row;

static class TestDescription_testTwoDArray_testSet_Element : public CxxTest::RealTestDescription {
public:
 TestDescription_testTwoDArray_testSet_Element() : CxxTest::RealTestDescription( Tests_testTwoDArray, suiteDescription_testTwoDArray, 90, "testSet_Element" ) {}
 void runTest() { suite_testTwoDArray.testSet_Element(); }
} testDescription_testTwoDArray_testSet_Element;

static class TestDescription_testTwoDArray_testGet_Element : public CxxTest::RealTestDescription {
public:
 TestDescription_testTwoDArray_testGet_Element() : CxxTest::RealTestDescription( Tests_testTwoDArray, suiteDescription_testTwoDArray, 120, "testGet_Element" ) {}
 void runTest() { suite_testTwoDArray.testGet_Element(); }
} testDescription_testTwoDArray_testGet_Element;

static class TestDescription_testTwoDArray_testSum : public CxxTest::RealTestDescription {
public:
 TestDescription_testTwoDArray_testSum() : CxxTest::RealTestDescription( Tests_testTwoDArray, suiteDescription_testTwoDArray, 148, "testSum" ) {}
 void runTest() { suite_testTwoDArray.testSum(); }
} testDescription_testTwoDArray_testSum;

static class TestDescription_testTwoDArray_testFind_Max : public CxxTest::RealTestDescription {
public:
 TestDescription_testTwoDArray_testFind_Max() : CxxTest::RealTestDescription( Tests_testTwoDArray, suiteDescription_testTwoDArray, 176, "testFind_Max" ) {}
 void runTest() { suite_testTwoDArray.testFind_Max(); }
} testDescription_testTwoDArray_testFind_Max;

static class TestDescription_testTwoDArray_testFind_Min : public CxxTest::RealTestDescription {
public:
 TestDescription_testTwoDArray_testFind_Min() : CxxTest::RealTestDescription( Tests_testTwoDArray, suiteDescription_testTwoDArray, 204, "testFind_Min" ) {}
 void runTest() { suite_testTwoDArray.testFind_Min(); }
} testDescription_testTwoDArray_testFind_Min;

static class TestDescription_testTwoDArray_testTo_String : public CxxTest::RealTestDescription {
public:
 TestDescription_testTwoDArray_testTo_String() : CxxTest::RealTestDescription( Tests_testTwoDArray, suiteDescription_testTwoDArray, 232, "testTo_String" ) {}
 void runTest() { suite_testTwoDArray.testTo_String(); }
} testDescription_testTwoDArray_testTo_String;

#include <cxxtest/Root.cpp>
