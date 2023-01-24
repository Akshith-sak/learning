from sort import Sort

class CombSort(Sort):

    def combsort(self,arr,low,high):
        print("hi")
        gap=int((high+1)//1.3)
        print(gap)
        while gap>=1:
            i=low
            j=i+gap
            while j<=high:
                if arr[i]>arr[j]:
                    arr[i],arr[j]=arr[j],arr[i]
                i +=1
                j +=1
            gap=int(gap//1.3)
        

    def sort_data(self):
        data=self.getData()
        self.combsort(data,0,len(data)-1)