from sort import Sort

class RecursiveInsertionSort(Sort):

    def recursiveinsertionsort(self,arr,n):
        if n<=1:
            return
        self.recursiveinsertionsort(arr,n-1)
        key=arr[n-1]
        j=n-2
        while j>=0 and key<arr[j]:
            arr[j+1]=arr[j]
            j -=1
        arr[j+1]=key


    def sort_data(self):
        data=self.getData()
        self.recursiveinsertionsort(data,len(data))