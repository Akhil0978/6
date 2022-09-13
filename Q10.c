#include<stdio.h>
void count(int[] ,int);
int main()
{
    int a[100],x,y,z;
    printf("Enter the size of  array : ");
    scanf("%d",&y);
    count(a,y);
    return 0;
}
void count (int a[],int n)
{
    int i,j,c,b[100];
       for (i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
        b[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                b[j]=0;
            }
        }
        if(b[i]!=0)
        {
            b[i]=count;
        }
    }
    printf("\nFrequency of all elements of array : \n");
    for(i=0;i<n;i++)
    {
        if(b[i]!=0)
        {
            printf("%d occurs %d times\n",a[i],b[i]);
        }
    }
}
