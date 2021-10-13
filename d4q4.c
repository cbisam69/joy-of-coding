#include<stdio.h>
int main()
{
int i,arr[10],n,c=0;
printf("enter the chits value\n ");
for(i=0;i<10;i++)
{
    scanf("%d",&arr[i]);
}
printf("enter the chit needed to be found\n");
scanf("%d",&n);
for(i=0;i<10;i++)
  if (n==arr[i])
  c++;
  n=10-c;

  printf("%d is the number of attemps",n);
  return 0;

}