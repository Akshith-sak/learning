from sort import Sort

class QuickSort(Sort):

    def partition(self,array,low,high):
        pivot=array[low]
        i=low
        j=high
        while i<j:
            while array[i]<=pivot:
                i +=1
            while array[j]>pivot:
                j -=1
            if i<j:
                array[i],array[j]=array[j],array[i]
        array[j],array[low]=array[low],array[j]
        return j

    def quicksort(self,array,low,high):
        if low < high:
            pi=self.partition(array,low,high)
            self.quicksort(array,low,pi-1)
            self.quicksort(array,pi+1,high)
        

    def sort_data(self):
        data=self.getData()
        self.quicksort(data,0,len(data)-1)
