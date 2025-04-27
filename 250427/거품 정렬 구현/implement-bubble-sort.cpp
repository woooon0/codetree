#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int len = n;
    bool sorted = true;
  
    do {
        sorted = true;
        for(int i = 0;i<n;i++){
            if (arr[i] > arr[i + 1] && arr[i+1]!=0){
                int tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                sorted = false;
            };
        }
    } while (sorted == false);
    for(int i = 0;i<n;i++){
        cout << arr[i]<<" ";
    }

    // Please write your code here.

    return 0;
}
