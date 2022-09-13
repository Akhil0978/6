#include<stdio.h>
int great(int[],int);
int main()
{
    int a[100000],x,y;
    printf("Enter the size of an array : ");
    scanf("%d",&y);
    x=great(a,y);
    printf("The greatest no. in array is : %d",x);
    return 0;
}
int great (int b[], int n)
{
    int i,max=-1;
    for(i=0;i<n;i++)
    {
        printf("b[%d]=  ",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
        if(max<b[i])
    {
        max=b[i];
    }
    return max;
}
