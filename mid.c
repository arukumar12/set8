#incllude<stdio.h>
int main(void)
{
  char s[60];
  int n;
  printf("enter a string");
  scanf("%c",s);
  n=strlen(s);
  if(n%2==0)
   {
     s[n/2]="*";
     s[(n/2)-1]="*";
   }
   else
   {
    s[n/2]=="*";
    }
    return 0;
    }
  
