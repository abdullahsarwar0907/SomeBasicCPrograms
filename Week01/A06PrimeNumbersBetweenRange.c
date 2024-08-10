#include<stdio.h>
int main(){
    int a,b,i,j;
    printf("Enter range:");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
    	int c=0;
    	for(j=2;j<i;j++){
    		if(i%j==0){ c++; }
		}
		if(c==0){ printf("%d\t",i); }
	}
}
