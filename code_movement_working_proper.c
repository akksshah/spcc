#include <stdio.h>
#include <time.h>

void before_movement(int b,int c)
{
    clock_t start,end;
    double cpuTimeUsed;
    start = clock();
    int i,a,z;
    printf("\nBefore Code movement Optimization\n");
    i=0;
    while(i<10000)
    {
	a=b*c;
	z=a+34;
	i++;
    }
    printf("z= \n%d",z);
    end = clock();

    cpuTimeUsed = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nTime taken = %f\n",cpuTimeUsed);
}
void after_movement(int b,int c)
{
    clock_t start,end;
    double cpuTimeUsed;
    start = clock();
    int t1,i,z;
    printf("\nAfter code movement optimization\n");
    t1=b*c;
    while(i<10000)
    {
	z=t1+34;
	i++;
    }
    printf("z= \n%d",z);
    end = clock();

    cpuTimeUsed = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nTime taken = %f\n",cpuTimeUsed);
}


int main(void) {
	// your code goes here
	int b,c;
    printf("\n Enter the values of b and c:");
    scanf("%d%d",&b,&c);
    before_movement(b,c);
    after_movement(b,c);
	return 0;
}

