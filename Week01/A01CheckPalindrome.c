#include<stdio.h>
int main(){
    int n1,n2=0;
    printf("Enter number: ");
    scanf("%d",&n1);
    int t=n1;
    while(t>0){
        n2=(n2*10)+(t%10);
        t=t/10;
    }
    if(n1==n2){ printf("It is palindrome"); }
    else{ printf("It is not apalindrome"); }
}