#ifndef __MERGE_SORT_HPP__
#define __MERGE_SORT_HPP__
#include "../include/sort.hpp"
/**
 * @brief 
 * Implement the Merge sort algorithm in this class.
 */
template<class T>
class MergeSort:public Sort<T>{
     public:
    T *dat;
    int l;
    public:
    void mergesort(int low, int mid, int high);
    void merge(int low, int mid, int high);
    void sort_data();

};

#endif