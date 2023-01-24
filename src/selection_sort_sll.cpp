#include<iostream>
#include "../include/selection_sort_sll.hpp"
using namespace std;
template class SelectionSortSll<int>;
template<class T>
void SelectionSortSll<T>::selection_sort_sll(struct Node *head)
{
        Node *ptr=NULL;
         Node *ptr1=NULL;
        Node *temp=NULL;
        ptr=head;
        while(ptr)
        {
            temp=ptr;
            ptr1=ptr->link;
            while(ptr1)
            {
                if(ptr1->data < temp->data)
                    temp=ptr1;
                ptr1=ptr1->link;
            }
            if(temp!=ptr)
                swap(temp->data,ptr->data);
            ptr=ptr->link;
        }
}

template<class T>
void SelectionSortSll<T>::sort_data()
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
    selection_sort_sll(head);
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