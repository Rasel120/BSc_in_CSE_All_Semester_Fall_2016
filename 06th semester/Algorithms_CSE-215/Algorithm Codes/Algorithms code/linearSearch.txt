#include<stdio.h>

int main()
{
    int A[]={15,56,42,10,63,10},index;
    index = linearSort(A,63,6);

    if(index>=0)
        printf("Paichi paichi!! %d number index.",index);
    else
        printf("Dhuro ja eida to pai nai!");
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
