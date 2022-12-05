#include <stdio.h>
#include <stdlib.h>
#define max 6
int queue[max],front=-1,rear=-1;
void push(){
	if((rear+1)%max==front){
		printf("max size reached\n");
		return;
	}
	else{
		int n;
		printf("enter element  : ");
		scanf("%d",&n);
		if((front==-1) && (rear==-1)){
		front=0;
		rear=0;
		queue[rear]=n;}
		else{
			rear=(rear+1)%max;
			queue[rear]=n;
	}
}
}
void pop(){
	if((front==-1) && (rear==-1)){
		printf("underflow\n");
	}
	else if(front==rear){
		printf("Popped element  : %d\n",queue[rear]);
		front=-1;
		rear=-1;
	}
	else{
		printf("popped element : %d\n",queue[front]);
		front=(front+1)%max;
	}
}
void display(){
	if (front==-1 && rear==-1){
		printf("empty queue\n");
	}
	else{
		if (rear >= front)
		{
		    for (int i = front; i <= rear; i++)
		        printf("%d \t",queue[i]);
		}
		else
		{
		    for (int i = front; i < max; i++)
		        printf("%d \t", queue[i]);
	 
		    for (int i = 0; i <= rear; i++)
		        printf("%d\t ", queue[i]);
		}
}
}
int main(){
	int data,c=0;
	while(c<=4){
		printf("\n1.Enqueue operation\n2.Dequeue operation\n3.display\n4.Exit\nEnter choice:");
		scanf("%d",&c);
		switch(c){
		case 1:{
			push();
			break;
		}
		case 2:{
			pop();
			break;
			}
		case 3:{
			display();
			break;
		}
		case 4:{
		printf("exiting");
		exit(0);
		}
		default:{printf("wrong choice");
		exit(0);
		}
		}
		
	}
	
	
}
		


