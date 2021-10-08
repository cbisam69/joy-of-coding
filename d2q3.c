#include<stdio.h>//1RN20CS138
#include<stdlib.h>
int main(){

 float a, b, c;
char op ;
printf("Enter an expression (a + b)\n");
 
scanf("%f %c %f", &a, &op, &b);
switch(op)
{ case '+' :
c = a + b;
printf("sum = %f ", c);
break;

case '-' :
c = a - b;
printf("Difference = %f", c);
break;
case '*' :
c = a * b;
printf("Product = %f ", c);
break;

case '/' :
if(b==0)
{
printf(" b cannot be 0");
exit(0);
}
c = a / b;
printf("Quotient = %f", c);
break;
default :
printf("Invalid operator");
}
return 0;
}