#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;
char command[20];
int num;

int
 size = 0;
int* arr = NULL;


void push_back(int n);
void pop_back();
void print_size();
void get(int n);

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", command);
        
        if (strcmp(command, "push_back") == 0) {
            scanf("%d", &num);
            push_back(num);
        } 
        else if (strcmp(command, "get") == 0) {
            scanf("%d", &num);
            get(num);
        }
        else if (strcmp(command, "pop_back") == 0) {
            pop_back();
        }
        else if (strcmp(command, "size") == 0) {
            print_size();
        }
    }

    free(arr);
    return 0;
}

void push_back(int n) {
    size += 1;
    int* temp_arr = (int*)malloc(sizeof(int) * size);
    
    if (arr != NULL) {
        for (int i = 0; i < size - 1; i++) {
            temp_arr[i] = arr[i];
        }
        free(arr); 
    }
    
    temp_arr[size - 1] = n;
    arr = temp_arr;
}

void pop_back() {
    if (size == 0) return; // 아무것도 없으면 종료

    size -= 1;
    int* temp_arr = (int*)malloc(sizeof(int) * size);
    
    for (int i = 0; i < size; i++) {
        temp_arr[i] = arr[i];
    }
    
    free(arr);
    arr = temp_arr;
}

void print_size() {
    printf("%d\n", size);
}

void get(int n) {
    if (n < 1 || n > size) {
        printf("Index out of range\n");
        return;
    }
    printf("%d\n", arr[n - 1]);
}