#include<stdio.h>
int main(){
    int n,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    int nums[n];
    
    printf("Enter elements of array:");
    for(i=0;i<n;i++){ scanf("%d",&nums[i]); }
	
	int l,e;
	printf("Enter location and element:");
	scanf("%d%d",&l,&e);
	
	int num2[n+1];
    for(i=0;i<l-1;i++){ num2[i]=nums[i]; }
    num2[l-1]=e;
    for(i=l;i<n+1;i++){ num2[i]=nums[i-1]; }
    
    printf("Updated array: ");
    for(i=0;i<n+1;i++){ printf("%d\t",num2[i]); }
}
