
#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 10
int stack[STACK_SIZE];
int top=-1;
int item;
int minStack[STACK_SIZE];
int minimum=0;
 
void push(int item)
{
	if(top>=STACK_SIZE-1)
		printf(" STACK OVERFLOW!! \n");
	else
	{
		++top;
		stack[top]=item;
	}
	
	if(top==0)
	{
	  minimum=item;
         }
	if(item<minimum)
	{
		minimum=item;
		minStack[top]=minimum;
	}
	else
		minStack[top]=minimum;
}
 
void pop()
{
	int x;
	x=stack[top];
	 
	if(top==-1)
		printf("stack is empty\n");
	else
		printf("%d\n",x);
	top--;
}
void display(){
    if(top==-1){
        printf("Stack empty");
    }
    else{
        for(int i=0;i<=top;i++)
            printf("%d\n",stack[i]);
    }
}
void getmin()
{
  if(top==-1)
  {
   printf("stack underflow");
  } 
     else
     {
	int value=minStack[top];
	printf("Minimum value of the stack is %d\n",value);
	}
}
 
int main()
{
	int n;
	while(1)
	{
		printf("\n1.Push to stack \n2.Pop Stack\n3.Display stack\n4.display minimum value\n5.exit \nEnter your choice: ");
		scanf("%d",&n);
		switch (n)
		{
			case 1: printf("Enter the element to push to stack: \n");
					scanf("%d",&item);
					push(item);
					break;
			case 2:	printf("Popped value: ");
					pop();
					break;
			case 3:display();
				    break;
			case 4: getmin();
					break;
			case 5: exit(0);
			default:printf("invalid choice");
		}
	}
}
