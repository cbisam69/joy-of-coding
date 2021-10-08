#include<stdio.h>
int main(){
int a,b,big;
printf(" enter the values of a and b \n");
scanf("%d %d",&a,&b);


    if(a>0 && b>0)
    {
    big = a>b?a:b;
    printf("The biggest number is : %d", big) ;
    }
else
{
printf("operation not valid\n");
}
return 0;
}
//1RN20CS138



