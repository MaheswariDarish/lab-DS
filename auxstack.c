#include <stdio.h>
#include <stdlib.h>
#define max 10
int stack[max],top=-1,auxstack[max],auxtop=-1;
int ifemp(int t)
{   if (t==-1)
        return 1;
    else
        return 0;}
void push(int d)
{
    if(top==max-1){
        printf("Stack overload\n");
    }
    else{
        top=top+1;
        stack[top]=d;
        if(ifemp(auxtop)){
            auxstack[++auxtop]=d;
        }
        else{
            if (d<=auxstack[auxtop])
                auxtop=auxtop+1;
                auxstack[auxtop]=d;
        }
    }
}
void pop(){
    if(top==-1){
        printf("Stack empty");}
    else{
        int del=stack[top];
        top=top-1;
        if(del==auxstack[auxtop]){
            auxtop=auxtop-1;
        }
        printf("Deleted element %d" ,del);
    }
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
void displaymin(){
    if(auxtop==-1){
        printf("Stack empty");
    }
    else{
        printf("Minimum value is %d\n",auxstack[auxtop]);
    }
}
int main()
{
    int ch, element;
    while(1)
    {
        printf("\n\nChoose operation");
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display stack");
        printf("\n4.Display min");
        printf("\n5.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter element to insert ");
            scanf("%d", &element);
            push(element);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            displaymin();
            break;
        case 5:
            exit(0);
        default:printf("Invalid choice");}
    }
}
