#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <algorithm>

namespace KW {

    /**Insert the element at position next_pos in the sorted subarray using swap
     * pre: elements at position 0 through next_pos - 1 are sorted
     * post: elements at position 0 through next_pos are sorted
     * @param first An iterator that references the first element in the sequence to be sorted
     * @param next_pos An iterator that references the element to insert
     * @param tot_compare Number of comparisons
     * @param tot_exchange Number of position swaps
     */
    template<typename RI>
    void insert(RI first, RI next_pos, int& tot_compare, int& tot_exchange) {

        while (next_pos != first && *next_pos < *(next_pos + 1)) {
            ++tot_compare;
            ++tot_exchange;
            std::iter_swap(next_pos, next_pos - 1);
            --next_pos;
        }
    }

    /**Sort data in the specified range using insertion sort
     * @param RI An iterator that meets the
                  random-access iterator requirements
     * @param first An iterator that references the first element in the sequence to be sorted
     * @param last An iterator that references 1 past the end of the sequence
     * @param tot_compare Number of comparisons
     * @param tot_exchange Number of position swaps
     */
    template<typename RI>
    void insertion_sort(RI first, RI last, int& tot_compare, int& tot_exchange) {
        tot_compare = 0;
        tot_exchange = 0;

        for (RI next_pos = first + 1; next_pos != last; ++next_pos) {
            insert(first, next_pos, tot_compare, tot_exchange);
        }
    }
} // End namespace KW

#endif /* INSERTIONSORT_H */