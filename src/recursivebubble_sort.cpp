#include<iostream>
#include "../include/recursivebubble_sort.hpp"
using namespace std;
template class RecursiveBubbleSort<int>;
template<class T>
void RecursiveBubbleSort<T>::recursivebubble_sort(int n)
{
    if (n==0)
        return;
    for(int j=0;j<n;j++)
        if(dat[j]>dat[j+1])
            swap(dat[j],dat[j+1]);
    return recursivebubble_sort(n-1);
}

template<class T>
void RecursiveBubbleSort<T>::sort_data()
{
    int low,high;
    dat=this->getd();
    l=this->getl();
    low=0;
    high=l-1;
    recursivebubble_sort(high);
    this->setd(dat,l);
}