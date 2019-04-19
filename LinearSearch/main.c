#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>
#define size 100000
#define iters 100000

void search(int a[],int key)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(key==a[i])
        {
            break;
        }

    }

}
int main()
{
    int a[size],i;
    clock_t start,end;
    for(i=0;i<size;i++)
    a[i]=rand()%1000;
    start=clock();
    int j;
    for( j=0;j<iters;j++)
    search(a,rand()%1000);
    end=clock();
    double t;
    t=(end - start)/CLOCKS_PER_SEC;
    printf("TIME TAKEN IS %G SECONDS \n",t/iters);
    return 0;
}

