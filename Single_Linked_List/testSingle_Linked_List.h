/* 
 * File:   testSingle_Linked_List.h
 * Author: Thinh
 *
 * Created on October 5, 2017, 3:45 PM
 */

#ifndef TESTSINGLE_LINKED_LIST_H
#define TESTSINGLE_LINKED_LIST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
#include "Single_Linked_List.h"
//#include <iostream>

class testSingle_Linked_List : public CxxTest::TestSuite { //Begin
public:
    
    void testAllFuntions() { //Begin
    Single_Linked_List<int> *list = new Single_Linked_List<int>();
    list->push_front(2);
    list->push_front(3);
    list->push_back(1);
        TS_ASSERT(list->get(1));

    } //End 
}; //End
#endif /* TESTSINGLE_LINKED_LIST_H */
