/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Customer.h"
#include "Random.h"

extern Random myrandom;
int Customer::total_delay_time = 0;
int Customer::max_service_time = 0;
int Customer::total_customers_served = 0;

/**
 * Constructor for customer initializing the arrival time
 * @param the_arrival_time the time customer entered the queue
 */
Customer::Customer(int the_arrival_time){
    this->arrival_time = the_arrival_time;
}

/**
 * Set max service time
 * @param the_max_service_time the max amount of time a customer could take
 */
void Customer::set_max_service_time(int the_max_service_time){
         max_service_time = the_max_service_time;
}

/**
 * The Customer has been assigned a teller
 * @param time the current time
 * @return the service time
 */
int Customer::start_service(int time){
    this->service_time = time;
    this->delay_time = this->service_time - this->arrival_time;
    Customer::total_delay_time = this->delay_time;
    Customer::total_customers_served++;
    return myrandom.next_int(Customer::max_service_time);
}    

/**
 * 
 * @return amount of time customer has waited
 */
int Customer::get_delay_time() const{
    return delay_time;
}

/**
 * 
 * @return the time customer arrived at the queue
 */
int Customer::get_arrival_time() const{
    return arrival_time;
}

/**
 * 
 * @return how long customer need to be with a teller 
 */
int Customer::get_service_time() const{
    return this->service_time;
}

/**
 * 
 * @return total time customers have been waiting before getting assigned a teller 
 */
int Customer::get_total_delay_time(){
    return Customer::total_delay_time;
}

/**
 * 
 * @return the amount of customers have been serviced 
 */
int Customer::get_total_customers_served(){
    return Customer::total_customers_served;
}
