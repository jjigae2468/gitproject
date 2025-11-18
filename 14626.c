#include <stdio.h>

int main(){
   char isbn[14];
    int star_weight;
   int sum = 0;
   for (int i = 0; i <13; i++){
    int weight;
    if (i%2==0) weight = 1;
    else weight = 3;

    if (isbn[i] =='*'){
        star_weight = weight;
    }
    else{
        sum += (isbn[i] -'0') * weight;
    }
   }

   for (int i = 0; i<= 9; i++){
    if ((sum + i * star_weight) % 10 == 0){
        printf("%d\n", i);
        break;
    }
   } 
}