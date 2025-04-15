#include <stdio.h>
#include <string.h>

int n;
char command[20];
int num;

int main() {
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%s", command);
        if (strcmp(command, "push_back") == 0) {
            scanf("%d", &num);
            pushback(num);
        } else if (strcmp(command, "get") == 0) {
            scanf("%d", &num);
        }
    }
    
    // Please write your code here.
    
    return 0;
}