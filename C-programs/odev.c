#include<stdio.h>
void main()
{
      int ma,mb,mc,md,m;
      printf("Enter your marks(0-100) of subject English");
      scanf("%d",&ma);
      printf("Enter your marks(0-100) of subject Electronics");
      scanf("%d",&mb);
      printf("Enter your marks(0-100) of subject Chemistry");
      scanf("%d",&mc);
      printf("Enter your marks(0-100) of subject Computer Science");
      scanf("%d",&md);
      m=((ma+mb+mc+md)/4);
      if(m>=36&&m<50){
       printf("Grade - B");
      }
      else if(m>=50&&m<60)
      {
       printf("Grade - B++");
      }
      else if(m>=60&&m<75)
      {
       printf("Grade - A");
      }
      else if(m>=75){
       printf("Grade - A++");
       }
      else 
      {
       printf("Fail");
      }
       
}
