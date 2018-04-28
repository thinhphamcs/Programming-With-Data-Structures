/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BTNode.h
 * Author: Thinh
 *
 * Created on October 28, 2017, 12:14 PM
 */

#ifndef BTNODE_H_
#define BTNODE_H_
#include <sstream>

/** A node for a Binary Tree. */
template<typename Item_Type>
  struct BTNode 
{
  // Data Fields
  Item_Type data;
  BTNode<Item_Type>* left;
  BTNode<Item_Type>* right;
  
  // Constructor
  BTNode(const Item_Type& the_data, 
         BTNode<Item_Type>* left_val = NULL,
         BTNode<Item_Type>* right_val = NULL) : 
    data(the_data), left(left_val),  right(right_val) {}

  // Destructor (to avoid warning message)
  virtual ~BTNode() {}

  // to_string
  virtual std::string to_string() const {
    std::ostringstream os;
    os << data;
    return os.str();
  }
}; // End BTNode

// Overloading the ostream insertion operator
template<typename Item_Type>
  std::ostream& operator<<(std::ostream& out, 
                           const BTNode<Item_Type>& node) {
  return out << node.to_string();
}

#endif
