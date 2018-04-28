/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Random.h
 * Author: Thinh
 *
 * Created on November 18, 2017, 5:02 PM
 */

#ifndef RANDOM_H
#define RANDOM_H

#include <cstdlib>
#include <ctime>

/** Class to encapsulate the standard random number generator */

class Random {
public:

    /** Initialize the random number generator using the time
        as the seed */
    Random() {
        srand(std::time(0));
    }

    /** Initialize the randon mumber generator using a supplied
        seed */
    Random(int seed) {
        srand(seed);
    }

    /** Return a random integer in the range 0 - n */
    int next_int(int n) {
        return int(next_double() * n);
    }

    /** Return a random double in the range 0 - 1 */
    double next_double() {
        return double(rand()) / RAND_MAX;
    }

};

#endif /* RANDOM_H */

