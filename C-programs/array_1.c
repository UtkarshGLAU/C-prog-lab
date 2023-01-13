#include<stdio.h>
void main(){
int n;
printf("Enter the NUmber of Elements- ");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
printf("Enter the element [%d]- ",i);
scanf("%d",&a[i]);
;}
for(int j=0;j<n;j++){
printf("The element [%d] is %d \n",j,a[j]);}


}
