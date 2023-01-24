#include<iostream>
#include "../include/cocktail_sort.hpp"
using namespace std;
template class CocktailSort<int>;
template<class T>
void CocktailSort<T>::cocktail_sort(int n)
{
        int i,j;
        for(i=0;i<n/2;i++)
        {
            for(j=i;j<n-i;j++)
                if(dat[j]>dat[j+1])
                    swap(dat[j],dat[j+1]);
            for(j=n-i;j>i;j--)
                if(dat[j]<dat[j-1])
                    swap(dat[j],dat[j-1]);
        }
}

template<class T>
void CocktailSort<T>::sort_data()
{
    int low,high;
    dat=this->getd();
    l=this->getl();
    low=0;
    high=l-1;
    cocktail_sort(high);
    this->setd(dat,l);
}
