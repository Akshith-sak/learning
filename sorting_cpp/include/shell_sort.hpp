#ifndef __SHELL_SORT_HPP__
#define __SHELL_SORT_HPP__
#include "../include/sort.hpp"
/**
 * @brief 
 * Implement the quick sort algorithm in this class.
 */
template<class T>
class ShellSort:public Sort<T>{
    public:
    T *dat;
    int l;
    public:
    void shell_sort(int low,int high);
    void sort_data();
     

};

#endif