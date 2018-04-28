/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   size.cpp
 * Author: Thinh
 *
 * Created on October 21, 2017, 12:16 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

void reverse(string s) {
    if(s.length() == 0) {
        return;
    }
    else {
        reverse(s.substr(1));
        cout << s.at(0);
       
    }
}

int size(string s) {
    if(s.length() == 0) {
        return 0;
    }
    else {
        return 1 + size(s.substr(1));
    }
}

/*
 * 
 */
int main(int argc, char** argv) {
    int v = size("this is a recursion");
    cout << v << endl;
    
    reverse("this is a recursion");
    cout << endl;
    return 0;
}


