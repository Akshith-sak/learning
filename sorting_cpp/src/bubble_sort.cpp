#include<iostream>
#include "../include/bubble_sort.hpp"
using namespace std;
template class BubbleSort<string>;
template<class T>
void BubbleSort<T>::bubble_sort(int low,int high)
{
        int i,j;
        for(i=low;i<high;i++)
        {
            for(j=low;j<high-i;j++)
                if(dat[j]>dat[j+1])
                    swap(dat[j],dat[j+1]);
        }
}

template<class T>
void BubbleSort<T>::sort_data()
{
    int low,high;
    dat=this->getd();
    l=this->getl();
    low=0;
    high=l-1;
    bubble_sort(low,high);
    this->setd(dat,l);
}

