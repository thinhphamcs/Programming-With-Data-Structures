/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#ifndef BINARY_TREE_TPP_
#define BINARY_TREE_TPP_

#include "Binary_Tree.h"
#include <string>
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <algorithm>

template<typename Item_Type>
Binary_Tree<Item_Type> Binary_Tree<Item_Type>::get_left_subtree() const {

    if (root == NULL) {
        throw std::invalid_argument("get left subtree on null tree");
    } else {
        return Binary_Tree<Item_Type>(root->left);
    }
}

template<typename Item_Type>
Binary_Tree<Item_Type> Binary_Tree<Item_Type>::get_right_subtree() const {

    if (root == NULL) {
        throw std::invalid_argument("get right subtree on null tree");
    } else {
        return Binary_Tree<Item_Type>(root->right);
    }
}

template<typename Item_Type>
Binary_Tree<Item_Type> Binary_Tree<Item_Type>::get_data() const {

    if (root == NULL) {
        throw std::invalid_argument("get data on null tree");
    } else {
        return Binary_Tree<Item_Type>(root->data);
    }
}

template<typename Item_Type>
bool Binary_Tree<Item_Type>::is_null() const {
    return root == NULL;
}

template<typename Item_Type>
bool Binary_Tree<Item_Type>::is_leaf() const {
    if (root != NULL) {
        root->left == NULL && root->right == NULL;
    } else {
        return true;
    }
}

template<typename Item_Type>
std::string Binary_Tree<Item_Type>::to_string() const {
    std::ostringstream os;
    if (is_null()) {
        os << "is NULL" << std::endl;
    }
    else {
        os << *root << std::endl;
        os << get_left_subtree().to_string();
        os << get_right_subtree().to_string();
    }
    return os.str();
}

template<typename Item_Type>
Binary_Tree<Item_Type> Binary_Tree<Item_Type>::read_binary_tree(std::istream& in) const {
    std::string next_line;
    getline(in, next_line);
    if(next_line == "NULL") {
        return Binary_Tree<Item_Type>();
    }
    else {
        Item_Type the_data;
        std::istringstream ins(next_line);
        ins >> the_data;
        
        Binary_Tree<Item_Type> left = read_binary_tree(in);
        Binary_Tree<Item_Type> right = read_binary_tree(in);
        return Binary_Tree<Item_Type>(the_data, left, right);
    } 
    
}


#endif /* BINARY_TREE_TPP */