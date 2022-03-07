#include <stdio.h>
#include <stdlib.h>

int arr[1001];

int main(){
    int n, case_n = 0;
    
    for(int i = 1;i < 1001;i++){
        arr[i] =0;
        for(int j = 1;j <= i;j++){
            if(i % j == 0){
                arr[i] += j;
            }
        }
    }
    while(~scanf("%d", &n) && n){
        case_n ++;
        int output = -1;
        for(int k = 1000;k > 0;k--){
            if(arr[k] == n){
                output = k;
                break;
            }
        }
        printf("Case %d: %d\n", case_n, output);
    }
}
