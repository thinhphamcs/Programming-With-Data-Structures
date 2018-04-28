/* 
 * File:   %<%NAME%>%.%<%EXTENSION%>%
 * Author: %<%USER%>%
 *
 * Created on %<%DATE%>%, %<%TIME%>%
 * 
 * This file uses the CxxTest library <TestSuite> to create test cases 
 * for a students project. For full cxxtest documentation see the userguide
 * located in your C:\MinGW\cxxtest\doc or visit: 
 * http://cxxtest.com/guide.html
 * 
 */

#ifndef TEST_EXPRESSION_TREE_H_
#define TEST_EXPRESSION_TREE_H_

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
#include "Expression_Tree.h"

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>  // Needed for exit()

class test_Expression_Tree : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    //Test all the requirements
    void testAllMyFunction() { //Begin
        Expression_Tree the_tree;
        BTNode<string> *empty = NULL;
        BTNode<string> *root = new BTNode<string>("+");
        root->left = new BTNode<string>("*");
        root->left->left = new BTNode<string>("5");
        root->left->right = new BTNode<string>("4");
        root->right = new BTNode<string>("-");
        root->right->left = new BTNode<string>("100");
        root->right->right = new BTNode<string>("20");
        TS_ASSERT_THROWS_ANYTHING(the_tree.evaluate());
        if (empty == NULL) {
            TS_ASSERT(true);
        }
        else {
        TS_ASSERT_EQUALS(the_tree.evaluate(), 100);
        }
        
        delete(root);
    } //End 
};
#endif /* %<%GUARD_NAME%>% */