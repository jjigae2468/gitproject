#include <stdio.h>

int main(){
    char str[10];
    int target = 0;
    for (int i = 0; i < 3; i++){
        scanf("%s", str);

        if (str[0]>=0 && str[0]<=9){
            int num = atoi(str);
            target = num + (3 - i);
        }
    }
    if (target % 15 == 0){
        printf("FizzBuzz");
    } else if (target % 3 == 0){
        printf("Fizz");
    } else if (target % 5 == 0){
        printf("Buzz");
    } else printf("%d", target);
}