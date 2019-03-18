#include <iostream>
#include <stdio.h>


using namespace std;

double square_root(double S, int n)
{
    double x=1, x1=S/2;
    while(n<=50)
    {
        if(n%2!=0)
            x1=(x+S/x)/2;
        else
            x=(x1+S/x1)/2;
        n++;
    }
    return x1;
}

int main()
{
    printf("%f\n",square_root(40000, 1));
    return 0;
}
