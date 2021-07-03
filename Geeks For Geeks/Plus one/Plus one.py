class Solution:
    def increment(self, arr, N):
        i=N-1
        
        while i>=0:
            if arr[i]!=9:
                arr[i]+=1
                break
            arr[i]=0
            i-=1
        if i==-1:
            return [1]+arr
        return arr
