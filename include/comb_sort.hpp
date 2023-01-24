#ifndef __COMB_SORT_HPP__
#define __COMB_SORT_HPP__
#include "../include/sort.hpp"
/**
 * @brief 
 * Implement the quick sort algorithm in this class.
 */
template<class T>
class CombSort:public Sort<T>{
    public:
    T *dat;
    int l;
    public:
    void comb_sort(int low,int high);
    void sort_data();
     

};

#endif