/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Inventory.h
 * Author: Thinh
 *
 * Created on October 24, 2017, 6:22 PM
 */

#ifndef INVENTORY_H
#define INVENTORY_H

/** Class to model a shippment of Widgets */
class Inventory {
public:

    /** Class constructor. Creates a new instance of Shipment.
        @param q Quantity (number) of widgets in shipment
        @param c Cost of the widgets in shipment
     */
    Inventory(int q, double c) : quantity(q), cost(c) {
    }

    // Accessor methods

    int get_quantity() const {
        return quantity;
    }

    double get_cost() const {
        return cost;
    }

    //Modifier method

    void set_quantity(int q) {
        quantity = q;
    }

private:
    int quantity;
    double cost;
};

#endif /* INVENTORY_H */
