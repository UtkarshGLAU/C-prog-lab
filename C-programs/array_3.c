#include<stdio.h>
void main(){
int n;
float sum;
printf("Enter the Number of Elements- ");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
printf("Enter the element [%i]= ",i);
scanf("%i",&a[i]);
sum+=a[i];}
printf("Sum of elements in array is %0f\n",sum);
printf("Avg of elements in array is %0.2f\n",sum/n);


}
