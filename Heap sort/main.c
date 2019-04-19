#include<stdio.h>
#include<stdlib.h>
/*
void heapify(int arr[],int n);
void rootdel(int arr[],int n);

void swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}*/

/*void rootdel(int arr[],int n)
{
    swap(arr[1],arr[n-1]);
    n=n--;
    heapify(arr,n);
}
*/
void heapify(int arr[],int n)
{
    int i,j,k,heap,v;
    for(i=n/2;i>0;i--)
    {
        heap=0;
        k=i;
        v=arr[k];
        while(!heap && k*2<=n)
        {
            j=2*k;
            if(j<n)
            {
                if(arr[j+1]>arr[j])
                {
                    j++;
                }
            }
            if(v>=arr[j])
            {
                heap=1;
            }
            else
            {
                arr[k]=arr[j];
                k=j;
            }
        }
        arr[k]=v;
    }
    printf("%d ",arr[1]);
    arr[1]=arr[n];
   // rootdel(arr,n);
}

int main()
{
    int arr[100];
    int i,j,k;
    printf("enter size ");
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=k;i>0;i--)
       heapify(arr,i);


}
