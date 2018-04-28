/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "BTNode.h"
#include "Expression_Tree.h"
#include "Binary_Tree.h"

#include <string>
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <algorithm>
#include <iterator>

/** This will read in the string or file then  >>operator it to the tree
    which is a function for reading file */
void Expression_Tree::read_expression_tree(std::istream& in) { //Begin
    in >> the_tree; //Thanks to professor's help
} //End

int Expression_Tree::evaluate() const { //Begin
    return evaluate(the_tree); //Thanks to professor's help
} //End

int Expression_Tree::evaluate(const Binary_Tree<std::string>& in) const { //Beg
    //If the tree is empty
    int empty = 0; //return this at the bottom

    //If tree has an integer return value;
    if (in.is_leaf()) { //Begin If
        istringstream buffer(in.get_data());
        int value;
        buffer >> value;
        return value;
    } //End If
    
    //if the tree has + - * / then do those for left and right value
    else { //Begin else
        char expression = in.get_data().at(0);
        int leftVal = evaluate(in.get_left_subtree());
        int rightVal = evaluate(in.get_right_subtree());
        if (expression == '+') { //Begin cases
            return leftVal + rightVal;
        }
        if (expression == '-') {
            return leftVal - rightVal;
        }
        if (expression == '*') {
            return leftVal * rightVal;
        }
        if (expression == '/') {
            return leftVal / rightVal;
        } //End cases
    } //End else
    
    return empty; //return 0 if tree is empty
} //End