#include<stdio.h>
void sort(int[],int);
int main()
{
    int a[100000],x,y;
    printf("Enter the size of an array : ");
    scanf("%d",&y);
    sort(a,y);
    return 0;
}
void sort (int a[], int n)
{
    int i,y;
       for (i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n\na[%d] = %d\n\n",i,a[i]);
    }
    printf("\n\nThe reversed array is : \n\n");
    for(i=(n-1);i>=0;i--)
    {
        printf("\n\na[%d] = %d\n\n",i,a[i]);
    }
}
