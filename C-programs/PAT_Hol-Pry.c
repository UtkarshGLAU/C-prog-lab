#include<stdio.h>
void main(){
  int n,j,i;
  printf("Enter the Nth value For The PATTERN- ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
  for(j=1;j<=2*n-1;j++){if(j==n-(i-1)||j==n+(i-1)||i==n){
  printf("*");}
  else printf(" ");}
  printf("\n");}
}
