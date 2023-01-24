#ifndef __BUBBLE_SORT_SLL_HPP__
#define __BUBBLE_SORT_SLL_HPP__
#include "../include/sort.hpp"
/**
 * @brief 
 * Implement the quick sort algorithm in this class.
 */
template<class T>
class BubbleSortSll:public Sort<T>{
    public:
    T *dat;
    struct Node{
        T dat;
        Node *link;
    };
    int l;
    public:
    void bubble_sort_sll(struct Node *,int);
    void sort_data();
     

};

#endif