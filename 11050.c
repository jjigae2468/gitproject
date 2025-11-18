#include <stdio.h>

int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    if (K == 0){
        K = 1;
    }
    int sum1 = 1;
    for (int i = N - K + 1; i <= N; i++){
        sum1 *= i;
    }
    for (int j = 1; j <= K; j++){
        sum1 /= j;
    }
}