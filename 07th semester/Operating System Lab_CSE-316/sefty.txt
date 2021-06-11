#include<stdio.h>
int k=0;
void safe(int p,int r,int com[],int need[][10],int work[],int all[][10])
{
    int i,j,con=0;

    for(i=0;i<p;i++)
    {
        if(com[i]==0)
        {
            con=0;
            for( j=0;j<r;j++)
            {

                if(work[j]>=need[i][j])
                    con=con+1;

            }
            if(con==3)
            {
                com[i]=1;
                printf("%d ",i+1);
                k++;
                for(j=0;j<r;j++)
                {
                    work[j]=work[j]+all[i][j];
                }
            }
        }

    }
    if(k<p)
        safe(p,r,com,need,work,all);
}

int main()
{
    int p,r,all[10][10],high[10][10],need[10][10],av[10],com[10], work[10],i,j;
    char re[3];

    printf("Enter process number:");
    scanf("%d",&p);
    printf("ENter resources number:");
    scanf("%d",&r);

    for(i=0;i<p;i++)
    {
        printf("\nENter allocation of process ",i+1);
        for(j=0;j<r;j++)
        {

            scanf("%d",&all[i][j]);
        }
    }
    for(i=0;i<p;i++)
    {
        com[i]=0;
        printf("\nENter Max of process  ",i+1);
        for(j=0;j<r;j++)
        {

            scanf("%d",&high[i][j]);
        }
    }
    printf("Enter  avilable:");
    for(i=0;i<r;i++)
    {
        scanf("%d",&av[i]);
        work[i]=av[i];
    }

     for(i=0;i<p;i++)
    {

        printf("\nNeed of process ",i+1);
        for(j=0;j<r;j++)
        {

            need[i][j]=high[i][j]-all[i][j];
            printf("%d ",need[i][j]);
        }
    }
    printf("\nSafe State:\n\n");
    safe(p,r,com,need,work,all);
    printf("\n");
    return 0;
}

