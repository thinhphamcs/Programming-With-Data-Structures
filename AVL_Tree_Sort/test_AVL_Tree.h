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

#ifndef _TEST_AVL_TREE.H_
#define _TEST_AVL_TREE.H_

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "Binary_Search_Tree.h"
#include "AVL_Tree.h"
#include "pre_order_traversal.h"

using namespace std;

class test_AVL_Tree : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testMyFunction() {
        // ofstream out;  // save to a file; uncomment this line
        ostringstream out;
        // out.open ("example.txt");  // open file to save; uncomment this line
        Binary_Search_Tree<string>* the_tree = NULL;
        the_tree = new AVL_Tree<string>;
        double value;
        string line;
        ifstream myfile("BSTtest1"); //.txt
        if (myfile.is_open()) {
            while (getline(myfile, line)) {
                // the_tree->insert(atof(line.c_str()));
                the_tree->insert(line);
            }
            myfile.close();
        } else cout << "Unable to open file";
        // pre_order_traversal(*the_tree, cout, 0);
        pre_order_traversal(*the_tree, out, 0);
        myfile.close();
        cout << out.str();
        //return 0;

    }
};
#endif /* _TEST_AVL_TREE.H_ */
