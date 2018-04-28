/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AVL_Tree.h
 * Author: Thinh
 *
 * Created on November 18, 2017, 3:15 PM
 */

#ifndef AVL_TREE_H
#define AVL_TREE_H

#include "BST_With_Rotate.h"
#include "AVL_Node.h"

template<typename Item_Type>
class AVL_Tree : public BST_With_Rotate<Item_Type> {
public:

    AVL_Tree() : BST_With_Rotate<Item_Type>() {

    }

    virtual bool insert(const Item_Type& item) {
        return insert(this->root, item);
    }

    virtual bool erase(const Item_Type& item) {
        return erase(this->root, item);
    }

private:

    virtual bool insert(BTNode<Item_Type>*& local_root, const Item_Type& item);
    void rebalance_left(BTNode<Item_Type>*& local_root);
    void rebalance_right(BTNode<Item_Type>*& local_root);

    virtual void erase(BTNode<Item_Type>*& local_root, const Item_Type& item);
    virtual void replace_parent(BTNode<Item_Type>*& old_root,
            BTNode<Item_Type>*& local_root);
    void erase_rebalance_left(BTNode<Item_Type>*& local_root);
    void erase_rebalance_right(BTNode<Item_Type>*& local_root);

    bool increase;
    bool decrease;

};

template<typename Item_Type>
bool AVL_Tree<Item_Type>::insert(BTNode<Item_Type>*& local_root,
        const Item_Type& item) {
    if (local_root == NULL) {
        local_root = new AVL_Node<Item_Type>(item);
        increase = true;
        return true;
    } else {
        if (item < local_root->data) {
            bool return_value = insert(local_root->left, item);
            if (increase) {
                AVL_Node<Item_Type>* AVL_local_root = 
                        dynamic_cast<AVL_Node<Item_Type>>(local_root);
                switch(AVL_local_root->balance) {
                    case AVL_Node<Item_Type>::BALANCED:
                        AVL_local_root->balance = AVL_Node<Item_Type>::LEFT_HEAVY;
                        break;
                }
            }
        }
        else if (item > local_root->data)
            return insert(local_root->right, item);
        else
            return false;
    }
}

#endif /* AVL_TREE_H */