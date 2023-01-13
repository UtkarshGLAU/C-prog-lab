#include<stdio.h>
void main(){
char a,b;
int d;
printf("Enter no \n");
scanf("%d",&d);
for(int i=1;i<=d;i++){
for(int j=1;j<=i;j++){
printf("%d",i);
}
printf("\n");
}
}
