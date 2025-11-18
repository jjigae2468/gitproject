// 0층에는 각 호마다 i명이 있고
//1층에는 1층 3호야 그러면 0층 1,2,3호 사람들 만큼

int main(){
    int T, k, n;

    int 아파트[15][15] = {0};

    for (int i = 1; i<= 14; i++){
        아파트[0][i] = i;
    }
    for (int i = 1; i<=14; i++){
        for (int j = 1; j<=14; j++){
            아파트[i][j] = 아파트[i][j-1] + 아파트[i-1][j];
    }

    scanf("%d", &T);
    for (int i = 0; i< T; i++){
        scanf ("%d", &k);
        scanf ("%d", &n);
        printf("%d\n", &아파트[k][n]);
    }
    
    return 0;
}