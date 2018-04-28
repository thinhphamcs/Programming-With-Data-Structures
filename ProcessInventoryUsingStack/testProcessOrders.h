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

#ifndef TESTPROCESSORDERS_H
#define TESTPROCESSORDERS_H

#include <cxxtest/TestSuite.h>

#include "ProcessOrders.h"
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"

class testProcessOrders : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testProcess_order() {
        ProcessOrders* po = new ProcessOrders;
        //shipment arrives. Quantity of 5 items, cost $5 each
        double amount = po->process_shipment(5, 5);
        //shipment arrives. Quantity of 5 items, cost $10 each
        amount = po->process_shipment(5, 10);
        //shipment arrives. Quantity of 5 items, cost $15 each
        amount = po->process_shipment(5, 15);
        //no order yet. Cost is $0
        TS_ASSERT_DELTA(amount, 0, 0.0001);
        //order comes in. Quantity equals two items
        amount = po->process_order(2);
        //get the items from the latest shipment
        //profit is 50% over the cost
        //amount = $15*$2*$1.5 = 45
        TS_ASSERT_DELTA(amount, 45.0, 0.0001);
        //new order comes in. Quantity 10
        amount = po->process_order(10);
        //check the amount (157.5) to see if you understand
        //how the stack work
        TS_ASSERT_DELTA(amount, 157.5, 0.0001);
        //inventory is short for the new order
        //push unfulfilled quantities onto orders-to-be-filled stack
        amount = po->process_order(10);
        //check the amount (22.5) to see if you understand
        //how the stack work
        TS_ASSERT_DELTA(amount, 22.5, 0.0001);
        //new shipment comes in
        //unfilled order process first
        amount = po->process_shipment(10, 15);
        //check the amount (22.5) to see if you understand
        //how the stack work
        TS_ASSERT_DELTA(amount, 157.5, 0.0001);
        delete po;

    }
};
#endif /* %<%GUARD_NAME%>% */

