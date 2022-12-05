#include <stdio.h>
#include <stdlib.h>
struct node{
	int val;
	struct node*next;};
struct node*front;
struct node*rear;
void push(){
	{  
    struct node *ptr;  
    int item;   
      
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    else  
    {   
        printf("\nEnter value?\n");  
        scanf("%d",&item);  
        ptr -> val= item;  
        if(front == NULL)  
        {  
            front = ptr;  
            rear = ptr;   
            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else   
        {  
            rear -> next = ptr;  
            rear = ptr;  
            rear->next = NULL;  
        }  
    }  
}
}
void pop(){
	struct node*ptr;
	if(front==NULL){
		printf("UNDERFFLOW");
	}
	else{
		ptr=front;
		printf("deleted element: %d\n\n",ptr->val);
		front=front->next;
		free(ptr);
	}
}
void display(){
 struct node *ptr;  
    ptr = front;      
    if(front == NULL)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nQUEUE.\n");  
        while(ptr != NULL)   
        {  
            printf("%d\t",ptr ->val);  
            ptr = ptr -> next;  
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
