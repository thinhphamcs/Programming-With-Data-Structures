/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bank_Simulator.h
 * Author: Thinh
 *
 * Created on October 27, 2017, 9:53 PM
 */

#ifndef BANK_SIMULATOR_H
#define BANK_SIMULATOR_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <queue>
#include "Customer.h"
#include "Teller.h"
#include "Random.h"

class Simulator
{
public:
 
    void run_simulation(int, double);  // start the simulation
    void output_statistics();  // print out the statistics
    void setTellers(int);  // create number of teller
    std::vector<Teller> getTellers() const;  // return tellers vector
    
    
private:

    std::vector<Teller> tellers;
    std::queue<Customer*> the_customers;

};

#endif /* BANK_SIMULATOR_H */
