#include <bits/stdc++.h>
using namespace std;
int arr[100];
int partition(int l, int h)
{
    int p,i,j,temp;
    p=arr[l];
    i=l;
    j=h;
    while(i<j)
    {
        do
        {
            i++;
        }while(arr[i]<=p);
        do
        {
            j--;
        }while(arr[j]>p);
        if(i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[j];
    arr[j]=arr[l];
    arr[l]=temp;
    return j;
}
void quicksort(int l, int h)
{
    int j;
    if(l<h)
    {
        j=partition(l,h);
        quicksort(l,j);
        quicksort(j+1,h);
    }
}
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    arr[i]=999;
    quicksort(0,n);
    for(i=0;i<n+1;i++)
        cout<<arr[i]<<" ";
}
