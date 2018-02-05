#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the limit to check within");
scanf("%d %d",&a,&b);
printf("enter the no");
scanf("%d",&c);
if(c>a&&c<b)
{
 printf("yes it is between");
 }
 else{
 printf("no not between");
 }

}
