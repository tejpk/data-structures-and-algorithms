#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>
#define size 400
#define iters 10
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {

        return;
    }
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);

    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}
int main()
{
     clock_t start,end;
int n=35;
    start=clock();
    int j;
    for( j=0;j<iters;j++)
towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods

    end=clock();
    double t;
    t=(end - start)/CLOCKS_PER_SEC;
    printf("TIME TAKEN IS %G SECONDS \n",t/iters);
    return 0;
}

