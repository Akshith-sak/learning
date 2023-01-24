from sort import Sort

class MergeSort(Sort):

        
    def mergesort(self,array):
            if len(array) > 1:
                r = len(array)//2
                left = array[:r]
                right = array[r:]

                self.mergesort(left)
                self.mergesort(right)
                self.merge(array,left,right)

    def merge(self,array,left,right):
        i = 0
        j = 0
        k = 0

        while i < len(left) and j < len(right):
            if left[i] < right[j]:
                array[k] = left[i]
                i += 1
            else:
                array[k] = right[j]
                j += 1
            k += 1

        while i < len(left):
            array[k] = left[i]
            i += 1
            k += 1

        while j < len(right):
            array[k] = right[j]
            j += 1
            k += 1

    def sort_data(self):
            data=self.getData()
            self.mergesort(data)

