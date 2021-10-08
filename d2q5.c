#include<stdio.h>//1RN20CS138.SHAMS AHMAD
int main(){
int quantity,total_cost,rate;
printf("Enter the no of blue books\n");
scanf("%d",&quantity);
total_cost=(10*quantity);
if(quantity<=10000)
{
printf("no discount");
printf("The total cost is Rs=%d",total_cost);
}
else if(quantity>10000 &&quantity<=15000)
{
printf("10 percent discount");
rate=total_cost-0.1*(total_cost);
printf("The total cost is Rs=%d",rate);
}
else if(quantity>15000 &&quantity<=20000)
{
printf("10 percent discount");
rate=total_cost-(0.2*total_cost);
printf("The total cost is Rs=%d",rate);
}
return 0;
}