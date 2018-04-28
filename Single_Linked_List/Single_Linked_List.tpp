/* 
 * File:   Single_Linked_List.h
 * Author: Thinh
 *
 * Created on October 9, 2017, 11:44 PM
 */
#ifndef SINGLE_LINKED_LIST_TPP
#define SINGLE_LINKED_LIST_TPP

#include "Node.h"
#include "Single_Linked_List.h"
#include <algorithm>
#include <stdexcept>
#include <cstddef>
#include <deque>

/** Insert an item at the front of the list
        @param item The item to be inserted
 */
template<typename Item_Type>
void Single_Linked_List<Item_Type>::push_front(const Item_Type& item) { //Begin

    //Create node
    Node *temp = (Node*) malloc(sizeof (Node)); //Not sure about this
    temp -> data = item;
    temp -> next = NULL;

    //Empty list becomes the new node
    if (head == NULL) { //Begin
        head = temp;
        tail = temp;
    }//End
        //Find last and link the new node
    else { //Begin 
        tail -> next = temp;
        tail = tail -> next;
    } //End

} //End

/** Insert an item at the end of the list
    @param item The item to be inserted
 */
template<typename Item_Type>
void Single_Linked_List<Item_Type>::push_back(const Item_Type& item) { //Begin

    //Create Node
    Node *temp = (Node*) malloc(sizeof (Node));
    temp -> data = item;
    temp -> next = NULL;

    //Empty list becomes the new node
    if (!head) { //Begin
        head = temp;
        //return;
    }//End
        //Find last and link the new node
    else { //Begin 
        Node* last = head;
        while (last -> next) last = last -> next;
        last -> next = temp;
    } //End

} //End

/** Remove the front item of the list */
template<typename Item_Type>
void Single_Linked_List<Item_Type>::pop_front() { //Begin
    if (head != NULL) { //Begin
        //Create Node
        Node *temp = head->next;
        //delete the front item
        delete head;
        head = temp;
        num_items--; //or --num_items
    }//End
    else { //Begin
        throw std::invalid_argument("Attempt to call pop_front on empty list");
    } //End

} //End

/** Remove the last item of the list */
template<typename Item_Type>
void Single_Linked_List<Item_Type>::pop_back() { //Begin
    //
    if (head->next == NULL) { //Begin
        delete head;
        head = NULL;
    }//End
    else { //Begin
        //Create Node    
        Node *closeToEnd = head;
        Node *theEndValue = head->next;
        //
        while (theEndValue -> next != NULL) { //Begin
            closeToEnd = theEndValue;
            theEndValue = theEndValue -> next;
        } //End
        //
        delete theEndValue;
        //
        closeToEnd->next = NULL;
    } //End
    
} //End

/** Return a reference to the front item of the list
    @return A reference to the fron item of the list
 */
template<typename Item_Type>
Item_Type& Single_Linked_List<Item_Type>::front() { //Begin
    return head -> data;
} //End

/** Return a const reference to the front item of the list
    @return A const reference to the front item of the list
 */
template<typename Item_Type>
const Item_Type& Single_Linked_List<Item_Type>::front() const { //Begin
    return head -> data;
} //End

/** Return a reference to the back item of the list
    @return A reference to the back item of the list
 */
template<typename Item_Type>
Item_Type& Single_Linked_List<Item_Type>::back() { //Begin
    return tail->data;
} //End

/** Return a const reference to the back item of the list
    @return A const reference to the back item of the list
 */
template<typename Item_Type>
const Item_Type& Single_Linked_List<Item_Type>::back() const { //Begin
    return tail->data;
} //End

/** Determine if the list is empty
    @return true if the list is empty
 */

//No need for this function because .h already covered it

//template<typename Item_Type>
//bool Single_Linked_List<Item_Type>::empty() const { //Begin
//    return num_items == 0;
//} //End

/** Return the number of items in the list
    @return The number of items in the list
 */

//No need for this function because .h already covered it

//template<typename Item_Type>
//size_t Single_Linked_List<Item_Type>::size() const { //Begin
//    return num_items;
//} //End

/** Insert item at position index (starting at 0).  Insert
    at the end of index is beyond the end of the list.
    @param index The poisition to insert the item
    @param item The item to be inserted
 */
template<typename Item_Type>
void Single_Linked_List<Item_Type>::insert(size_t index,
        const Item_Type& item) { //Begin
    // Validate index.
    if (index > num_items) { //Begin
        throw std::out_of_range("index to insert is out of range");
    } //End
    // Ensure that there is space for the new item.
    if (num_items == index) { //Begin
        std::reverse<Item_Type>(2 * num_items); // Allocate an expanded array
    } //End
    // Move data from index to num_items - 1 down.
    for (size_t i = num_items; i > index; i--) { //Begin
        *(item + i) = *(item + (i - 1));
    } //End
    // Insert the new item.
    *(item + index) = item;
    num_items++;
    
} //End

/** Return a reference to the item at position index
    @param index The index of the item
    @return A reference to the item at index
 */
template<typename Item_Type>
Item_Type& Single_Linked_List<Item_Type>::get(size_t index) { //Begin

    Node *current = head;
    int count = 0; /* the index of the node we're currently
                  looking at */
    while (current != NULL) { //Begin
        if (count == index)
            return (current -> data);
        count++;
        current = current -> next;
    } //End
    
} //End

/** Return a const reference to the item at position index
    @param index The index of the item
    @return A const reference to the item at index
 */
template<typename Item_Type>
const Item_Type& Single_Linked_List<Item_Type>::get(size_t index) const { //B
    
    Node *current = head;
    int count = 0; /* the index of the node we're currently
                  looking at */
    while (current != NULL) { //Begin
        if (count == index)
            return (current -> data);
        count++;
        current = current -> next;
    } //End
    
} //End

/** Remove the item at position index.
    @return true if the removal is sucessful; false if index is
    beyond the end of the list
 */
template<typename Item_Type>
bool Single_Linked_List<Item_Type>::remove(size_t index) { //Begin
    
    Node *current_node = head; // To Traverse The linked list.

    // We keep track of what the previous node is.
    Node *previous_node = NULL;
    // Traverse to the nth node
    for (int i = 0; i < index; i++) { //Begin 
        previous_node = current_node;
        current_node = current_node -> next;
    } //End

    // current_node contains the nth element
    // previous_node contains the (n-1)th element.
    // Update (n-1)th node
    if (index != 0) { //Begin
        previous_node->next = current_node->next;
    } //End
    // Update the head node.
    else { //Begin
        head = head->next;
    free(current_node); // Delete the nth node
    return head; // Return the modified linked list. 
    } //End

} //End

/** Return the position of the first occurence of item.
    @return The position of the first occurence of the item. Return
    the size of the list if it is not found
 */
template<typename Item_Type>
size_t Single_Linked_List<Item_Type>::find(const Item_Type& item) { //Begin

    Node *q = head;
    int position = 0;
    while (q != NULL) { //Begin
        if (q -> data == item) { //Begin
            return position;
        } //End
        q = q -> next;
        position++;
    } //End
    
} //End
#endif