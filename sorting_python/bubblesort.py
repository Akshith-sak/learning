from sort import Sort

class BubbleSort(Sort):

    def bubblesort(self,arr,low,high):
        for i in range(low,high):
            for j in range(low,high-i):
                if arr[j][0] > arr[j+1][0]:
                   arr[j],arr[j+1]=arr[j+1],arr[j]

    def sort_data(self):
        data=self.getData()
        self.bubblesort(data,0,len(data)-1)
