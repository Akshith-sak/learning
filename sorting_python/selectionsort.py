from sort import Sort

class SelectionSort(Sort):

    def selectionsort(self,arr,low,high):
        for i in range(low,high+1):
            min=i
            for j in range(i+1,high+1):
                if arr[j] < arr[min]:
                    min=j
            if min!=i:
                arr[min],arr[i]=arr[i],arr[min]
            print(arr)

    def sort_data(self):
        data=self.getData()
        self.selectionsort(data,0,len(data)-1)
