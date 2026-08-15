
/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main () {
int celsius;
printf("enter temperature in celsius\n");
scanf("%d", &celsius);
printf("Fahrenheit=%d", (celsius * 9/5)+32);
return 0;
}