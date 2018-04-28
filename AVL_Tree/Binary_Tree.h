/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Binary_Tree.h
 * Author: Thinh
 *
 * Created on November 18, 2017, 1:09 PM
 */

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <cstddef>
#include <sstream>
#include <stdexcept>
#include <string>

#include "BTNode.h"

template<typename Item_Type>
class Binary_Tree {
public:

    Binary_Tree() : root(NULL) {}

    Binary_Tree(const Item_Type& the_data,
            const Binary_Tree<Item_Type>& left_child = Binary_Tree(),
            const Binary_Tree<Item_Type>& right_child = Binary_Tree()) :
    root(new BTNode<Item_Type>(the_data, left_child.root, right_child.root)) {}
    
    virtual ~Binary_Tree() {}
    
    Binary_Tree<Item_Type> get_left_subtree() const;
    
    Binary_Tree<Item_Type> get_right_subtree() const;

    const Item_Type& get_data() const;
    
    bool is_null() const;
    
    bool is_leaf() const;
    
    virtual std::string to_string() const;
    
    //static Binary_Tree<Item_Type> read_binary_tree(std::istream& in);
    
protected:
    
    Binary_Tree(BTNode<Item_Type>* new_root) : root(new_root) {}
    BTNode<Item_Type>* root;
};

template<typename Item_Type>
std::ostream& operator<<(std::ostream& out, 
        const Binary_Tree<Item_Type>& tree) {
    return out << tree.to_string();
}

template<typename Item_Type>
std::istream& operator>>(std::istream& in,
        Binary_Tree<Item_Type>& tree) {
    
}

template<typename Item_Type>
Binary_Tree<Item_Type>::get_left_subtree() const {
    if (root == NULL) {
        throw std::invalid_argument("get_left_subtree on empty tree");
    }
    return Binary_Tree<Item_Type>(root->left);
}

template<typename Item_Type>
Binary_Tree<Item_Type>::get_right_subtree() const {
    if (root == NULL) {
        throw std::invalid_argument("get_right_subtree on empty tree");
    }
    return Binary_Tree<Item_Type>(root->right);
}

template<typename Item_Type>
const Item_Type& Binary_Tree<Item_Type>::get_data() const {
    if (root == NULL) {
        throw std::invalid_argument("get_data on null tree");
    }
    return root->data;
}

template<typename Item_Type>
bool Binary_Tree<Item_Type>::is_null() const {
    return root == NULL;
}

template<typename Item_Type>
bool Binary_Tree<Item_Type>::is_leaf() const {
    if (root != NULL) {
        return root->left == NULL &&  root->right == NULL;
    }
    else {
        return true;
    }
}

template<typename Item_Type>
std::string Binary_Tree<Item_Type>::to_string() const {
    std::ostringstream os;
    if (is_null()) {
        os << "NULL\n";
    }
    else {
        os << *root << "\n";
        os << get_left_subtree().to_string();
        os << get_right_subtree().to_string();
    }
    return os.str();
}

#endif /* BINARY_TREE_H */

