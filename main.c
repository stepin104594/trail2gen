#include<stdio.h>
#include "func.h"
void main()
{
int NUM,N,WEI,W,SEL;
float DISTANCE,METERS,WEIGHT,GRAMS;
printf("SELECT CONVERSION CHOICE");
printf("\n 1. LENGTH CONVERSION\n");
printf("\n 2. WEIGHT CONVERSION\n");
scanf("%d",&SEL);
conversion(SEL);
}
