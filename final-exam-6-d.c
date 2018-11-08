#include<stdio.h>
void test(int m, int n)
{
    int x = m;
    m = n;
    n = x;

}

main()
{
    int x = 5, y = 3;

    test(x,y);

    printf("%d %d", x, y);
}
