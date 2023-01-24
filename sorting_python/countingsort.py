from sort import Sort

class CountSort(Sort):
    def countingsort(self,arr,n):
        count=[]
        b=[]
        max=arr[0]
        for i in range(0,n):
            if max<arr[i]:
                max=arr[i]
        count=[0]*(max+1)
        b=[0]*n    
        for i in range(0,n):
            count[arr[i]] +=1
        for i in range(1,max+1):
            count[i]=count[i]+count[i-1]
        for i in range(n-1,-1,-1):
            x=count[arr[i]]-1
            count[arr[i]] -=1
            b[x]=arr[i]
        for i in range(0,n):
            arr[i]=b[i]

    def sort_data(self):
        data=self.getData()
        self.countingsort(data,len(data))