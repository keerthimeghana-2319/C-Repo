#include<stdio.h>
int main()
{
    int n, a , b;
    scanf("%d%d%d", &n, &a, &b);
    int i = a;
    while(i<=b)
    {
        printf("%d x %d = %d\n", n , i , n*i);
        i++;
    }
}