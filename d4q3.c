#include<stdio.h>
int main(){
int high_i=0;
float high_f=0;
int mr_int[6]={560,660,590,760,480,960};
float mr_float[6]={97.50,66.00,79.25,76.55,98.45,96.40};
int i;
for(i=0;i<6;i++)
{
    high_i=(high_i>mr_int[i])?high_i:mr_int[i];
    high_f=(high_f>mr_float[i])?high_f:mr_float[i];
}
printf("mr_int will party on sturday as he gets %d\n",high_i);
printf("mr_float will party on friday as he gets %f\n",high_f);

return 0;

}