#include <stdio.h>
//算階乘
int main(){
    int num;
    while (scanf("%d", &num) != EOF) {
        long long int ans = 1;//int is not enough
        for (int i=1; i<num+1; i++) {
            ans *= i;
        }
        printf("%lld\n", ans);
    }
    return 0;
} 
