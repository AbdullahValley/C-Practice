#include <stdio.h>
int main ()
{
    int a,b;
    char sign;
    printf("Input The Value of a & b : ");
    scanf("%d %d", &a,&b);
    /*Declaring Arithmetic Operator (+) in sign Variable*/
    sign='+';
    printf("%d %c %d = %d\n",a,sign,b,a+b);

    sign='-';  //Declaring Arithmetic Operator (-) in sign Variable
    printf("%d %c %d = %d\n",a,sign,b,a-b);

    sign='*';  //Declaring Arithmetic Operator (*) in sign Variable
    printf("%d %c %d = %d\n",a,sign,b,a*b);

    sign='/';  //Declaring Arithmetic Operator (/) in sign Variable
    printf("%d %c %d = %d\n",a,sign,b,a/b);

    sign='%';  //Declaring Arithmetic Operator (%) in sign Variable
    printf("%d %c %d = %d\n",a,sign,b,a%b);

    return 0;
}
