#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    void sleep(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
    int a = 1;
    int b = 0;
    while (a == 1) {
        sleep(1000);  
        b++;
        printf("%d\n" , b);
        
    }
}