n = int(input())
arr = list(map(int, input().split()))

def merge_sort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        L = arr[:mid]
        R = arr[mid:]

        merge_sort(L)
        merge_sort(R)

        i = j = k = 0

        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1

        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1

        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1
merge_sort(arr)
print(*arr,sep=' ')


# Please write your code here.
# function merge_sort(arr[], low, high)
#   if low < high
#     set mid = (low + high) / 2
#     merge_sort(arr, low, mid)
#     merge_sort(arr, mid+1, high)
#     merge(arr, low, mid, high)


# set merged_arr = []

# function merge(arr[], low, mid, high)
#   set i = low, j = mid + 1

#   set k = low
#   while i <= mid && j <= high
#     if arr[i] <= arr[j]
#       merged_arr[k] = arr[i]
#       k += 1; i += 1
#     else
#       merged_arr[k] = arr[j]
#       k += 1; j += 1
  
#   while i <= mid
#     merged_arr[k] = arr[i]
#     k += 1; i += 1

#   while j <= high
#     merged_arr[k] = arr[j]
#     k += 1; j += 1
  
#   for k = low ... k <= high
#     arr[k] = merged_arr[k]
  
#   return arr 
