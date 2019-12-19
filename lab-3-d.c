#include <stdio.h>
#include <math.h>
double hj(int n)
{
    return ceil(2*sqrt(n));
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%.0f",2*hj(n));

}
