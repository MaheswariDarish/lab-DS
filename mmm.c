#include<stdio.h>
void main() 
{
    int n, a[50],i,j,mode=0,temp,maxcount=0,sum=0,maxvalue;
    float mean,median;
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
     {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
     }
for(i=0;i<n;i++)
{
    sum=sum+a[i]; }
mean=sum*1.0/n;
printf("mean is %f\n" ,mean);
if(n%2==0)
    median=(a[n/2]+a[(n+1)/2])*1.0/2;
else
    median=a[n/2];
printf("median is %f\n" ,median);
for(i=0;i<n;i++)
{
    int count =0;
    for(j=i;j<n;j++)
    {
        if(a[i]==a[j])
            count++;
    }

    if(count>maxcount)
    {
    maxcount=count;
    maxvalue=a[i];
    }

}
mode=maxvalue;
printf("%d is the mode",mode);
}
