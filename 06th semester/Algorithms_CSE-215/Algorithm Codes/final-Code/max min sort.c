#include<stdio.h>


void sort(int a[],int n)
{
    int i,temp=a[0],j,min;
    printf("\n\nSorted array: ");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
void maxMin(int a[],int n)
{
    int i,max=a[0],min=a[0];
    for(i=1; i<n; i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }

    printf("\n\nMax value of this array: %d\n",max);
    printf("\nMin value of this array: %d\n",min);
    return 0;
}

int main()
{
    int A[10],i,j,m,n;
    for(i=0; i<10; i++)
        scanf("%d",&A[i]);

    printf("\nArray:");
    for(i=0; i<10; i++)
        printf("%d ",A[i]);

    maxMin(A,10);
    sort(A,10);
    return 0;
}



