#include <stdio.h>

int n;
int arr[100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for(int i = 0; i<n; i++){
        int j = i-1;
        int key = arr[i];
        while(j>= 0 && arr[j] > key){
            arr[i+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
    // Please write your code here.
    return 0;
}

// function insertion_sort(arr[])
//   set result = 0
//   set size = arr.size
//   for i = 1 ... i < size
//     set j = i - 1 
//     set key = arr[i]
//     while j >= 0 && arr[j] > key
//       arr[j + 1] = arr[j]
//       j--
//       result += 1
//     arr[j + 1] = key
    
//   return result
