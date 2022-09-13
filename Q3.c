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
    int i,j,temp;
       for (i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<(n+1);j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n\na[%d] = %d\n\n",i,a[i]);
    }
}

