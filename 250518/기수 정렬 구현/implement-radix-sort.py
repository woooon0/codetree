n = int(input())
arr = list(map(int, input().split()))

for k in range(6):
    arr_new = [[],[],[],[],[],[],[],[],[],[]]
    for i in range(len(arr)):
        digit = arr[i]%(10^k)
        arr_new[digit].append(arr[i])
    store_arr = []

    for i in range(10):
        for j in range(len(arr_new[i])):
            store_arr.append(arr_new[i][j])

    arr = store_arr

print(*arr,sep=' ')



# Please write your code here.
# function radix_sort(arr, k)
#   for pos = k - 1 ... pos >= 0:
#     set arr_new = [10][]
#     for i = 0 ... i < arr.size
#       set digit = posth digit of arr[i]
#       arr_new[digit].append(arr[i])

#     set store_arr = []
#     for i = 0 ... i < 10
#       for j = 0 ... j < arr_new[i].size
#         store_arr.append(arr_new[i][j])
  
#     arr = store_arr

#   return arr
