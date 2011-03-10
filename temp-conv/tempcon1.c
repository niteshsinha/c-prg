#include<stdio.h>
#define lower 0
#define upper 300
#define step 20
main()
{
    int f;
    for (f=lower;f<=upper;f=+step)
        {
            printf("%3d \t %6.0f\n",f,(5.0/9.0)*(f-32));
        }
}
