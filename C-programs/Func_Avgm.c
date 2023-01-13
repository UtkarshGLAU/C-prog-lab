#include<stdio.h>
float avg(){
int i,n,s=0;
printf("Enter the number of students-");
scanf("%d",&n);
float a[n];
for(i=0;i<n;i++){
scanf("%f",&a[i]);
s=s+a[i];}
s=s/n;
return s;
}
void main(){
printf("%f\n",avg());

}
