#include<stdio.h>
void main(){
int a,b,c,d,e,f,g;
a=7;
b=++a;
c=--b;
c%=a;
d=++c;
e=d++;
f=a||e;
g=--f;
e/=a;
printf(" a=%d\n b=%d\n c=%d\n d=%d\n e=%d\n f=%d\n g=%d\n",a,b,c,d,e,f,g);
}
