#include<stdio.h>
int main(){
int mr_int[6]={560, 660, 590, 760, 480, 960};
double mr_float[6]={97.56, 66.00, 79.25,76.55, 98.45, 96.40};
char mr_char[6]={'M','T' ,'W' ,'t', 'F','S'};
int i;
char ch;
scanf("%c",&ch);
switch (ch)
{
    case 'M':
    printf("%d\n is mr_int",mr_int[0]);
    printf("%3.2f\n is the salary mr.float",mr_float[0]);
    break;

    case 'T':
    printf("%d is mr_int",mr_int[1]);
    printf("%f is the salary mr.float",mr_float[1]);
    break;

    case 'w':
     printf("%dis mr_int",mr_int[2]);
    printf("%fis the salary mr.float",mr_float[2]);
     break;

     case 't':
      printf("%d is mr_int",mr_int[3]);
    printf("%f is the salary mr.float",mr_float[3]);

    break;

    case 'F':
     printf("%dis mr_int",mr_int[4]);
    printf("%f is the salary mr.float",mr_float[4]);

    break;

    case 's' :
     printf("%d is mr_int",mr_int[5]);
    printf("%fis the salary mr.float",mr_float[5]);

    default :
    printf("Invalid input\n");
    break;
}
 for(i=5;i>=0;i--)
 {
     printf("%c\t",mr_char[i]);
 }
 printf("\n");
  for(i=5;i>=0;i--)
 {
     printf("%d\t",mr_int[i]);
 }
  printf("\n");
  for(i=5;i>=0;i--)
 {
     printf("%3.2f\t",mr_float[i]);
 }
  
 return 0;
} 







