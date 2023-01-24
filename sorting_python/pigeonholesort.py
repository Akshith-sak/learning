from sort import Sort

class PigeonholeSort(Sort):

    def pigeonholesort(self,arr):
        a=[]
        min=arr[0]
        for i in range(len(arr)):
            if min>arr[i]:
                min=arr[i]
        max=0
        for i in range(len(arr)):
            if max<arr[i]:
                max=arr[i]
        r=max-min+1
        for i in range(r):
            a.append([])
        for i in range(len(arr)):
            a[arr[i]-min].append(arr[i])
        k=0
        for i in range(r):
            for j in range(len(a[i])):
                arr[k]=a[i][j]
                k +=1

    def sort_data(self):
        data=self.getData()
        self.pigeonholesort(data)
