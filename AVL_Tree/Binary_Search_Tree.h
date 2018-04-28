/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Binary_Search_Tree.h
 * Author: Thinh
 *
 * Created on November 18, 2017, 1:39 PM
 */

#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include "Binary_Tree.h"
#include "BTNode.h"

template<typename Item_Type>
class Binary_Search_Tree : public Binary_Tree<Item_Type> {
public:

    Binary_Search_Tree() : Binary_Tree<Item_Type>() {
    }

    //helper
    virtual bool insert(const Item_Type& item);
    virtual bool erase(const Item_Type& item);
    const Item_Type* find(const Item_Type& target) const;

private:

    virtual bool insert(BTNode<Item_Type>*& local_root,
            const Item_Type& item);
    virtual bool erase(BTNode<Item_Type>*& local_root,
            const Item_Type& item);
    const Item_Type* find(BTNode<Item_Type>* local_root,
            const Item_Type& target) const;
    virtual void replace_parent(BTNode<Item_Type>*& old_root,
            BTNode<Item_Type>*& loca_root());

};

template<typename Item_Type>
bool Binary_Search_Tree<Item_Type>::insert(const Item_Type& item) {
    return insert(this->root, item);
}

template<typename Item_Type>
bool Binary_Search_Tree<Item_Type>::insert(
        BTNode<Item_Type>*& local_root,
        const Item_Type& item) {
    if (local_root == NULL) {
        local_root = new BTNode<Item_Type>(item);
        return true;
    } else {
        if (item < local_root->data)
            return insert(local_root->left, item);
        else if (item > local_root->data)
            return insert(local_root->right, item);
        else
            return false;
    }
}

template<typename Item_Type>
bool Binary_Search_Tree<Item_Type>::erase(const Item_Type& item) {
    return erase(this->root, item);
}

template<typename Item_Type>
bool Binary_Search_Tree<Item_Type>::erase(
        BTNode<Item_Type>*& local_root,
        const Item_Type& item) {
    if (local_root == NULL) {
        return false;
    } else {
        if (item < local_root->data)
            return erase(local_root->left, item);
        else if (item > local_root->data)
            return erase(local_root->right, item);
            //found
        else {
            BTNode<Item_Type>* old_root = local_root;
            if (local_root->left == NULL) {
                local_root = local_root->right;
            } else if (local_root->right == NULL) {
                local_root = local_root->left;
            } else {
                replace_parent(old_root, old_root->left);
            }
            delete old_root;
            return true;
        }
    }
}

template<typename Item_Type>
void Binary_Search_Tree<Item_Type>::replace_parent(BTNode<Item_Type>*& old_root,
        BTNode<Item_Type>*& local_root) {
    if (local_root->right != NULL) {
        replace_parent(old_root, local_root->right);
    } else {
        old_root->data = local_root->data;
        old_root = local_root;
        local_root = local_root->left;
    }
}

template<typename Item_Type>
const Item_Type* Binary_Search_Tree<Item_Type>::find(const Item_Type& target)
const {
    return find(this->root, target);
}

template<typename Item_Type>
const Item_Type* Binary_Search_Tree<Item_Type>::find(BTNode<Item_Type>*
        local_root, const Item_Type& target) const {
    if (local_root->right != NULL) {
        if (local_root == NULL) {
            return NULL;
        } else {
            if (target < local_root->data)
                return find(local_root->left, target);
            else if (target > local_root->data)
                return find(local_root->right, target);
                //found
            else {
                return &(local_root->data);
            }
        }
    }
}

#endif /* BINARY_SEARCH_TREE_H */