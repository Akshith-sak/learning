from os import path
from pickle import TRUE
# /**
#  * @brief 
#  * 
#  * This should be the base class for all sorting algorithms you implement. 
#  * Any sorting technique(like MergeSort, QuickSort etc) should be inherited from this base class.
#  * Use templates to support different data types(int, float, char).
#  */
class Sort:

       
        __data = None
        __data_len = None
    
        # /**
        #  * @brief 
        #  * Read data to sort from a file, whose name is passed as argument to the function.
        #  * Implement this function's body in src/sort.cpp file.
        #  * @return true, if file is opened successfully
        #  * @return false, if file any error while opening file
        #  */
        def read_data_from_file(self,filename):
            if not path.exists(filename):
                return False
            self.__data=[]
            fin = open(filename, 'r')       
            temp = fin.readlines()
            fin.close()
            for i in temp:
                if '.' in i:
                    self.__data.append(float(i.strip()))
                else:
                    self.__data.append(int(i.strip()))
                #self.__data.append((i.strip()))
            self.__data_len=len(self.__data)
            print(self.__data)
            print(self.__data_len)

            return True
            
        # /**
        # * @brief Construct a new sort data object
        # * Function to sort the data read from file into arr. 
        # * Implement the actual sorting operation in the derived class.
        # */
        def sort_data():
            pass
        # /**
        # * @brief 
        # * Write the sorted data to a file whose name is passed as argument.
        # * @param filename , output file name to save the sorted data into.
        # */
        def write_sorted_data_to_file(self,filename):
            fout = open(filename, 'w')
            print("In write_sorted_data_to_file")
            print(self.__data)
            for i in self.__data:
                fout.write(str(i))
                fout.write('\n') 

            fout.close()
        # Function to get the private members of the class
        def getData(self):
            return self.__data    

        # Function to modify the private members of the class
        def setData(self,array): 
            self.__data = array
