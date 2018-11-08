#include (stdio.h)
void main()
{
int i;
for(i=0;i<8;i++)
{
if ((i%2)==0)
    printf("x");
else if ((i%3)==0)
    printf("y");
  else
    printf("z");
}

}
