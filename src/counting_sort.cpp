#include<iostream>
#include "../include/counting_sort.hpp"
using namespace std;
template class CountingSort<int>;
template<class T>
void CountingSort<T>::counting_sort(int n)
{
        T *count;
        T *b;
        T max=dat[0];
        int i,x;
        for(i=0;i<=n;i++)
            if(max<dat[i])
                max=dat[i];
        count=new T[max+1];
        b=new T[n+1];
        for(i=0;i<max+1;i++)
        {
            count[i]=0;
        }

        for(i=0;i<=n;i++)
        {
            b[i]=0;
        }
        for(i=0;i<=n;i++)
            count[dat[i]]++;
        for(i=1;i<=max+1;i++)
            count[i]=count[i]+count[i-1];
        for(i=n;i>=0;i--)
        {
            x=--count[dat[i]];
             b[x]=dat[i];
        }
        for(i=0;i<=n;i++)
            dat[i]=b[i];


}

template<class T>
void CountingSort<T>::sort_data()
{
    int low,high;
    dat=this->getd();
    l=this->getl();
    low=0;
    high=l-1;
    counting_sort(high);
    this->setd(dat,l);
}
