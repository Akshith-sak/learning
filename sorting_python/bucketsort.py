from sort import Sort

class BucketSort(Sort):

    def insertionsort(self,b):
        for i in range(1, len(b)):
            up = b[i]
            j = i - 1
            while j >= 0 and b[j] > up:
                b[j + 1] = b[j]
                j -= 1
            b[j + 1] = up    
        return b    
             
    def bucketsort(self,arr):
        a = []
        slot_num = 10 
        for i in range(slot_num):
            a.append([])
       
        for j in arr:
            index_b = int(slot_num * j)
            a[index_b].append(j)
     
        for i in range(slot_num):
            a[i] = self.insertionsort(a[i])
         
        k = 0
        for i in range(slot_num):
            for j in range(len(a[i])):
                arr[k] = a[i][j]
                k += 1

    def sort_data(self):
        data=self.getData()
        self.bucketsort(data)