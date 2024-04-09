#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 20

int main(){
    srand(time(NULL));
    int i;
    double vt[N];
    printf(" ");
    for(i = 0;i<N; i++)
    {
        vt[i]=1+rand()%100;
        printf("%f\n ", vt[i]);
    }
};

// codigo a completar
