#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define size 20

int top=-1, front=0;
int stack[size];
void push(char a)
{
 top++;
 stack[top]=a;
}
void pop()
{
 top--;
}
void main()
{
 int i,option;
 char s[size],b;
 while(1)
 {
  printf("Enter your option\n1. Enter string\n 2. Exit\n");
  scanf("%d", &option);
  switch(option)
   {
    case 1:
     printf(" enter your string:\n");
     scanf("%s",s);
     for(i=0;s[i]!='\0';i++)
      {
       s[i]=tolower(s[i]);
       b=s[i];
       push(b);
      }
      for(i=0;i<(strlen(s)/2);i++)
        {
         if(stack[top]==stack[front])
         {
          pop();
          front++;
         }
         else
         {
          printf("%s is not palindrome\n",s);
          break;
         }
        }
       if((strlen(s)/2)==front)
        printf(" %s is palindrome\n",s);
       front =0;
       top =-1;
      break;
     case 2:
      exit(0);
     default:
      printf("enter correct choice");
        
   }
 }
}




