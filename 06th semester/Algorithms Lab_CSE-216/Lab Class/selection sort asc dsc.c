#include<stdio.h>

void SelectionSortAsc(int A[],int n)
{
    int i,k,j, t;

    for(i=0; i<n; i++)
    {
        j=i;
        for(k=i+1; k<n; k++)
        {
             if(A[k]<A[j])
                j=k;
        }

        //swap system
        t = A[i];
        A[i] = A[j];
        A[j] = t;
    }
    printf("\nArray After ascending sort: \n");
    for(i=0; i<n; i++)
        printf("%d \t",A[i]);

    return 0;
}

void SelectionSortDsc(int A[],int n)
{
    int i,k,j, t;

    for(i=0; i<n; i++)
    {
        j=i;
        for(k=i+1; k<n; k++)
        {
            if(A[k]>A[j])
                j=k;
        }
        //swap system
        t = A[i];
        A[i] = A[j];
        A[j] = t;
    }
    printf("\nArray After descending sort: \n");
    for(i=0; i<n; i++)
        printf("%d \t",A[i]);

    return 0;
}

int main()
{

    int A[10]={15,50,45,35,30,25,10,65,55,20};

    SelectionSortAsc(A,10);
    SelectionSortDsc(A,10);

    return 0;
}
