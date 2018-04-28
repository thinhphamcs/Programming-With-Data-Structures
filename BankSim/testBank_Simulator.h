/* 
 * File:   testBank_Simulator.h
 * Author: Thinh
 *
 * Created on 10/27/2017, 11:05
 * 
 * This file uses the CxxTest library <TestSuite> to create test cases 
 * for a students project. For full cxxtest documentation see the userguide
 * located in your C:\MinGW\cxxtest\doc or visit: 
 * http://cxxtest.com/guide.html
 * 
 */

#ifndef TESTBANK_SIMULATOR_H_
#define TESTBANK_SIMULATOR_H_

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
#include "Bank_Simulator.h"

class testBank_Simulator : public CxxTest::TestSuite {
public:

    void testMyFunction() {
        Simulator simulator;
        int num_tellers = 3;
        double arrival_rate = 30.0;
        int max_time = 200;
        int max_service_time = 5;
        simulator.setTellers(num_tellers);
        Customer::set_max_service_time(max_service_time);
        simulator.run_simulation(max_time, arrival_rate / 60.0);
        simulator.output_statistics();
        int result = Customer::get_total_customers_served();
        TS_ASSERT_EQUALS(result, 97);
        double average_wait =
        double(Customer::get_total_delay_time()) / Customer::get_total_customers_served();
        TS_ASSERT_DELTA(average_wait,0,0);
        }

    };
    
#endif /* %<%GUARD_NAME%>% */
