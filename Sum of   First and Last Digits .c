#include<stdio.h>
int main()
{
    int n, f, l;
    scanf("%d", &n);
    l = n%10;
    for(f = n; f>=10 ; f/=10)
    {
    }
    printf("%d", f+l);

}