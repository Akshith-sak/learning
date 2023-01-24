#include<iostream>
#include "../include/merge_sort.hpp"
using namespace std;
template class MergeSort<int>;
template class MergeSort<float>;
template<class T>
void MergeSort<T>::mergesort(int low, int mid, int high){
     if(low!=high)
        {
            mergesort(low,(low+mid)/2,mid);
            mergesort(mid+1,(mid+1+high)/2,high);
            merge(low,mid,high);
        }
}
template<class T>
void MergeSort<T>::merge(int low, int mid, int high){
    int len=this->getl();
    T temp[len];
    int i=low;
    int k=low;
    int j=mid+1;
    while((i<=mid)&&(j<=high))
    {
        if(dat[i]>dat[j])
            temp[k++]=dat[j++];
        else
            temp[k++]=dat[i++];
    }
    while(i<=mid)
        temp[k++]=dat[i++];
    while(j<=high)
        temp[k++]=dat[j++];
    for(i=low;i<=high;i++)
        dat[i]=temp[i];

    for(i=0;i<=high;i++)
    cout<<temp[i]<<endl;
    
}

template<class T>
void MergeSort<T>::sort_data(){
    // Implement the mergesort and merge functions recursive calls in this function.
    dat=this->getd();
    l=this->getl();
    int low,mid,high;
    low=0;
    high=l-1;
    mid=(low+high)/2;
    mergesort(low,mid,high);
    this->setd(dat,l);
    //this->print();
}







