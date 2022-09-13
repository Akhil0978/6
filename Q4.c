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
    int i,d;
       for (i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the value of d : ");
    scanf("%d",&d);
    while (d!=0)
    {
        int temp=a[n-1];
        for(i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
        d--;
    }
    printf("\n\nThe rotated array is : \n\n");
    for(i=0;i<n;i++)
        printf("\n\na[%d] = %d\n\n",i,a[i]);
}
