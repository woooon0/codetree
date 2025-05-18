#include <stdio.h>

char s[100005];

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    scanf("%s", s);
    int maxn = n;
    for (int i = 0; i < m; i++) {
        char command;
        scanf(" %c", &command);
        if (command == 'P') {
            char bread;
            scanf(" %c", &bread);
            if(n ==maxn){
                s[n] = bread;
            }
            else{
                for(int mn = maxn;n<mn;mn--){
                    s[mn] = s[mn-1];
                }
                s[n] = bread;
                n++;
            }
            maxn++;
        }
        if(command == 'L'){
            if(n != 0){
                n--;
            }
        }
        if(command == 'R'){
            if(n != maxn){
                n ++;
            }
        }
        if(command == 'D'){
            if(n != maxn){
                for(n;n<=maxn;n++){
                    s[n] = s[n+1];
                }
            }
        }
    }
    printf("%s",s);
  
    // Please write your code here.
    return 0;
}