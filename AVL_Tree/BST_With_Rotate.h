/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BST_With_Rotate.h
 * Author: Thinh
 *
 * Created on November 18, 2017, 2:53 PM
 */

#ifndef BST_WITH_ROTATE_H
#define BST_WITH_ROTATE_H

#include "BTNode.h"


template<typename Item_Type>
class BST_With_Rotate : public Binary_Tree<Item_Type> {
protected:
    void rotate_right(BTNode<Item_Type>*& local_root) {
        BTNode<Item_Type>* temp = local_root->left;
        local_root->left = temp->right;
        temp->right = local_root;
        local_root = temp;
    }
    
    void rotate_left(BTNode<Item_Type>*& local_root) {
        BTNode<Item_Type>* temp = local_root->right;
        local_root->right = temp->left;
        temp->left = local_root;
        local_root = temp;
    }
};

#endif /* BST_WITH_ROTATE_H */
