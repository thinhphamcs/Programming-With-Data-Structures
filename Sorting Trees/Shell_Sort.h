#ifndef SHELLSORT_H
#define SHELLSORT_H

namespace KW {

    /**
     * Insert the element at position next_pos in the sorted subarray.
     * pre: elements at postion 0 through next_pos - 1 are sorted
     * post: elements at position 0 through next_pos are sorted
     * @param RI An iterator that meets the
              random-access iterator requirements
     * @param first An iterator that references the first element in the sequence to be sorted
     * @param next_pos An iterator that references the element to insert
     * @param gap The gap between elements in the sequence to be sorted
     * @param tot_compare Number of comparisons
     * @param tot_exchange Number of position swaps
     */
    template<typename RI>
    void insert(RI first, RI next_pos, int gap, int& tot_compare, int& tot_exchange) {
        typename std::iterator_traits<RI>::value_type next_val = *next_pos;

        while ((next_pos > first + gap - 1) && (next_val < *(next_pos - gap))) {
            ++tot_compare;
            ++tot_exchange;
            *next_pos = *(next_pos - gap);
            next_pos -= gap;
        }
        *next_pos = next_val;
    }

    /**
     * Sort data in the specified range using Shell sort.
     * @param RI An iterator that meets the
              random-access iterator requirements
     * @param first An iterator that references the first element in the sequence to be sorted
     * @param last An iterator that references 1 past the end of the sequence
     * @param tot_compare Number of comparisons
     * @param tot_exchange Number of position swaps
     */
    template<typename RI>
    void shell_sort(RI first, RI last, int& tot_compare, int& tot_exchange) {
        tot_compare = 0;
        tot_exchange = 0;

        int gap = (last - first) / 2;
        while (gap > 0) {
            for (RI next_pos = first + gap; next_pos != last; ++next_pos) {
                KW::insert(first, next_pos, gap, tot_compare, tot_exchange);
            }

            if (gap == 2) {
                gap = 1;
            } else {
                gap = int(gap / 2.2);
            }
        }
    }

}

#endif /* SHELLSORT_H */