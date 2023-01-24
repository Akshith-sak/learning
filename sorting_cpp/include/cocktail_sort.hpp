#ifndef __COCKTAIL_SORT_HPP__
#define __COCKTAIL_SORT_HPP__
#include "../include/sort.hpp"
/**
 * @brief 
 * Implement the quick sort algorithm in this class.
 */
template<class T>
class CocktailSort:public Sort<T>{
    public:
    T *dat;
    int l;
    public:
    void cocktail_sort(int);
    void sort_data();
     

};

#endif