#include<stdio.h>
void main(){
int i,j,n1,n2,t=0;
printf("Enter the row and column size\n");scanf("%d",&n1);scanf("%d",&n2);
int a[n1][n2];
for(i=0;i<n1;i++){for(j=0;j<n2;j++){
printf("Enter the %d(row) and %d(Clumn)-",i,j);scanf("%d",&a[i][j]);
if(i==j&&i!=1 || i!=j&&i!=0){t=1;}
}}
printf("Matrix is\n");
for(i=0;i<n1;i++){for(j=0;j<n2;j++){
printf("%d ",a[i][j]);
}printf("\n");}

if(t==0)printf("Identity\n");
else printf("Not Identity\n");


}
