#include<stdio.h>

int main()
{
    int a[] = {6,5,4,8,3,1,9,-11,32,-111},i,n=10,index;
    int x=32;

    quickSort(a,0,n-1);
    printf("After Sorted new array with new index number:\n");
    for(i=0;i<n;i++)
        printf("[%d]%d\t",i,a[i]);

    index=binarySearch(a,x,n);

    if(index>0)
        printf("\nElement (%d) found on %d number index!",x,index);
    else
        printf("\nElement (%d) not found in this array!",x);

}

void quickSort(int a[], int p, int r)
{
    if(p<r)
    {
        int q = partition(a,p,r);
        quickSort(a,p,q-1);
        quickSort(a,q+1,r);
    }
}
int partition(int a[], int p, int r)
{
    int x =a[r], i=p-1, j=p, temp;
    for(; j<r; j++)
    {
        if(a[j]<=x)
        {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[i+1];
    a[i+1] = a[r];
    a[r] = temp;

    return i+1;
}


int binarySearch(int a[], int x, int n)
{
    int mid;
    int low=0,high=n-1;

    while( low <= high )
    {
        mid = ( low + high ) / 2;

        if ( x == a[mid])
            return mid;
        else if ( x < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1; //search value not found
}

