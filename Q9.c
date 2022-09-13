#include<stdio.h>
void merge(int[],int [],int ,int);
int main()
{
    int a[100000],b[100000],x,y,z;
    printf("Enter the size of first array : ");
    scanf("%d",&y);
    printf("Enter the size of second array : ");
    scanf("%d",&x);
    merge(a,b,y,x);
    return 0;
}
void merge (int a[],int b[] ,int m,int n)
{
    int i,k=0,j,c[100000];
       for (i=0;i<m;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\n\n******************************************************************\n\n\n");
    for (j=0;j<n;j++)
    {
        printf("\n\n b[%d] = ",j,b[j]);
        scanf("%d",&b[j]);
    }
    for(k=0;k<(n+m);k++)
    {
        if(i>=n)
        {
            while(k<(n+m))
            {
                c[k]=b[j];
                j++;
                k++;
                if(k==n)
                    break;
            }
        }
        else if(j>=n)
        {
            while(k<(n+m))
            {
                c[k]=b[i];
                i++;
                k++;
                if(k==n)
                    break;
            }
        }
        else if(a[i]<b[j] )
            {
                c[k]=a[i];
                i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    for(k=0;k<(n+m);k++)
        printf("\n\nc[%d] = %d",k,c[k]);
}
