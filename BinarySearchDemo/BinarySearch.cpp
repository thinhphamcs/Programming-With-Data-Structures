/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinarySearch.cpp
 * Author: Thinh
 *
 * Created on October 21, 2017, 1:03 PM
 */

#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;

int binarySearch(vector<int>items, int target, int first, int last) {
    if(first > last) {
        return -1;
    }
    else {
        int middle = (first + last) / 2;
        if(target == items[middle]) {
            return middle;
        }
        else if(target < items[middle]) {
            return binarySearch(items, target, first, middle - 1);
        }
        else {
            return binarySearch(items, target, middle + 1, last);
        }
    }
}

//helper function 
int binarySearch(vector<int>items, int target) {
    
    int i = binarySearch(items, target, 0, items.size());
    return i;
    
}

/*
 * 
 */
int main(int argc, char** argv) {
    vector<int> items = {1, 2, 3, 4, 5};
    cout << binarySearch(items, 6) << endl;
    return 0;
}

