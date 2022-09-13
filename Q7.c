#include<stdio.h>
int dupli(int[],int);
int main()
{
    int a[100000],x,y,z;
    printf("Enter the size of an array : ");
    scanf("%d",&y);
    z=dupli(a,y);
    printf("The no. of duplicate items is : %d",z);
    return 0;
}
int dupli (int a[], int n)
{
    int i,y,count=0,j;
       for (i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=(i+1);j<=n;j++)
        {
           if(a[i]==a[j])
            count++;
        }
    }
    return count;
}
