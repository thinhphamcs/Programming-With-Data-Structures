#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <algorithm>

namespace KW {

    /** Partition the table so that values in the iterator range 
     *  first through pivot are less than or equal to the pivot value,
     *  and values in the iterator range pivot + 1 through last
     *  are greater than the pivot value.
     * @param RI An iterator that meets the
              random-access iterator requirements
     * @param first An iterator that references the first element in the sequence to be sorted
     * @param last An iterator that references 1 past the end of the sequence
     * @param tot_compare Number of comparisons
     * @param tot_exchange Number of position swaps
     * @return The position of the pivot value (originally at first)
     */
    template<typename RI>
    RI partition(RI first, RI last, int& tot_compare, int& tot_exchange) {
        RI up = first + 1;
        RI down = last - 1;
        do {
            ++tot_compare;
            while ((up != last - 1) && !(*first < *up)) {
                ++up;
            }

            ++tot_compare;
            while (*first < *down) {
                --down;
            }

            ++tot_compare;
            if (up < down) {
                ++tot_exchange;
                std::iter_swap(up, down);
            }
        }        while (up < down);
        ++tot_exchange;
        std::iter_swap(first, down);
        return down;
    }

    /** Sort data in the specified range using quick sort
     * @param RI An iterator that meets the
              random-access iterator requirements
     * @param first An iterator that references the first element in the sequence to be sorted
     * @param last An iterator that references 1 past the end of the sequence
     * @param tot_compare Number of comparisons
     * @param tot_exchange Number of position swaps
     */
    template<typename RI>
    void quick_sort(RI first, RI last, int &tot_compare, int &tot_exchange) {

        if (last - first > 1) {
            RI pivot = partition(first, last, tot_compare, tot_exchange);
            KW::quick_sort(first, pivot, tot_compare, tot_exchange);
            KW::quick_sort(pivot + 1, last, tot_compare, tot_exchange);
        }
    }
}

#endif /* QUICKSORT_H */