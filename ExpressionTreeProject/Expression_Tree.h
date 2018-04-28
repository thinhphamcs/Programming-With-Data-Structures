/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Expression_Tree.h
 * Author: Thinh
 *
 * Created on October 28, 2017, 1:47 PM
 */

#ifndef EXPRESSION_TREE_H_
#define EXPRESSION_TREE_H_

#include <string>
#include <iosfwd>
#include "Binary_Tree.h"

/** Class to model an expression using a binary tree */
class Expression_Tree {
public:

    Expression_Tree() {}
    void read_expression_tree(std::istream&);
    int evaluate() const;
private:
    int evaluate(const Binary_Tree<std::string>&) const;
    Binary_Tree<std::string> the_tree;
};

#endif
