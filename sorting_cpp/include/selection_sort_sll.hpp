#ifndef __SELECTION_SORT_SLL_HPP__
#define __SELECTION_SORT_SLL_HPP__
#include "../include/sort.hpp"
/**
 * @brief 
 * Implement the quick sort algorithm in this class.
 */
template<class T>
class SelectionSortSll:public Sort<T>{
    public:
    T *dat;
    struct Node{
        T dat;
        Node *link;
    };
    int l;
    public:
    void selection_sort_sll(struct Node *);
    void sort_data();
     

};

#endif