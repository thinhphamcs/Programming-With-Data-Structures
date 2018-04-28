#ifndef HEAPSORT_H
#define HEAPSORT_H

#include<algorithm>

namespace KW {

    /** build heap transform the sequence into a heap.
     * @param RI An iterator that meets the
              random-access iterator requirements
     * @param first An iterator that references the first element in the sequence to be sorted
     * @param last An iterator that references 1 past the end of the sequence
     * @param tot_compare Number of comparisons
     * @param tot_exchange Number of position swaps
     */
    template<typename RI>
    void build_heap(RI first, RI last, int& tot_compare, int& tot_exchange) {
        int n = 1;
        while (n < (last - first)) {
            ++n;
            RI child = first + n - 1;
            RI parent = first + (child - first - 1) / 2;
            ++tot_compare;
            while (parent >= first && *parent < *child) {
                ++tot_exchange;
                std::iter_swap(parent, child);
                child = parent;
                parent = first + (child - first - 1) / 2;
            }
        }
    }

    /** shrink heap transform a heap into a sorted sequence
     * @param RI An iterator that meets the
              random-access iterator requirements
     * @param first An iterator that references the first element in the sequence to be sorted
     * @param last An iterator that references 1 past the end of the sequence
     * @param tot_compare Number of comparisons
     * @param tot_exchange Number of position swaps
     */
    template<typename RI>
    void shrink_heap(RI first, RI last, int& tot_compare, int& tot_exchange) {
        RI n = last;
        while (n != first) {
            --n;
            ++tot_exchange;
            std::iter_swap(first, n);
            RI parent = first;
            while (true) {
                RI left_child = first + 2 * (parent - first) + 1;
                ++tot_compare;
                if (left_child >= n) {
                    break;
                }
                RI right_child = left_child + 1;
                RI max_child = left_child;
                ++tot_compare;
                if (right_child < n && *left_child < *right_child) {
                    max_child = right_child;
                }
                if (*parent < *max_child) {
                    std::iter_swap(parent, max_child);
                    parent = max_child;
                } else {
                    break;
                }
            }
        }
    }

    /** Sort data in the specified range using heapsort.
     * @param RI An iterator that meets the
              random-access iterator requirements
     * @param first An iterator that references the first element in the sequence to be sorted
     * @param last An iterator that references 1 past the end of the sequence
     * @param tot_compare Number of comparisons
     * @param tot_exchange Number of position swaps
     */
    template<typename RI>
    void heap_sort(RI first, RI last, int& tot_compare, int& tot_exchange) {
        tot_compare = 0;
        tot_exchange = 0;

        build_heap(first, last, tot_compare, tot_exchange);
        shrink_heap(first, last, tot_compare, tot_exchange);
    }
}

#endif /* HEAPSORT_H */