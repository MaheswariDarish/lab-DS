#include<stdio.h>
#include<stdlib.h>


typedef struct
{
         int row;
         int col;
         int val;
}sparse;

void readsparse(sparse a[],int s)
{
         int i;
        
         a[0].val=s;

  printf("Enter the number of rows and coloumns: ");
  scanf("%d %d", &a[0].row, &a[0].col);

  printf("Enter the sparse matrix representation: ");
  for (int i = 1; i <= s; i++)
    //printf("enter the a[%d] row in sparse \n",i);
    scanf("%d %d %d", &a[i].row, &a[i].col, &a[i].val);
         

        
        

}
void Addsparse(sparse a[],sparse b[],sparse sum[])
{
    int i=1,j=1,l=1;
    if(a[0].row!=b[0].row || a[0].col!=b[0].col)
    {
        printf("Cannot Add !");
        exit(0);
    }
    sum[0].row=a[0].row;
    sum[0].col=a[0].col;
    while(i<=a[0].val && j<=b[0].val)
    {
        if(a[i].row < b[j].row || (a[i].row == b[j].row && a[i].col < b[j].col))
        {
            sum[l].row=a[i].row;
            sum[l].col=a[i].col;
            sum[l].val=a[i].val;
            i++;
            l++;
        }
        else if(a[i].row > b[j].row || (a[i].row == b[j].row && a[i].col > b[j].col))
        {
            sum[l].row=b[j].row;
            sum[l].col=b[j].col;
            sum[l].val=b[j].val;
            j++;
            l++;
        }
        else if(a[i].row==b[j].row && a[i].col==b[j].col)
        {
            sum[l].row=a[i].row;
            sum[l].col=a[i].col;
            sum[l].val=a[i].val+b[j].val;
            j++;
            i++;
            l++;
        }
    }
    while(i<=a[0].val)
    {
        sum[l].row=a[i].row;
        sum[l].col=a[i].col;
        sum[l].val=a[i].val;
        i++;
        l++;
    }
    while(j<=b[0].val)
    {
        sum[l].row=b[j].row;
        sum[l].col=b[j].col;
        sum[l].val=b[j].val;
        j++;
        l++;
    }
    sum[0].val=l-1;
    
}
void printsparse(sparse a[])
{
        int p;
        printf("\nRow\tColumn\tValue\n");
        for(p=0; p<=a[0].val; p++)
        {
                 printf("%d\t", a[p].row);
                 printf("%d\t", a[p].col);
                 printf("%d\n", a[p].val);
         }
}


void main()
{
           
           sparse a[100],b[100],sum[100];
           int s1,s2;
           printf("Enter the number of non zero elements in matrix1: ");
           scanf("%d",&s1);
           readsparse(a,s1);
           printf("\nThe entered sparse matrix is:\n");
           printsparse(a);
           printf("Enter the number of non zero elements in matrix 2: ");
           scanf("%d", &s2);
           readsparse(b,s2);
           printf("\nThe entered sparse matrix is:\n");
           printsparse(b);
           Addsparse(a,b,sum);
           printf("\nThe Sum of the sparse matrix is:\n");
           printsparse(sum);



}
