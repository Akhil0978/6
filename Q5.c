#include<stdio.h>
int sort(int[],int);
int main()
{
    int a[100000],x,y;
    printf("Enter the size of an array : ");
    scanf("%d",&y);
    y=sort(a,y);
    printf("The duplicate element in array is : %d",y);
    return 0;
}
int sort (int a[], int n)
{
    int i,y;
       for (i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
            y=a[i];
    }
    return y;
}
