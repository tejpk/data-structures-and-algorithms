#include <stdio.h>
#include <stdlib.h>

void insertion(int a[],int n)
{
    int i,j,v;
    for(i=1;i<n;i++)
    {
        v=a[i];
        j=i-1;
        while(j>=0&&v<a[j])
        {
           a[j+1]=a[j];
           j=j-1;
        }
        a[j+1]=v;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int i,j,n,a[100];
    printf("enter the size of the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertion(a,n);
    return 0;
}
