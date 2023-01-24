#ifndef __SORT_HPP__
#define __SORT_HPP__

/**
 * @brief 
 * 
 * This should be the base class for all sorting algorithms you implement. 
 * Any sorting technique(like MergeSort, QuickSort etc) should be inherited from this base class.
 * Use templates to support different data types(int, float, char).
 */
template<class T>
class Sort{
    private:
    T *data; // This has to be implemented with templates, to support any data type other than "int".
    int data_len;
    
    public:
    /**
     * @brief 
     * Read data to sort from a file, whose name is passed as argument to the function.
     * Implement this function's body in src/sort.cpp file.
     * @return true, if file is opened successfully
     * @return false, if file any error while opening file
     */
    bool read_data_from_file(const char *filename);
    /**
     * @brief Construct a new sort data object
     * Function to sort the data read from file into arr. 
     * Implement the actual sorting operation in the derived class.
     */
    virtual void sort_data() = 0;
    /**
     * @brief 
     * Write the sorted data to a file whose name is passed as argument.
     * @param filename , output file name to save the sorted data into.
     */
    void write_sorted_data_to_file(const char *filename);

    T* getd();
    int getl();
    void setd(T*,int);
    void print();



};


#endif