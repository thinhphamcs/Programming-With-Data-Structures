/* 
 * File:   testTwoDArray.h
 * Author: Thinh
 *
 * Created on 9/27/2017, 11:50
 * 
 * This file uses the CxxTest library <TestSuite> to create test cases 
 * for a students project. For full cxxtest documentation see the userguide
 * located in your C:\MinGW\cxxtest\doc or visit: 
 * http://cxxtest.com/guide.html
 * 
 */

#ifndef TESTTWODARRAY_H
#define TESTTWODARRAY_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
#include "TwoDArray.h"
//#include <iostream>
//#include <string>

class testTwoDArray : public CxxTest::TestSuite {
public:
    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    //Testing set row might change the return type
    //void set_row(double *the_array, int row_num, int col_size,
    //             double *row_vals)

    void testSet_Row() {
        //Variables const (no change)
        const size_t ROW_SIZE = 5;
        const size_t COL_SIZE = 7;

        //Actual 2D Array
        double the_array[ROW_SIZE][COL_SIZE];

        //Values
        double row1[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
        double row2[] = {10.0, 9.0, 8.0, 7.0, 6.0, 5.0, 4.0};
        double row3[] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
        double row4[] = {5.0, 5.0, 5.0, 5.0, 5.0, 5.0, 5.0};
        double row5[] = {2.0, 3.0, 4.0, 9.0, 8.0, 7.0, 6.0};

        //Set rows
        set_row(&the_array[0][0], 0, COL_SIZE, row1);
        set_row(&the_array[0][0], 1, COL_SIZE, row2);
        set_row(&the_array[0][0], 2, COL_SIZE, row3);
        set_row(&the_array[0][0], 3, COL_SIZE, row4);
        set_row(&the_array[0][0], 4, COL_SIZE, row5);

        //Testing
        TS_ASSERT(&the_array[ROW_SIZE][COL_SIZE]);
    }

    //double* get_row(double *the_array, int row_num, int col_size);

    void testGet_Row() {
        //Variables const (no change)
        const size_t ROW_SIZE = 5;
        const size_t COL_SIZE = 7;

        //Actual 2D Array
        double the_array[ROW_SIZE][COL_SIZE];

        //Values
        double row1[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
        double row2[] = {10.0, 9.0, 8.0, 7.0, 6.0, 5.0, 4.0};
        double row3[] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
        double row4[] = {5.0, 5.0, 5.0, 5.0, 5.0, 5.0, 5.0};
        double row5[] = {2.0, 3.0, 4.0, 9.0, 8.0, 7.0, 6.0};

        //Set rows
        set_row(&the_array[0][0], 0, COL_SIZE, row1);
        set_row(&the_array[0][0], 1, COL_SIZE, row2);
        set_row(&the_array[0][0], 2, COL_SIZE, row3);
        set_row(&the_array[0][0], 3, COL_SIZE, row4);
        set_row(&the_array[0][0], 4, COL_SIZE, row5);

        //Testing
        TS_ASSERT_SAME_DATA(get_row(&the_array[0][0], 0, COL_SIZE)
                , row1, COL_SIZE);
    }

    //void set_element(double *the_array, int row_num, int col_size, 
    //                int col_num, double val); 

    void testSet_Element() {
        //Variables const (no change)
        const size_t ROW_SIZE = 5;
        const size_t COL_SIZE = 7;

        //Actual 2D Array
        double the_array[ROW_SIZE][COL_SIZE];

        //Values
        double row1[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
        double row2[] = {10.0, 9.0, 8.0, 7.0, 6.0, 5.0, 4.0};
        double row3[] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
        double row4[] = {5.0, 5.0, 5.0, 5.0, 5.0, 5.0, 5.0};
        double row5[] = {2.0, 3.0, 4.0, 9.0, 8.0, 7.0, 6.0};

        //Set rows
        set_row(&the_array[0][0], 0, COL_SIZE, row1);
        set_row(&the_array[0][0], 1, COL_SIZE, row2);
        set_row(&the_array[0][0], 2, COL_SIZE, row3);
        set_row(&the_array[0][0], 3, COL_SIZE, row4);
        set_row(&the_array[0][0], 4, COL_SIZE, row5);

        //Testing
        //TS_ASSERT(set_element(&the_array[ROW_SIZE][COL_SIZE], 5, 7, 0, 0.0));

    }

    //double get_element(double *the_array, int row_num, int col_size, 
    //                   int col_num);

    void testGet_Element() {
        //Variables const (no change)
        const size_t ROW_SIZE = 5;
        const size_t COL_SIZE = 7;

        //Actual 2D Array
        double the_array[ROW_SIZE][COL_SIZE];

        //Values
        double row1[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
        double row2[] = {10.0, 9.0, 8.0, 7.0, 6.0, 5.0, 4.0};
        double row3[] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
        double row4[] = {5.0, 5.0, 5.0, 5.0, 5.0, 5.0, 5.0};
        double row5[] = {2.0, 3.0, 4.0, 9.0, 8.0, 7.0, 6.0};

        //Set rows
        set_row(&the_array[0][0], 0, COL_SIZE, row1);
        set_row(&the_array[0][0], 1, COL_SIZE, row2);
        set_row(&the_array[0][0], 2, COL_SIZE, row3);
        set_row(&the_array[0][0], 3, COL_SIZE, row4);
        set_row(&the_array[0][0], 4, COL_SIZE, row5);

        //Testing
        TS_ASSERT_EQUALS(get_element(&the_array[ROW_SIZE][COL_SIZE], 5, 7, 5), 5);
    }

    //    //    //double sum(double *the_array, int row_size, int col_size);

    void testSum() {
        //Variables const (no change)
        const size_t ROW_SIZE = 5;
        const size_t COL_SIZE = 7;

        //Actual 2D Array
        double the_array[ROW_SIZE][COL_SIZE];

        //Values
        double row1[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
        double row2[] = {10.0, 9.0, 8.0, 7.0, 6.0, 5.0, 4.0};
        double row3[] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
        double row4[] = {5.0, 5.0, 5.0, 5.0, 5.0, 5.0, 5.0};
        double row5[] = {2.0, 3.0, 4.0, 9.0, 8.0, 7.0, 6.0};

        //Set rows
        set_row(&the_array[0][0], 0, COL_SIZE, row1);
        set_row(&the_array[0][0], 1, COL_SIZE, row2);
        set_row(&the_array[0][0], 2, COL_SIZE, row3);
        set_row(&the_array[0][0], 3, COL_SIZE, row4);
        set_row(&the_array[0][0], 4, COL_SIZE, row5);

        //Testing
        TS_ASSERT(sum(&the_array[ROW_SIZE][COL_SIZE], 5, 7));
    }

    //double find_max(double *the_array, int row_size, int col_size);

    void testFind_Max() {
        //Variables const (no change)
        const size_t ROW_SIZE = 5;
        const size_t COL_SIZE = 7;

        //Actual 2D Array
        double the_array[ROW_SIZE][COL_SIZE];

        //Values
        double row1[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
        double row2[] = {10.0, 9.0, 8.0, 7.0, 6.0, 5.0, 4.0};
        double row3[] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
        double row4[] = {5.0, 5.0, 5.0, 5.0, 5.0, 5.0, 5.0};
        double row5[] = {2.0, 3.0, 4.0, 9.0, 8.0, 7.0, 6.0};

        //Set rows
        set_row(&the_array[0][0], 0, COL_SIZE, row1);
        set_row(&the_array[0][0], 1, COL_SIZE, row2);
        set_row(&the_array[0][0], 2, COL_SIZE, row3);
        set_row(&the_array[0][0], 3, COL_SIZE, row4);
        set_row(&the_array[0][0], 4, COL_SIZE, row5);

        //Testing
        TS_ASSERT(find_max(&the_array[ROW_SIZE][COL_SIZE], 5, 7));
    }

    //double find_min(double *the_array, int row_size, int col_size);

    void testFind_Min() {
        //Variables const (no change)
        const size_t ROW_SIZE = 5;
        const size_t COL_SIZE = 7;

        //Actual 2D Array
        double the_array[ROW_SIZE][COL_SIZE];

        //Values
        double row1[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
        double row2[] = {10.0, 9.0, 8.0, 7.0, 6.0, 5.0, 4.0};
        double row3[] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
        double row4[] = {5.0, 5.0, 5.0, 5.0, 5.0, 5.0, 5.0};
        double row5[] = {2.0, 3.0, 4.0, 9.0, 8.0, 7.0, 6.0};

        //Set rows
        set_row(&the_array[0][0], 0, COL_SIZE, row1);
        set_row(&the_array[0][0], 1, COL_SIZE, row2);
        set_row(&the_array[0][0], 2, COL_SIZE, row3);
        set_row(&the_array[0][0], 3, COL_SIZE, row4);
        set_row(&the_array[0][0], 4, COL_SIZE, row5);

        //Testing
        TS_ASSERT_LESS_THAN(find_min(&the_array[ROW_SIZE][COL_SIZE], 5, 7), 5);
    }

    //std::string to_string(double *the_array, int row_size, int col_size);

    void testTo_String() {
        //Variables const (no change)
        const size_t ROW_SIZE = 5;
        const size_t COL_SIZE = 7;

        //Actual 2D Array
        double the_array[ROW_SIZE][COL_SIZE];

        //Values
        double row1[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
        double row2[] = {10.0, 9.0, 8.0, 7.0, 6.0, 5.0, 4.0};
        double row3[] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
        double row4[] = {5.0, 5.0, 5.0, 5.0, 5.0, 5.0, 5.0};
        double row5[] = {2.0, 3.0, 4.0, 9.0, 8.0, 7.0, 6.0};

        //Set rows
        set_row(&the_array[0][0], 0, COL_SIZE, row1);
        set_row(&the_array[0][0], 1, COL_SIZE, row2);
        set_row(&the_array[0][0], 2, COL_SIZE, row3);
        set_row(&the_array[0][0], 3, COL_SIZE, row4);
        set_row(&the_array[0][0], 4, COL_SIZE, row5);

        //Testing
        TS_ASSERT(&the_array[ROW_SIZE][COL_SIZE]);
    }
};
#endif /* %<%GUARD_NAME%>% */
