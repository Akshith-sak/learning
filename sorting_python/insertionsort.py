from sort import Sort

class InsertionSort(Sort):

    def insertionsort(self,arr,high):
        for i in range(1,high):
            key=arr[i]
            j=i-1
            while j>=0 and key<arr[j]:
                arr[j+1]=arr[j]
                j -=1
            arr[j+1]=key


    def sort_data(self):
        data=self.getData()
        self.insertionsort(data,len(data))