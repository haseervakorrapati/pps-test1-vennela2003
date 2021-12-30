#include<stdio.h>

int input_n()
{
   printf("Enter n value :");
   scanf("%d",&n);
}
int sum_n(int n)
{
   for(sum=0;sum<=n;sum++)
  
}
void output(int n, int sum)
{
  printf("The sum of %d numbers is %d",n,sum);
}
int main()
{
  int n,sum;
  n=input_n();
  sum=sum_n(n);
  output(n,sum);
  return 0;
}
