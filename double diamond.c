#include<stdio.h>
void main()
{
    int i,j,k;
    for (i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
         printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        for(j=10;j>=i*2;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        for(j=10;j>=i*2;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }

}
