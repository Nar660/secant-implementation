#include <stdio.h>
#include <math.h>

#define f(x) (x*x*x-9*x+1)
#define e 0.001

int main() {
    int i = 0;
    float x1, x2, x3, y1, y2, y3;


    printf("Enter the value of x1: ");
    scanf("%f", &x1);
    printf("Enter the value of x2: ");
    scanf("%f", &x2);

    do {
        y1 = f(x1);
        y2 = f(x2);
        x3 = x2-(y2*(x2-x1)/(y2-y1));
        y3 = f(x3);
        {
        x1 = x2;
        x2 = x3;}
        //y1 = y2;
        //y2 = y3;

        i++;
    } while (fabs(y3) > e);

    printf("Approximate root: %1f\n", x3);
    printf("Number of iterations: %d\n", i);
    printf("the root value is=%f",y3);

    return 0;
}
