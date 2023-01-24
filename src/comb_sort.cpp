#include<iostream>
#include "../include/comb_sort.hpp"
using namespace std;
template class CombSort<int>;
template<class T>
void CombSort<T>::comb_sort(int low,int high)
{
        int gap,i,j; 
        gap=(high+1)/1.3;
        cout<<gap<<endl;
        while(!gap<1)
        {
            i=low;
            j=i+gap;
            while(j<=high)
            {
                if(dat[i]>dat[j])
                    swap(dat[i],dat[j]);
                i++;
                j++;
            }
            gap=gap/1.3;
            for(int k=0;k<=high;k++)
                cout<<dat[k]<<' ';
            cout<<endl;

        }
}

template<class T>
void CombSort<T>::sort_data()
{
    int low,high;
    dat=this->getd();
    l=this->getl();
    low=0;
    high=l-1;
    comb_sort(low,high);
    this->setd(dat,l);
}
