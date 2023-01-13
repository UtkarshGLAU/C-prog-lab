#include<stdio.h>
#include<string.h>
void main(){
int i,n;
printf("Enter the size of string-");scanf("%d",&n);
char a[n+1];
printf("Enter string\n");
for(i=0;i<n;i++){scanf("%c",&a[i]);}
a[n]='\0';
puts(a);
printf("\n");

}
