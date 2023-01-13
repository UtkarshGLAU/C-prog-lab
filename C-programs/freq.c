#include<stdio.h>
void main(){
int n,c=0,i,j;
printf("Enter the size of array ");
scanf("%d",&n);
int a[n];
printf("Enter the %d Elements-",n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);}
printf("\n\n");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
       if(a[i]==a[j]&&a[i]!=0){
       if(i!=j){a[j]=0;}
        c++;
       }
    }
    if(a[i]!=0){
    printf("%d is %d times\n",a[i],c);
    c=0; 
     }
}
}
