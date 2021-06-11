#include<stdio.h>

int partition(int A[],int p,int r)
{
    int x,j,i,temp;
    x=A[r];
    i=p-1;

    for(j=p; j<r; j++)
    {
        if(A[j]<=x)
        {
            i=i+1;
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    temp=A[i+1];
    A[i+1]=A[r];
    A[r]=temp;
    return i+1;
}

void quickSort(int A[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=partition(A,p,r);
        quickSort(A,p,q-1);
        quickSort(A,q+1,r);
    }
}


int main()
{
    int A[]= {70,75,80,85,60,65,55,50,45},i;

    quickSort(A,0,9);

    for(i=0; i<9; i++)
        printf("%d \t",A[i]);

        return 0;
}
