int main()
{
   int a[] = {6,5,4,8,3,1,9,-11,32,-111},i,n=10;

   printf("\nBefore sorting:\n");
   for(i=0; i<n;i++)
      printf("%d  ",a[i]);

   quickSort(a,0,n-1);
   printf("\nAfter sorting:\n");
   for(i=0; i<n;i++)
      printf("%d  ",a[i]);
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
   for(;j<r;j++)
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
