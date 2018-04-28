/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TwoDArray.h
 * Author: Thinh
 *
 * Created on September 20, 2017, 11:14 AM
 */

#ifndef TWODARRAY_H
#define TWODARRAY_H
#include <string>

// *the_array is a two dimensional array; row_num is the row size ; col_size 
//is column size; row_vals is the new the row
// Stores the array of row_ vals in row
void set_row(double *the_array, int row_num, int col_size, double *row_vals);

// return a row of two-dimensional array by row number.
// Returns the specified row from a two dimensional array
double* get_row(double *the_array, int row_num, int col_size);

// set a value in a two-dimensional array by row and column number
// Sets the specified element
void set_element(double *the_array, int row_num, int col_size, int col_num,
        double val);

// return a value from a two-dimensional array by row and column number.
// Returns the specified element
double get_element(double *the_array, int row_num, int col_size, int col_num);

// Returns sum of the values in the array
double sum(double *the_array, int row_size, int col_size);

// Returns the largest value in the array
double find_max(double *the_array, int row_size, int col_size);

// Returns the smallest value in the array
double find_min(double *the_array, int row_size, int col_size);

// Returns a string representing the matrix
std::string to_string(double *the_array, int row_size, int col_size);

#endif /* TWODARRAY_H */

