/* 
 * File:   Node.h
 * Author: Thinh
 *
 * Created on October 5, 2017, 3:02 PM
 */

#ifndef NODE_H
#define NODE_H

#include <cstddef>

/** A Node is the building block for a single-linked list. */
//template<typename Item_Type>
struct Node { //Begin
    // Data Fields
    /** The data */
    
    Item_Type data;
    /** The pointer to the next node. */
    Node* next;
    
    // Constructor
    /** Creates a new Node that points to another Node.
    @param data_item The data stored
    @param next_ptr Pointer to the Node that is
    pointed to by the new Node */
    Node(const Item_Type& data_item, Node* next_ptr = NULL) :
    data(data_item), next(next_ptr) {}
}; //End

#endif /* NODE_H */
