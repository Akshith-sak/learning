#include<iostream>
#include "../include/selection_sort.hpp"
using namespace std;
template class SelectionSort<int>;
template<class T>
void SelectionSort<T>::selection_sort(int low,int high)
{
        int i,j;
        int min=0;
        for(i=0;i<high;i++)
        {
            min=i;
            for(j=i+1;j<high;j++)
            {
                if(dat[j]<dat[min])
                    min=j;
            }
            if(min!=i)
                swap(dat[min],dat[i]);
        }
}

template<class T>
void SelectionSort<T>::sort_data()
{
    int low,high;
    dat=this->getd();
    l=this->getl();
    low=0;
    high=l-1;
    selection_sort(low,high);
    this->setd(dat,l);
}
