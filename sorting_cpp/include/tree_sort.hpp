#ifndef __TREE_SORT_HPP__
#define __TREE_SORT_HPP__
#include "../include/sort.hpp"
/**
 * @brief 
 * Implement the quick sort algorithm in this class.
 */
template<class T>
class TreeSort:public Sort<T>{
    public:
    T *dat;
    struct Node{
        T key;
        Node *left;
        Node *right;
    };
    int l;
    public:
    void sort_data();
    void tree_sort(int);
    struct Node * insert(struct Node *, T);
    void storeSorted(struct Node *, int );
    //struct Node * newNode(T);

};

#endif