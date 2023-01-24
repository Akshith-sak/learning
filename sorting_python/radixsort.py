from sort import Sort

class RadixSort(Sort):

    def count(self,arr,n,exp):
        count=[]
        b=[]
        count=[0]*(10)
        b=[0]*n    
        for i in range(0,n):
            index=arr[i]//exp
            count[index%10] +=1
        for i in range(1,10):
            count[i]=count[i]+count[i-1]
        for i in range(n-1,-1,-1):
            index=arr[i]//exp
            x=count[index%10]-1
            count[index%10] -=1
            b[x]=arr[i]
        for i in range(0,n):
            arr[i]=b[i]

    def radixsort(self,arr,n):
        mx=max(arr)
        exp=1
        while mx/exp >=1:
            self.count(arr,n,exp)
            print(arr)
            exp *=10

    def sort_data(self):
        data=self.getData()
        self.radixsort(data,len(data))