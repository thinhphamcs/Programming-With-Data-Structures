#ifndef MERGESORT_H
#define MERGESORT_H


namespace KW {

    /** Merge data in two sorted input sequences into a sorted output sequence.
     * pre: Both input sequences are sorted
     * post: The output sequence is sorted and contains all elements in both input sequences 
     * @param RI An iterator that meets the
              random-access iterator requirements
     * @param left An iterator that references the first element in the left sequence 
     * @param end_left An iterator that references 1 past the end of the left sequence
     * @param right An iterator that references the first element in the right sequence
     * @param end_right An iterator that references 1 past the end of the right sequence
     * @param out An iterator that references the first element in the output sequence 
     * @param tot_compare Number of comparisons
     * @param tot_exchange Number of position swaps
     */
    template<typename RI>
    void merge(RI left, RI end_left, RI right, RI end_right, RI out, int& tot_compare, int& tot_exchange) {
        // while there is data in both input sequence
        while (left != end_left && right != end_right) {
            //Find the smaller and insert it into the output sequence
            ++tot_compare;
            if (*left < *right) {
                ++tot_exchange;
                *out++ = *left++;
            } else {
                ++tot_exchange;
                *out++ = *right++;
            }
        }
        //Assert: one of the sequences has more items to copy
        //Copy remaining input from left sequence into output
        while (left != end_left) {
            ++tot_exchange;
            *out++ = *left++;
        }
        //Copy remaining input from right sequence into output
        while (right != end_right) {
            ++tot_exchange;
            *out++ = *right++;
        }
    }

    /**Sort data in the specified range using merge sort
     * @param RI An iterator that meets the
              random-access iterator requirements
     * @param first An iterator that references the first element in the sequence to be sorted
     * @param last An iterator that references 1 past the end of the sequence
     * @param tot_compare Number of comparisons
     * @param tot_exchange Number of position swaps
     */
    template<typename RI>
    void merge_sort(RI first, RI last, int& tot_compare, int& tot_exchange) {
        if (last - first > 1) {
            //Split table into two new half tables
            typedef typename
            std::iterator_traits<RI>::value_type value_type;
            RI middle = first + (last - first) / 2;
            std::vector<value_type> left_table(first, middle);
            std::vector<value_type> right_table(middle, last);

            //Sort the halves
            KW::merge_sort(left_table.begin(), left_table.end(), tot_compare, tot_exchange);
            KW::merge_sort(right_table.begin(), right_table.end(), tot_compare, tot_exchange);

            //Merge the halves back into the original table
            merge(left_table.begin(), left_table.end(), right_table.begin(), right_table.end(), first, tot_compare, tot_exchange);
        }
    }
}

#endif /* MERGESORT_H */