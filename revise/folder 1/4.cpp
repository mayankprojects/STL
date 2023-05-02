#include <iostream>
#include <math.h>
using namespace std;

int binary(int dec)
{
    int bin = 0, i = 0, last;
    float temp;
    while (dec > 0)
    {
        last = dec % 2;
        temp = pow(10, i);
        bin = bin + (last * temp);
        i++;
        dec = dec / 2;
    }
    return bin;
}

int decimal(int bin)
{
    int dec = 0, i = 0, last;
    float temp;
    while (bin > 0)
    {
        last = bin % 10;
        temp = pow(2, i);
        dec = dec + (last * temp);
        i++;
        bin = bin / 10;
    }
    return dec;
}

int convert(int n)
{
    int last;
    while(n != 0)
    {
        last = 
    }
}

int main()
{

    return 0;
}