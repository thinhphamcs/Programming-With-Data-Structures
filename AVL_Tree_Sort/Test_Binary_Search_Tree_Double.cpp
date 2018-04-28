///** Program to test binary tree class */
//
//#include <string>
//#include <iostream>
//#include <fstream>
//#include "Binary_Search_Tree.h"
//#include "AVL_Tree.h"
//#include "pre_order_traversal.h"
//
//using namespace std;
//
//int main(int argc, char* argv[]) 
//{
//  Binary_Search_Tree<double>* the_tree = NULL;
//  the_tree = new AVL_Tree<double>; 
//  double value;
//  while (cin >> value) {
//    if (value == 0.0) break;
//    the_tree->insert(value);
//    pre_order_traversal(*the_tree, cout, 0);
//  }
//  cin.clear();
//  //  while (cin >> value) {
//  //  if (value == 0.0) break;
//  //  the_tree->erase(value);
//  //  pre_order_traversal(*the_tree, cout, 0);
//  // }
//}  

#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "Binary_Search_Tree.h"
#include "AVL_Tree.h"
#include "pre_order_traversal.h"

using namespace std;

int main(int argc, char* argv[]) {
    // ofstream out;  // save to a file; uncomment this line
    ostringstream out;
    // out.open ("example.txt");  // open file to save; uncomment this line
    Binary_Search_Tree<string>* the_tree = NULL;
    the_tree = new AVL_Tree<string>;
    double value;
    string line;
    ifstream myfile("words.txt");
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
    return 0;
}
