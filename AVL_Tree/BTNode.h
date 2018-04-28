/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BTNode.h
 * Author: Thinh
 *
 * Created on November 18, 2017, 1:03 PM
 */

#ifndef BTNODE_H
#define BTNODE_H

#include <sstream>
#include <iostream>

template<typename Item_Type>
struct BTNode {
    Item_Type data;
    BTNode<Item_Type>* left;
    BTNode<Item_Type>* right;

    //constructor

    BTNode(const Item_Type& the_data,
            BTNode<Item_Type>* left_val = NULL,
            BTNode<Item_Type>* right_val = NULL) :
    data(the_data), left(left_val), right(right_val) {
    }

    virtual ~BTNode() {
    }

    virtual std::string to_string() const {
        std::ostringstream os;
        os << data;
        return os.str();
    }
};

template<typename Item_Type>
std::ostream& operator<<(std::ostream& out,
        const BTNode<Item_Type>& node) {
    return out << node.to_string();
}

#endif /* BTNODE_H */

