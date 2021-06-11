#include<stdio.h>
int main()
{
    int n, i, j, k, total,p[20],ar[20],br[20], wt[20],tt[20],st[20],temp,m,l;
    float awt,att;
    printf("Enter total process number\n");
    scanf("%d", &n);
    m=n-1;
    for(i=0;i<n;i++)
        scanf("%d%d%d", &p[1],&ar[i],&br[i]);
    st[0]=0;
    st[1]=br[0];
    k=2;
    l=1;
    while(m>0){


    if(br[0]>n){
        for(i=k;i<n;i++){
            for(j=i+1;j<n;j++){
                if(br[i]>br[j]){
                    temp = br[i];
                    br[i]=br[j];
                    br[j]=br[i];
                }
            }
        }
        st[k]=st[l]+br[k];
    }
    else{
        for(i=k;i<br[0];i++){
            for(j=i+1;j<br[0];j++){
                if(br[i]>br[j]){
                    temp = br[i];
                    br[i]=br[j];
                    br[j]=br[i];
                }
            }
        }
        st[k]=st[l]+br[k];
    }
    l++;
    k++;
    m--;
    }
    for(i=0;i<n;i++)
        wt[i]=st[i]-ar[i];


    total=0;
    for(i=0;i<n;i++)
        total+=wt[i];
    awt=(float)total/n;


    for(i=0;i<n;i++)
        tt[i]=wt[i]+br[i];


    total=0;
    for(i=0;i<n;i++)
        total+=tt[i];
    att=(float)total/n;



    for(i=0;i<n;i++)
        printf("process %d\tservice time = %d\n", p[i],st[i]);
    printf("\n\n");
    for(i=0;i<n;i++)
        printf("process %d\twaiting time = %d\n", p[i],wt[i]);
    printf("\n\n");
    printf("average waiting time %f\n",awt);
    printf("\n\n");
    for(i=0;i<n;i++)
        printf("process %d\ttarnaround time = %d\n", p[i],tt[i]);
    printf("\n\n");
    printf("average tarnaround time %f\n",att);
    return 0;
}
