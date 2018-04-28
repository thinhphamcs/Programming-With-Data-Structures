/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Bank_Simulator.h"
#include "Random.h"
#include "Teller.h"
#include "Customer.h"

using namespace std;
Random myrandom(10);

void Simulator::run_simulation(int max, double arrival){
    int current_time;
    
    for (current_time = 0; current_time < max; current_time++){
        if (myrandom.next_double() < arrival){
            the_customers.push(new Customer(current_time));
        }
        
        for (size_t i = 0; i < tellers.size(); i++){
            //check if the teller is free and the line has customers
            if (tellers[i].is_free() && (!the_customers.empty())){
                Customer* nextCustomer = the_customers.front();
                the_customers.pop();
                tellers[i].start_service(current_time, nextCustomer);
            }
            //check next time teller is free and make sure teller is with a customer
            if (tellers[i].get_time_next_free() == current_time && (!tellers[i].is_free())){
                tellers[i].end_service(current_time);
            }
        }
    }
}


void Simulator::output_statistics() {
    cout << "Total Customers Served: " << Customer::get_total_customers_served() << endl;
    double average_wait =
            double(Customer::get_total_delay_time()) / Customer::get_total_customers_served();
    cout << "Average Wait: " << average_wait << endl;
    cout << "Teller Total     Total    Total Average\n"
            << "       Customers Service  Idle  Idle\n"
            << "       Served    Time     Time  Time\n";
    for (size_t i = 0; i < tellers.size(); i++) {
        cout << setw(5) << i;
        cout << setw(9) << tellers[i].get_num_customers_served();
        cout << setw(7) << tellers[i].get_total_service_time();
        cout << setw(9) << tellers[i].get_total_idle_time();
        cout << setw(9) << setprecision(3)
                << double(tellers[i].get_total_idle_time()) /
                tellers[i].get_num_customers_served();
        cout << endl;
    }
}

void Simulator::setTellers(int num){
    for (int i = 0; i < num; i++){
        this->tellers.push_back(Teller());
    }
}

std::vector<Teller> Simulator::getTellers() const{
    return this->tellers;
}
