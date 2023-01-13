#include<stdio.h>
void main(){
int n,i,j,t1,t2,m,c=0;
printf("Enter the size of array-");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
printf("Enter the %i element-",i+1);
scanf("%d",&a[i]);}

for(i=0;i<n;i++){
for(j=0;j<n-1-i;j++){
if(a[j]>a[j+1]){
t1=a[j];
a[j]=a[j+1];
a[j+1]=t1;
}}}
t1=0;
t2=n-1;

printf("Enter element to be searched-");
scanf("%d",&j);

while(t1<=t2){
m=(t1+t2)/2;
if(a[m]==j){printf("Element Found index is %d\n",m);c++;break;}
else if(a[m]>j){t2=m-1;}
else {t1=m+1;}
}
if(c==0){printf("Not found\n");}

}
