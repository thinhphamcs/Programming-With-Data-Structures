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
#include "testSorts.h"

static testSorts suite_testSorts;

static CxxTest::List Tests_testSorts = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_testSorts( "testSorts.h", 40, "testSorts", suite_testSorts, Tests_testSorts );

static class TestDescription_testSorts_Test_Bubble_Sort : public CxxTest::RealTestDescription {
public:
 TestDescription_testSorts_Test_Bubble_Sort() : CxxTest::RealTestDescription( Tests_testSorts, suiteDescription_testSorts, 45, "Test_Bubble_Sort" ) {}
 void runTest() { suite_testSorts.Test_Bubble_Sort(); }
} testDescription_testSorts_Test_Bubble_Sort;

static class TestDescription_testSorts_testHeapSort : public CxxTest::RealTestDescription {
public:
 TestDescription_testSorts_testHeapSort() : CxxTest::RealTestDescription( Tests_testSorts, suiteDescription_testSorts, 62, "testHeapSort" ) {}
 void runTest() { suite_testSorts.testHeapSort(); }
} testDescription_testSorts_testHeapSort;

static class TestDescription_testSorts_testInsertionSort : public CxxTest::RealTestDescription {
public:
 TestDescription_testSorts_testInsertionSort() : CxxTest::RealTestDescription( Tests_testSorts, suiteDescription_testSorts, 68, "testInsertionSort" ) {}
 void runTest() { suite_testSorts.testInsertionSort(); }
} testDescription_testSorts_testInsertionSort;

static class TestDescription_testSorts_testMergeSort : public CxxTest::RealTestDescription {
public:
 TestDescription_testSorts_testMergeSort() : CxxTest::RealTestDescription( Tests_testSorts, suiteDescription_testSorts, 74, "testMergeSort" ) {}
 void runTest() { suite_testSorts.testMergeSort(); }
} testDescription_testSorts_testMergeSort;

static class TestDescription_testSorts_testQuickSort : public CxxTest::RealTestDescription {
public:
 TestDescription_testSorts_testQuickSort() : CxxTest::RealTestDescription( Tests_testSorts, suiteDescription_testSorts, 80, "testQuickSort" ) {}
 void runTest() { suite_testSorts.testQuickSort(); }
} testDescription_testSorts_testQuickSort;

static class TestDescription_testSorts_testSelectionSort : public CxxTest::RealTestDescription {
public:
 TestDescription_testSorts_testSelectionSort() : CxxTest::RealTestDescription( Tests_testSorts, suiteDescription_testSorts, 86, "testSelectionSort" ) {}
 void runTest() { suite_testSorts.testSelectionSort(); }
} testDescription_testSorts_testSelectionSort;

static class TestDescription_testSorts_testShellSort : public CxxTest::RealTestDescription {
public:
 TestDescription_testSorts_testShellSort() : CxxTest::RealTestDescription( Tests_testSorts, suiteDescription_testSorts, 92, "testShellSort" ) {}
 void runTest() { suite_testSorts.testShellSort(); }
} testDescription_testSorts_testShellSort;

#include <cxxtest/Root.cpp>
