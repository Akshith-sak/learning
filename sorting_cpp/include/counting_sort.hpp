#ifndef __COUNTING_SORT_HPP__
#define __COUNTING_SORT_HPP__
#include "../include/sort.hpp"
/**
 * @brief 
 * Implement the quick sort algorithm in this class.
 */
template<class T>
class CountingSort:public Sort<T>{
    public:
    T *dat;
    int l;
    public:
    void counting_sort(int high);
    void sort_data();
     

};

#endif