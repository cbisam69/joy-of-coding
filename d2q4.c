#include<stdio.h>
int main(){
int Rank;
printf("Enter your CET rank \n");
scanf("%d",&Rank);
if (Rank<=3250)
{
printf("you are are getting CSE,ISE,ECE,MECH branch");
}
else if (Rank>3250 && Rank<=6505)
{
printf("you are getting ISE,MEC,ECE branch");
}
else if (Rank>6505 && Rank<=12012)
{
printf("YOU  are getting ECE and MECH ");
}
else if (Rank>12012 && Rank<=22340)
{
printf("you are getting Mech branch");
}
else
printf("you are not eligible for admission");
return 0;
}//1RN20cs138