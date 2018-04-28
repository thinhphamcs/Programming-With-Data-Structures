/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Teller.h"
/**
 * Constructor for teller initializing all variables to zero;
 */
Teller::Teller(){
    this->free = true;
    this->num_customers_served = 0;
    this->total_service_time = 0;
    this->total_idle_time = 0;
    this->time_service_ended = 0;
    this->time_next_free = 0;
    this->total_service_time = 0;
}

/**
 * 
 * @return if teller is free 
 */
bool Teller::is_free() const{
    return this->free;
}

/**
 * 
 * @return the exact time teller will finish with customer 
 */
int Teller::get_time_next_free() const{
    return this->time_next_free;
}


/**
 * 
 * @return how long teller has helping customers as a total 
 */
int Teller::get_total_service_time() const{
    return this->total_service_time;
}

/**
 * 
 * @return how long the teller has not been assigned a customer
 */
int Teller::get_total_idle_time() const{
    return this->total_idle_time;
}

/**
 * 
 * @return total customers a teller has helped 
 */
int Teller::get_num_customers_served() const{
    return this->num_customers_served;
}

/**
 * Teller has been assigned a customer and begins service
 * @param time the current time
 * @param currentCustomer the customer from the queue that has been assigned
 */
void Teller::start_service(int time, Customer* currentCustomer){
    this->free = false;
    this->currentCustomer = currentCustomer;
    this->time_next_free = time + this->currentCustomer->start_service(time);
    this->time_service_started = time;
    this->total_idle_time += (time - this->time_service_ended);
    this->num_customers_served++;
}

/**
 * Teller has finished helping customer
 * @param time the current time
 */
void Teller::end_service(int time){
    this->free = true;
    this->time_service_ended = time;
    this->total_service_time += (this->time_service_ended - this->time_service_started);
    delete this->currentCustomer;
}
