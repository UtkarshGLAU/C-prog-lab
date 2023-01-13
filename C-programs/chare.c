#include<stdio.h>
void main(){

int a;
printf("Enter ");
scanf("%d",&a);
for(int i=1;i<=a;i++){
char d='A';
for(int j=1;j<=i;j++){
printf("%c",d);
d=d+1;
}
printf("\n");
}
}
