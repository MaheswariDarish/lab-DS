#include<stdio.h>
void rotate(int a[50],int n,char d, int cr ) {
    int i,j=0,t;
    if(d=='l')
    {
        while(j<cr)
        {
            t=a[0];
            for(i=0;i<n;i++) 
                a[i]=a[i+1];
            a[n-1]=t;
            j+=1;
        }
    }
    if(d=='r')
    {
        while(j<cr)
        {
        t=a[n-1];
        for(i=n-1;i>0;i--)
            a[i]=a[i-1];
        a[0]=t;
        j+=1;
        }
    }
    printf("rotated array is\n");
    for(i=0;i<n;i++)
        printf("%3d",a[i]); }
void main() {
    int a[50],n,cr,i;
    char d;
    printf("enter no of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("direction of rotation r:right l:left\n");
    scanf("%c",&d);
    printf("no of rotation\n");
    scanf("%d",&cr);
    rotate(a,n,d,cr); 
}