#include<iostream>
#include "../include/shell_sort.hpp"
using namespace std;
template class ShellSort<int>;
template<class T>

void ShellSort<T>::shell_sort(int low, int n)
{
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i <= n; i += 1)
        {
            int temp = dat[i];
            int j;            
            for (j = i; j >= gap && dat[j - gap] > temp; j -= gap)
                dat[j] = dat[j - gap];
            dat[j] = temp;
        }
        // for(int k=0;k<=n;k++)
        //         cout<<dat[k]<<' ';
        //       cout<<endl;
    }

}

template<class T>
void ShellSort<T>::sort_data()
{
    int low,high;
    dat=this->getd();
    l=this->getl();
    low=0;
    high=l-1;
    shell_sort(low,high);
    this->setd(dat,l);
}
