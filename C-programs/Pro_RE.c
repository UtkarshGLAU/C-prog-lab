#include<stdio.h>
void main(){
int n,i;

int a[100],b[40]={0};
for(i=0;i<10;i++){
printf("Enter Marks of Student %i - ",i+1);
scanf("%d",&a[i]);
if(a[i]>60){b[a[i]-61]++;}
if(i>60){;}

}
for(i=0;i<40;i++){
if(b[i]>0){
printf("%d marks scored by %d students\n",i+61,b[i]);
}}


}
