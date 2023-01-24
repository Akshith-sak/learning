#include<iostream>
#include<algorithm>
#include<vector>
#include "../include/bucket_sort.hpp"
using namespace std;
template class BucketSort<float>;
template<class T>
void BucketSort<T>::bucket_sort(int low,int high)
{
    vector<float> v[high];
    int i,j,b,k=0;
    cout<<"hi"<<endl;
    for(i=low;i<high;i++)
    {
            b=high*dat[i];
            v[b].push_back(dat[i]);
    }
    for(i=low;i<high;i++)
            sort(v[i].begin(),v[i].end());

    for(i=0;i<high;i++)
    {
    for(j=0;j<v[i].size();j++)
    {
        cout<<i<<":"<<v[i][j]<<endl;
        dat[k++]=v[i][j];
    }
    }
}

template<class T>
void BucketSort<T>::sort_data()
{
    int low,high;
    dat=this->getd();
    l=this->getl();
    low=0;
    high=l-1;
    bucket_sort(low,high);
    this->setd(dat,l);
}