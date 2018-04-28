/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Order.h
 * Author: Thinh
 *
 * Created on October 24, 2017, 6:21 PM
 */

#ifndef ORDER_H
#define ORDER_H

/** Class to model an Order for Widgets */
class Order {
public:

    /** Class constructor. Creates a new instance of Order.
        @param q Quantity (number) of widgets requested in Order
     */
    Order(int q) : quantity(q) {
    }

    //Accessor method

    int get_quantity() const {
        return quantity;
    }

    //Modifier method

    void set_quantity(int q) {
        quantity = q;
    }

private:
    int quantity;
};

#endif /* ORDER_H */

