#include <stdio.h>
int main()
{
    int s1[100], s2[100], s3[100];
    int n1, n2;
    printf("Enter the no of elements in S1:\n");
    scanf("%d", &n1);
    printf("Enter the elements in S1:\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &s1[i]);
    printf("Enter the no of elements in S2:\n");
    scanf("%d", &n2);
    printf("Enter the elements in S2:\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &s2[i]);
    int k = 0;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (s1[i] == s2[j])
            {
                s3[k] = s1[i];
                k++;
                break;
            }
        }
    }
    printf("Intersection of two sets is: ");
    for (int i = 0; i < k; i++)
        printf("%d ", s3[i]);
    printf("\n");
    return 0;
