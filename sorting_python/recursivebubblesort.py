from sort import Sort

class RecursiveBubbleSort(Sort):

    def recursivebubblesort(self,arr,n):
        
        if n==0:
            return
        for j in range(n):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
        return self.recursivebubblesort(arr,n-1)

    def sort_data(self):
        data=self.getData()
        self.recursivebubblesort(data,len(data)-1)
