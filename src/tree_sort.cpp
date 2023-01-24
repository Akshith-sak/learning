#include<iostream>
#include "../include/tree_sort.hpp"
using namespace std;
template class TreeSort<int>;

// template<class T>
// struct  TreeSort<T>::Node * newNode(T item)
// {
//     Node *temp=NULL;
//     Node *temp =new Node;
//     temp->key = item;
//     temp->left = temp->right = NULL;
//     return temp;
// }
template<class T>
void TreeSort<T>::storeSorted(struct Node * root, int i)
{
    if (root != NULL)
    {
        storeSorted(root->left, i);
        dat[i++] = root->key;
        storeSorted(root->right, i);
    }
}
template<class T>
struct  TreeSort<T>::Node * insert(struct Node * node, T key)
{
    if (node == NULL) //return newNode(key);
    {
        Node *new_node=new Node;
        new_node->key=key;
        new_node->left=new_node->right=NULL;
        node=new_node;
        return node;
    }
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
 
    return node;
}

template<class T>
void TreeSort<T>::tree_sort(int n)
{
    Node *root = NULL;
    root = insert(root, dat[0]);
    for (int i=1; i<n; i++)
        root = insert(root, dat[i]);
 
    int i = 0;
    storeSorted(root,i);
}

template<class T>
void TreeSort<T>::sort_data()
{
    int low,high;
    dat=this->getd();
    l=this->getl();
    low=0;
    high=l;
    tree_sort(high);
    this->setd(dat,l);
}