//sparse symmetry
#include<stdio.h>
#include<stdlib.h>

typedef struct
{
            int row;
            int col;
            int val;
}sparse;


void readsparse(sparse a[], int s)
{
    int i,p;
        
    a[0].val=s;

    printf("Enter the number of rows and coloumns: ");
    scanf("%d %d", &a[0].row, &a[0].col);

  printf("Enter the sparse matrix representation: ");
  for (int i = 1; i <= s; i++)
    scanf("%d %d %d", &a[i].row, &a[i].col, &a[i].val);
         

   printf("\nThe entered sparse matrix is:\n");
   printf("\nRow\tColumn\tValue\n");
   for(p=0;p<=a[0].val;p++)
    {
        printf("%d\t", a[p].row);
        printf("%d\t", a[p].col);
        printf("%d\n", a[p].val);
    }
}


           


void fast_transpose(sparse a[],  sparse b[])
{
            int row_terms[100],  start_pos[100];
            int i,  j,  p;       

            int numTerms = a[0].val;
            int numCols = a[0].col;
             
            b[0].row = numCols;
            b[0].col = a[0].row;
            b[0].val = numTerms;
            if(numTerms>0)
            {
                        for(i =0; i<numCols;  i++)
                                    row_terms[i] = 0;

                        for(i=1; i<=numTerms; i++)
                                    row_terms[a[i].col]++;

                        start_pos[0]=1;

                        for(i=1; i<numCols; i++)
                                start_pos[i] = start_pos[i-1] + row_terms[i-1];

                        for(i=1; i<=numTerms; i++)
                        {
                            j = start_pos[a[i].col]++;
                            b[j].row = a[i].col;
                            b[j].col = a[i].row;
                            b[j].val = a[i].val;
                        }
             }
            printf("\nThe Fast Transpose sparse matrix is:\n");
            printf("\nRow\tColumn\tValue\n");
            for(p=0; p<=a[0].val; p++)
            {
                        printf("%d\t", b[p].row);
                        printf("%d\t", b[p].col);
                        printf("%d\n", b[p].val);
            }
}
void symmetric(sparse a[],sparse b[]){
    int flag=1;
    int i;
    for(i=0; i<=a[0].val && flag; i++)
    {
        if(a[i].row==b[i].row &&a[i].col==b[i].col && a[i].val== b[i].val)
             continue;
        flag=0;
        break;
    }
    if(flag==1)
    printf("the matrix is symmetric");
    else 
    printf("not symmetric");

}
void main()
{
            int m, n, key;
            sparse a[100], b[100];
            int s1;
            printf("Enter the number of non zero elements in matrix1: ");
            scanf("%d",&s1);


            readsparse(a,s1);
             fast_transpose(a, b);
             symmetric(a,b);
}
