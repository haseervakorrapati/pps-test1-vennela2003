#include <stdio.h>
void input(int *pa,int *pb)
{
  printf("enter any two numbers\n");
  scanf("%d%d",pa,pb);
}
void add(int a, int b, int *sum)
{
 *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("%d+%d=%d\n",a,b,sum);
}
int main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  output(x,y,z);
  return 0;
}

