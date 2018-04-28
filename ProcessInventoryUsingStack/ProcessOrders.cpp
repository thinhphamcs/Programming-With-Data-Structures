/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "ProcessOrders.h"
#include <iostream>
#include <stack>

/** Process new Shipment
 @param q Quantity of widgets in shipment
 @param c Cost of the widgets in shipment
 Also process any un-filled orders in the orders_to_be_filled stack
 @return total amount that were processed from orders_to_be_filled stack
 */
double ProcessOrders::process_shipment(int q, double c) {
//    int processTurn;
//    
//    for (processTurn = 0; processTurn < q; processTurn++){
//        if (Inventory_on_hand.push() < q){
//            orders_to_be_filled.push(new ProcessOrders(processTurn));
//        }
//        
//        for (size_t i = 0; i < orders_to_be_filled.size(); i++){
//            //check if the teller is free and the line has customers
//            if (tellers[i].is_free() && (!the_customers.empty())){
//                Customer* nextCustomer = the_customers.front();
//                the_customers.pop();
//                tellers[i].start_service(current_time, nextCustomer);
//            }
//            //check next time teller is free and make sure teller is with a customer
//            if (tellers[i].get_time_next_free() == current_time && (!tellers[i].is_free())){
//                tellers[i].end_service(current_time);
//            }
//        }
//    }
    
      if(q <= 5) {
         return 0; 
      }
      else {
          return ((q * c) + (c * 0.50));
      }
}

/** Process new Order
 @param q Quantity of widgets in shipment
 @return total amount that were processed from orders_to_be_filled stack
 */
double ProcessOrders::process_order(int q) {
    for (int i = 0; i < q; i++){
        this->orders_to_be_filled.push(i);
    }
    
}
