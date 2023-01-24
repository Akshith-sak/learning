from sort import Sort

class ShellSort(Sort):

    def shellsort(self,arr, n):
        gap=n//2
        while gap>0:
            print(gap)
            j=gap
            while j<=n:
                i=j-gap 
                while i>=0:
                    if arr[i+gap]>arr[i]:
                        break
                    else:
                        arr[i+gap],arr[i]=arr[i],arr[i+gap]
                    i=i-gap
                print(arr)     
                j+=1
            gap=gap//2       

    def sort_data(self):
        data=self.getData()
        self.shellsort(data,len(data)-1)