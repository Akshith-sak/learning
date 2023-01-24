#include<iostream>
#include<fstream>
#include<string.h>
#include "../include/sort.hpp"
using namespace std;
template class Sort<int>;
template class Sort<std::string>;
template<class T>
bool Sort<T>::read_data_from_file(const char *filename){
    // Implement the code to read data from the file and store it in the data variable.
    int n=0,i=0;
    string line;
    ifstream fin;
    fin.open(filename);
    if (!fin) 
        return false;
    while(fin >>line)
        n++;
    data_len=n;
    fin.close();
    fin.open(filename);
    data=new T[n];
     while(fin >> line)
     {
        data[i]=stoi(line);
        i++;
     }
    fin.close();
    return true;


}
template<class T>
void Sort<T>::write_sorted_data_to_file(const char *filename){
    // Implement the code to write sorted data to the file.
    int i;
    ofstream fout;
    fout.open(filename);
    if(!fout)
        cout<<"error"<<endl;
    for (i=0; i<data_len; i++)
      fout << data[i] << endl;
   fout.close();
    

}
template<class T>
T* Sort<T>::getd()
{
         return data;
}
template<class T>
int Sort<T>::getl()
{
        return data_len;
}

template<class T>
void Sort<T>::setd(T* val,int len)
{
    this->data=val;
    this->data_len=len;
     
}

// template<class T>
// void Sort<T>::print()
// {
//     for(int i=0;i<data_len;i++)
//         cout<<"THIS:"<<data[i]<<endl;
     
// }


