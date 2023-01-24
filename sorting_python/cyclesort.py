from sort import Sort

class CycleSort(Sort):

    def cyclesort(self,arr,n):
        for i in range(0,n):
            item=arr[i]
            pos=i
            for j in range(i,n):
                if arr[j] < item:
                    pos +=1
            if pos==i:
                continue
            while item == arr[pos]:
                pos +=1
            item,arr[pos]=arr[pos],item
            while pos!=i:
                pos=i
                for j in range(i,n):
                    if arr[j] < item:
                        pos +=1
                while item == arr[pos] and pos<=n:
                    pos +=1
                item,arr[pos]=arr[pos],item
                print(arr)   

    def sort_data(self):
        data=self.getData()
        self.cyclesort(data,len(data))