#include<iostream>
#include "../include/bubble_sort_sll.hpp"
using namespace std;
template class BubbleSortSll<int>;
template<class T>
void BubbleSortSll<T>::bubble_sort_sll(struct Node *head,int n)
{
        Node *ptr=NULL;
        Node *temp=NULL;
        for(int i=0;i<=n;i++)
        {
            ptr=head;
            temp=ptr->link;
            for(int j=0;j<=n-1-i;j++)
            {
                if(ptr->dat > temp->dat)
                {
                    swap(ptr->dat,temp->dat);
                }
                ptr=ptr->link;
                temp=ptr->link;
            }
        }
}

template<class T>
void BubbleSortSll<T>::sort_data()
{
    int low,high;
    Node *head=NULL;
    Node *ptr=NULL;
    int i;
    dat=this->getd();
    l=this->getl();
    low=0;
    high=l-1;
    for(i=0;i<=high;i++)
    {
    Node *new_node=new Node;
    new_node->dat=dat[i];
    new_node->link=NULL;
    if(head==NULL)
        head=new_node;
    else{
            ptr=head;
            while(ptr->link!=NULL)
                 ptr=ptr->link;
            ptr->link=new_node;   
        }
    }
    bubble_sort_sll(head,high);
    ptr=head;
    i=0;
    if(ptr==NULL)
        cout<<"sll empty"<<endl;
        else
    {
        while(ptr)
        {
             dat[i++]=ptr->dat;
            ptr=ptr->link;
        }
    }
    this->setd(dat,l);
}