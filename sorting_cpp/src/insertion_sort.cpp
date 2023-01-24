#include<iostream>
#include "../include/insertion_sort.hpp"
using namespace std;
template class InsertionSort<int>;
template<class T>
void InsertionSort<T>::insertion_sort(int low,int high)
{
        int i,j,k;
        for(i=1;i<=high;i++)
        {
            k=dat[i];
            j=i-1;
            while(j>=0 && k<dat[j])
            {
                dat[j+1]=dat[j];
                j--;
            }
            dat[j+1]=k;
        }
}

template<class T>
void InsertionSort<T>::sort_data()
{
    int low,high;
    dat=this->getd();
    l=this->getl();
    low=0;
    high=l-1;
    insertion_sort(low,high);
    this->setd(dat,l);
}

