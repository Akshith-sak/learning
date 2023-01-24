#include<iostream>
#include<string.h>
#include "include/merge_sort.hpp"
#include"include/quick_sort.hpp"
#include"include/selection_sort.hpp"
#include"include/bubble_sort.hpp"
#include"include/insertion_sort.hpp"
#include"include/bucket_sort.hpp"
#include"include/radix_sort.hpp"
#include"include/comb_sort.hpp"
#include"include/counting_sort.hpp"
#include"include/shell_sort.hpp"
#include"include/cocktail_sort.hpp"
#include"include/recursivebubble_sort.hpp"
#include"include/bubble_sort_sll.hpp"
#include"include/tree_sort.hpp"

int main(){
    // Create MergeSort object here
   
    //MergeSort<float> ms;
    //QuickSort<int> qs;
    //SelectionSort<int> ss;
    //BubbleSort<string> bs;
    //InsertionSort<int> is;
    //BucketSort<float> vs;
    //RadixSort<int> rs;
    //CombSort<int> cs;
    //CountingSort<int> cnts;
    //ShellSort<int> shs;
    //CocktailSort<int> cts;
    //RecursiveBubbleSort<int> rbs;
   // BubbleSortSll<int> bss;
    TreeSort<int> ts;
    ts.read_data_from_file("input.txt");
    ts.sort_data();
    ts.write_sorted_data_to_file("output.txt");
}
