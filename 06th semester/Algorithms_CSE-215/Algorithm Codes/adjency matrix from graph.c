#include<stdio.h>

void adjacencyList(char A[6],int M[6][6])
{
    int i,j,n=6;

}

int main()
{
    char A[6]={'A','B','C','D','E','F'};
    int n=6,i,j,M[6][6];

    printf("Enter the Path cost: \n");

    for(i=0;i<n;i++)
        printf("  %c",A[i]);

    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%c ",A[i]);

        for(j=0;j<n;j++)
        {
            scanf("%d",&M[i][j]);
        }

        printf("\n");
    }

    ///////////////
    printf("Adjacency List: \n");

    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%c :- ",A[i]);

        for(j=0;j<n;j++)
        {
                if(M[i][j]>0)
                    printf("%c ",A[j]);
        }

        printf("\n");
    }

    ///////////////
    printf("Adjacency Matrix: \n");
    for(i=0;i<n;i++)
        printf("  %c",A[i]);

    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%c ",A[i]);

        for(j=0;j<n;j++)
        {
            printf("%d  ",M[i][j]);
        }

        printf("\n");
    }
    ///////////////
}

