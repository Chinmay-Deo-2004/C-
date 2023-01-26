#include<stdio.h>

int main()
{
    int n,m;

    printf("enter number of rows\n");
    scanf("%d",&n);

    printf("enter number of columns\n");
    scanf("%d",&m);

    int a[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }




    return 0;
}