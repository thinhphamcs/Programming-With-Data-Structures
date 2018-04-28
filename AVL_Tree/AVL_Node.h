/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AVL_Node.h
 * Author: Thinh
 *
 * Created on November 18, 2017, 3:09 PM
 */

#ifndef AVL_NODE_H
#define AVL_NODE_H

#include <sstream>

template<typename Item_Type>
struct AVL_Node : public BTNode<Item_Type> {

    enum balance_type {
        LEFT_HEAVY = -1, BALANCED = 0, RIGHT_HEAVY = +1
    };
    balance_type balance;

    AVL_Node(const Item_Type& the_data, BTNode<Item_Type>* left_val = NULL,
            BTNode<Item_Type>* right_val = NULL) :
    BTNode<Item_Type>(the_data, left_val, right_val), balance(BALANCED) {
    }
    
    virtual ~AVL_Node() {}
    
    virtual std::string to_string() const {
        std::ostringstream os;
        os < balance << " : " << this->data;
        return os.str();
    }
    
};

#endif /* AVL_NODE_H */

