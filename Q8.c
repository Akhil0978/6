#include<stdio.h>
void uni(int[],int);
int main()
{
    int a[100000],x,y,z;
    printf("Enter the size of an array : ");
    scanf("%d",&y);
    uni(a,y);
    return 0;
}
void uni (int a[], int n)
{
    int i,y,count=0,j;
       for (i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\nThe unique elements in array are : ");
    for(i=0;i<n;i++)
    {
        for(j=(i+1);j<=n;j++)
        {
           if(a[i]==a[j])
            count++;
        }
            if(count==0)
                printf(" %d\n",a[i]);
        count =0;
    }
}
