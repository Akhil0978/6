#include<stdio.h>
int small(int[],int);
int main()
{
    int a[100000],x,y;
    printf("Enter the size of an array : ");
    scanf("%d",&y);
    x=small(a,y);
    printf("The smallest no. in array is : %d",x);
    return 0;
}
int small (int b[], int n)
{
    int i,min=99999;
    for(i=0;i<n;i++)
    {
        printf("b[%d]=  ",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
        if(min>b[i])
    {
        min=b[i];
    }
    return min;
}
