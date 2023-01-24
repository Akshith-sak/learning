#include<iostream>
#include "../include/quick_sort.hpp"
using namespace std;
template class QuickSort<int>;
template<class T>
void QuickSort<T>::quick_sort(int low,int high)
{
    if(low<high)
    {
        int pi=partition(low,high);
        quick_sort(low,pi-1);
        quick_sort(pi+1,high);
    }
}
template<class T>
int QuickSort<T>::partition(int low,int high)
{
    int pivot;
    int i,j;
    int temp;
    pivot=dat[low];
    i=low;
    j=high;
    while(i<j)
    {
        while(dat[i]<=pivot) i++;
        while(dat[j]>pivot) j--;
        if(i<j)
            swap(dat[i],dat[j]);
    }
    swap(dat[low],dat[j]);
    return j;
}
template<class T>
void QuickSort<T>::sort_data()
{
    int low,high;
    dat=this->getd();
    l=this->getl();
    low=0;
    high=l-1;
    quick_sort(low,high);
    this->setd(dat,l);
}
