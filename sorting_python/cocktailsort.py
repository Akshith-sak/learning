from sort import Sort

class CocktailSort(Sort):
    
    def cocktailsort(self,arr,n):
        
        for i in range(0,n//2):
            for j in range(0,n-i):
                if arr[j]>arr[j+1]:
                    arr[j],arr[j+1]=arr[j+1],arr[j]
            for j in range(n-i,i,-1):
                if arr[j]<arr[j-1]:
                    arr[j],arr[j-1]=arr[j-1],arr[j]

    def sort_data(self):
        data=self.getData()
        self.cocktailsort(data,len(data)-1)

