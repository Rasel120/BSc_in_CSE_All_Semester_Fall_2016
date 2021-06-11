#include<stdio.h>

int main()
{
    int A[]={15,56,42,10,63,10},index,x,i;

    printf("Array Elements: ");
    for(i=0;i<6;i++)
        printf("%d \t",A[i]);

    printf("\n\nEnter the element to be search: ");
    scanf("%d",&x);


    index = linearSort(A,x,6);
    if(index>=0)
        printf("\nHurray!! Element found on %d number index.\n",index);
    else
        printf("Element not found!\n");

        return 0;

}

int linearSort(int A[],int x, int n)
{
    int i,index;
    for(i=0;i<n;i++)
        if(A[i]==x)
            return i;

    return -1;
}
