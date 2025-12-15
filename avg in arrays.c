#include<stdio.h>
int main(){
	int i,n,sum = 0;
	float avg;
	
	printf("enter the number of elements :\n");
	scanf("%d",&n);
	
	int arr[n];
	printf("elements:\n");
	 for( i = 0;i < n;i++)
	 scanf("%d",&arr[i]);
	 
	 for( i = 0; i <n; i++) {
	 
	     sum = sum + arr[i]; }
	     
	avg =   (float)sum/n;
    printf("the avg of the given n elements are %d,%.2f",n,avg);
	  
     
    return 0;
    } 
