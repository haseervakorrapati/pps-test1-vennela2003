#include <stdio.h>
int input()
{
  int s;
  printf("enter the value\n");
  scanf("%d",&s);
  return s;
}
int cmp(int a, int b, int c)
{
 if (a>b&&a>c)
{
  return a;
}
else if (b>c)
{
  return b;
}
else 
{
  return c;
}
}
void output(int a, int b,int c,int s)
{
  printf("among %d,%d,%d \n %d is greatest",a,b,c,s);
}
int main()
{
  int n1,n2,n3,s=0;
  n1=input();
  n2=input();
  n3=input();
  s=cmp(n1,n2,n3);
  output(n1,n2,n3,s);
  return 0;
}





