/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TwoDArray.cpp
 * Author: Thinh
 * 
 * Created on September 20, 2017, 11:14 AM
 */

#include "TwoDArray.h"
#include <string>
#include <stdio.h>
#include <math.h>

/* *the_array is a two dimensional array; row_num is the row size ; 
col_size is column size; row_vals is the new the row*/
void set_row(double *the_array, int row_num, int col_size, double *row_vals) {

    //Stores the array of row_ vals in row using for loop
    for (int i = 0; i < col_size; i++) { //Begin loop
        //(row_num * col_size) = offset then + the increment then + to the array
        //(row_vals + increment)<-pointer then asign it to the array to set row
        *(the_array + (row_num * col_size) + i) = *(row_vals + i);
    } //End loop
} //End

//Return a row of two-dimensional array by row number.
double* get_row(double *the_array, int row_num, int col_size) { //Begin
    return the_array + row_num; //Returns the specified row from TwoDArray
} //End

//Set a value in a two-dimensional array by row and column number
void set_element(double *the_array, int row_num, int col_size,
        int col_num, double val) { //Begin
    // Sets the specified element

    //First get the element
    val = (*(the_array + (row_num * col_size))); //+ col_num
    //Set val = get the element
    //    val = getTheElement;
    //    //Run loops for every single elements
    //    for (int i = 0; i < val; ++i) { //Begin loop
    //        val += (*(the_array + (row_num * col_size) + i)); //Set elements 2 array
    //    } //End loop
} //End

//Return a value from a two-dimensional array by row and column number.
double get_element(double *the_array, int row_num, int col_size, int col_num) {
    //Thanks to prof hint :D
    double getTheElement = (*(the_array + (row_num * col_size)) + col_num);
    return getTheElement; //Returns the specified element.
} //End

//Returns the sum
double sum(double *the_array, int row_size, int col_size) { //Begin
    //Variables
    double sum = 0.0;
    //Run loop for row
    for (size_t i = 0; i < row_size; i++) { //Begin Loop 1
        //Run loop for total number of elements in the array
        for (size_t j = 0; j < col_size; j++) { //Begin loop 2
            //Standard sum
            sum += (*(the_array + (i * row_size) + j));
        } //End loop 2
    } //End Loop 1
    return sum; //Returns sum of the values in the array
} //End

//Return the max element
double find_max(double *the_array, int row_size, int col_size) {
    //Returns the largest value in the array
    //Variables
    double maximum = 0; // (*(the_array + (0 * row_size) + 0))
    //Run loop for row
    for (int i = 0; i < row_size; i++) { //Begin Loop 1
        //Run loop for total number of elements in the array
        for (int j = 0; j < col_size; j++) { //Begin loop 2
            //If the_array[i][j] is still greater than maximum
            if ((*(the_array + (i * row_size) + j)) > maximum) { //Begin If
                maximum = (*(the_array + (i * row_size) + j));
            } //End If
        } //End loop 2
    } //End Loop 1
    return maximum; //Return maximum
}

//Returns the smallest value in the array
double find_min(double *the_array, int row_size, int col_size) {
    //Variables
    double minumum = 0; // (*(the_array + (0 * row_size) + 0))
    //Run loop for row
    for (int i = 0; i < row_size; i++) { //Begin loop 1
        //Run loop for col
        for (int j = 0; j < col_size; j++) { //Begin loop 2
            //If the_array[i][j] is still less than minimum
            if ((*(the_array + (i * row_size) + j)) < minumum) { //Begin If
                minumum = (*(the_array + (i * row_size) + j));
            } //End If
        } //End loop 2  
    } //End loop 1
    return minumum; //Return minimum
}

//Returns a string representing the matrix
std::string to_string(double *the_array, int row_size, int col_size) { //Begin 
        //Run loop for row
        for (int i = 0; i < row_size; i++) { //Begin loop 1
            //Run loop for column
            for (int j = 0; j < col_size; j++) { //Begin loop 2
                //then print out the array 
                printf("%p ", &the_array);
                //if row = the number of row go down to make new line
                if (j == row_size) { //Begin If
                    printf("\n");
                    return 0;
                } //End If
            } //End loop 2
        } //End loop 1
        return 0;
} //End
