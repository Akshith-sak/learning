#include<iostream>
#include "../include/radix_sort.hpp"
using namespace std;
template class RadixSort<int>;
template<class T>
void RadixSort<T>::radix_sort(int low,int high)
{
        int i,j,k,x=1;
        for(k=0;k<3;k++)
        {
            x=x*10;
            for(i=low;i<=high;i++)
            {
                for(j=low;j<high-i;j++)
                    if(dat[j]%x > dat[j+1]%x)
                        swap(dat[j],dat[j+1]);
            }
        }
}

template<class T>
void RadixSort<T>::sort_data()
{
    int low,high;
    dat=this->getd();
    l=this->getl();
    low=0;
    high=l-1;
    radix_sort(low,high);
    this->setd(dat,l);
}
