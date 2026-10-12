#include <stdio.h>
int main(void) {
    int max, min, num1, num2, num3;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    max = num1;
    min = num1;
    if (num2 > max) 
    max = num2;
    if (num3 > max) 
    max = num3;
    if (num2 < min) 
    min = num2;
    if (num3 < min) 
    min = num3;



printf("Max : %d\n", max);
printf("Min : %d\n", min);




return 0;
}

