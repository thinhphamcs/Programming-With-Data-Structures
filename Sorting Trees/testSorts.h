/* 
 * File:   %<%NAME%>%.%<%EXTENSION%>%
 * Author: %<%USER%>%
 *
 * Created on %<%DATE%>%, %<%TIME%>%
 * 
 * This file uses the CxxTest library <TestSuite> to create test cases 
 * for a students project. For full cxxtest documentation see the userguide
 * located in your C:\MinGW\cxxtest\doc or visit: 
 * http://cxxtest.com/guide.html
 * 
 */

#ifndef TESTSORTS_H_
#define TESTSORTS_H_

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.

#include <cstdlib>

//random number generator
#include <time.h>
#include <stdlib.h>

/** Driver function to test all sorts. */
#include <iostream>
#include <iterator>
#include <vector>

//All Sorts
#include "Selection_Sort.h"
#include "Bubble_Sort.h"
#include "Insertion_Sort.h"
#include "Shell_Sort.h"
#include "Merge_Sort.h"
#include "Heap_Sort.h"
#include "Quick_Sort.h"

class testSorts : public CxxTest::TestSuite { //Begin Class
public:

    //Test Bubble Sort

    void Test_Bubble_Sort() { //Begin Bubble
//        int random; //variable to store random numbers
//        srand(time(NULL)); //this will make sure the numbers will stay the same
//        for (int i = 0; i < 1; i++) {
//            srand(i);
//            random = 0 + rand() % 1000; //0-999
//            int tot_compares[random];
//            int tot_exchanges[random];
//            
//            //Set 1
//            TS_ASSERT_EQUALS(tot_compares[random], 32693);
//            TS_ASSERT_EQUALS(tot_exchanges[random], 15);
//        }
    } //End Bubble

    //Test Heap Sort

    void testHeapSort() { //Begin Heap

    } //End Heap

    //Test Insertion Sort

    void testInsertionSort() { //Begin Insertion

    } //End Insertion

    //Test Merge Sort

    void testMergeSort() { //Begin Merge

    } //End Merge

    //Test Quick

    void testQuickSort() { //Begin Quick

    } //End Quick

    //Test Selection Sort

    void testSelectionSort() { //Begin Selection

    } //End Selection

    //Test Shell Sort

    void testShellSort() { //Begin Shell

    } //End Shell

}; //End Class
#endif //TESTSORTS_H_

