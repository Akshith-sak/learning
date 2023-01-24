#ifndef __RECURSIVE_BUBBLE_SORT_HPP__
#define __RECURSIVE_BUBBLE_SORT_HPP__
#include "../include/sort.hpp"
/**
 * @brief 
 * Implement the quick sort algorithm in this class.
 */
template<class T>
class RecursiveBubbleSort:public Sort<T>{
    public:
    T *dat;
    int l;
    public:
    void recursivebubble_sort(int);
    void sort_data();
     

};

#endif