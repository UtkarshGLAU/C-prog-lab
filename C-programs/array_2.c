#include<stdio.h>
void main(){
int n,sum=0;
printf("Enter the Number of Elements- ");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){

printf("Enter the element [%d]- ",i);
scanf("%d",&a[i]);
sum+=a[i];
;}
printf("Sum of all the elements in array is %d\n",sum);



}
