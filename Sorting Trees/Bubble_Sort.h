/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bubble_Sort.h
 * Author: Thinh
 *
 * Created on November 18, 2017, 1:00 PM
 */

#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <algorithm>

namespace KW { //Begin KW

    /** Sort data in the specified sequence using bubble sort.
    @param RI An iterator that meets the
    random-access iterator requirements
    @param first An iterator that references
    the first element in the sequence to be sorted
    @param last An iterator that references
    1 past the end of the sequence
     */
    template<typename RI>
    void bubble_sort(RI first, RI last, int& tot_compare, int& tot_exchange) {
        tot_compare = 0;
        tot_exchange = 0;
        int pass = 1;
        bool exchanges;
        do {
            // Invariant: Elements after position last - pass
            // are in place.
            exchanges = false; // No exchanges yet.
            // Compare each pair of adjacent elements.
            for (RI first_of_pair = first;
                    first_of_pair != last - pass; ++first_of_pair) {
                RI second_of_pair = first_of_pair + 1;
                ++tot_compare;
                if (*second_of_pair < *first_of_pair) {
                    // Exchange pair.
                    ++tot_exchange;
                    std::iter_swap(first_of_pair, second_of_pair);
                    exchanges = true; // Set flag.
                }
            }
            pass++;
        } while (exchanges);
        // Assert: Array is sorted.
    }
} // End namespace KW

#endif /* BUBBLE_SORT_H */

