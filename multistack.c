#include <stdio.h>
#include <stdlib.h>
# define maxsize 10
int top1=-1,top2=maxsize,stack[maxsize];
void push1(){
	int x;
	if (top1==top2-1)
		printf("stack overflow\n");
	else
		top1=top1+1;
		printf("enter element to be pushed \n");
		scanf("%d",&x);
		stack[top1]=x;	
}
void push2(){
	int x;
	if (top1==top2-1)
		printf("stack overflow\n");
	else
		{top2=top2-1;
		printf("enter element to be pushed \n");
		scanf("%d",&x);
		stack[top2]=x;}	
}
void pop1()
{
	if(top1==-1)
		printf("stack underflow\n");
	else
		{printf("popped element is:%d\n",stack[top1]);
		top1=top1-1;}
}
void pop2()
{
	if(top2==maxsize)
		printf("stack   operations cant be done");
	else
		printf("popped element is:%d\n",stack[top2]);
		top2=top2+1;
}
void display()
{
	int val = top1;
	while(val>=0){
		printf("\n %d",stack[val]);
		val--;
		
	}
	int val2 = top2;
	printf("\n***************");
	while(val2 <= maxsize-1){
		printf("\n %d",stack[val2]);
		val2++;
	}
} 
int main(){
	int c;
	while(1){
		printf("\nenter choice to be performed:\n1.push\n2.pop\n3.display\n4.push2\n5.pop2()\n6.exit\n");
		scanf("%d",&c);
		switch(c){
			case 1: push1();break;
			case 2: pop1();break;
			case 3: display();break;
			case 4: push2();break;
			case 5: pop2();break;
			case 6: exit(0);
			default:printf("invalid choice\n");
			}
		}
}

