#include <stdio.h>
#include<stdlib.h>
#define maxsize 10
int top=-1,stack[maxsize];
void push();
void pop();
void display();
int main(){
	int c;
	while(1){
		printf("\nenter choice to be performed:\n1.push\n2.pop\n3.display\n4.exit\n");
		scanf("%d",&c);
		switch(c){
			case 1: push();break;
			case 2: pop();break;
			case 3: display();break;
			case 4: exit(0);
			default:printf("invalid choice\n");
			}
		}
}
void push()
{
	int x;
	if (top==maxsize-1)
		printf("stack overflow");
	else
		printf("enter element to be pushed\n");
		scanf("%d",&x);
		top=top+1;
		stack[top]=x;
}
void pop()
{
	if (top==1)
		printf("stack underflow\n");
	else
		printf("popped element is:%d\n",stack[top]);
		top=top-1;
}
void display()
{
	if (top==-1)
		printf("stack underflow");
	else
		{
		printf("elements present in stack are\n");
		for(int i=top;i>=0;--i)
			printf("%d\n",stack[i]);
		}
}
