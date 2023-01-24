#ifndef __QUICK_SORT_HPP__
#define __QUICK_SORT_HPP__
#include "../include/sort.hpp"
/**
 * @brief 
 * Implement the quick sort algorithm in this class.
 */
template<class T>
class QuickSort:public Sort<T>{
    public:
    T *dat;
    int l;
    public:
    void quick_sort(int low,int high);
    int partition(int low,int high);
    void sort_data();
     

};

#endif