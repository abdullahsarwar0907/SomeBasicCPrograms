#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter a leap year: ");
    scanf("%d",&a);
    if((a%4==0 && a%100!=0) || a%400==0){ printf("This is a leap year"); }
	else{ printf("This is not a leap year"); }
}