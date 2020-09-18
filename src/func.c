#include<stdio.h>
int NUM,N,WEI,W,SEL;
float DISTANCE,METERS,WEIGHT,GRAMS;
void conversion(int SEL){
if(SEL == 1){
printf("SELECTED LENGTH CONVERSION");
printf("SELECT MEASURING METRICS");
printf("\n 1. MILLIMETERS\n");
printf("\n 2. CENTIMETERS\n");
printf("\n 3. METERS\n");
printf("\n 4. KILOMETERS\n");
printf("ENTER CHOICE HERE :");
scanf("%d",&NUM);
if(NUM == 1) {
    printf("SELECT CONVERSION");
    printf("\n 1. MILLIMETERS TO CENTIMETERS\n");
    printf("\n 2. MILLIMETERS TO METERS\n");
    printf("\n 3. MILLIMETERS TO KILOMETERS\n");
    printf("ENTER CHOICE HERE :");
    scanf("%d",&N);
    switch(N)
    {
    case 1 : printf("\n SELETED MILLIMETERS TO CENTIMETERS\n");
    break;
    case 2 : printf("\n SELETED MILLIMETERS TO METERS\n");
    break;
    case 3 : printf("\n SELETED MILLIMETERS TO KILOMETERS\n");
    break;
    default : printf("YOU HAVE ENTERED WRONG CHOICE !!!");
    }
    printf("ENTER WEIGHT HERE :");
    scanf("%f",&DISTANCE);
    switch(N)
    {
    case 1 : METERS=DISTANCE/10;
    printf("\n %f MILLIMETERS IS %f CENTIMETERS\n",DISTANCE,METERS);
    break;
    case 2 : METERS=DISTANCE/1000;
    printf("\n %f MILLIMETERS IS %f METERS\n",DISTANCE,METERS);
    break;
    case 3 : METERS=DISTANCE/1000000;
    printf("\n %f MILLIMETERS IS %f KILOMETERS\n",DISTANCE,METERS);
    break;
    }
    }

else if(NUM == 2){
    printf("SELECT CONVERSION");
    printf("\n 1. CENTIMETERS TO MILLIMETERS\n");
    printf("\n 2. CENTIMETERS TO METERS\n");
    printf("\n 3. CENTIMETERS TO KILOMETERS\n");
    printf("ENTER CHOICE HERE :");
    scanf("%d",&N);
    switch(N)
    {
    case 1 : printf("\n SELETED CENTIMETERS TO MILLIMETERS\n");
    break;
    case 2 : printf("\n SELETED CENTIMETERS TO METERS\n");
    break;
    case 3 : printf("\n SELETED CENTIMETERS TO KILOMETERS\n");
    break;
    default : printf("YOU HAVE ENTERED WRONG CHOICE !!!");
    }
    printf("ENTER WEIGHT HERE :");
    scanf("%f",&DISTANCE);
    switch(N)
    {
    case 1 : METERS=DISTANCE*10;
    printf("\n %f CENTIMETERS IS %f MILLIMETERS\n",DISTANCE,METERS);
    break;
    case 2 : METERS=DISTANCE/100;
    printf("\n %f CENTIMETERS IS %f METERS\n",DISTANCE,METERS);
    break;
    case 3 : METERS=DISTANCE/100000;
    printf("\n %f CENTIMETERS IS %f KILOMETERS\n",DISTANCE,METERS);
    break;
    }
    }
else if(NUM == 3){
    printf("SELECT CONVERSION");
    printf("\n 1. METERS TO MILLIMETERS\n");
    printf("\n 2. METERS TO CENTIMETERS\n");
    printf("\n 3. METERS TO KILOMETERS\n");
    printf("ENTER CHOICE HERE :");
    scanf("%d",&N);
    switch(N)
    {
    case 1 : printf("\n SELETED METERS TO MILLIMETERS\n");
    break;
    case 2 : printf("\n SELETED METERS TO CENTIMETERS\n");
    break;
    case 3 : printf("\n SELETED METERS TO KILOMETERS\n");
    break;
    default : printf("YOU HAVE ENTERED WRONG CHOICE !!!");
    }
    printf("ENTER WEIGHT HERE :");
    scanf("%f",&DISTANCE);
    switch(N)
    {
    case 1 : METERS=DISTANCE*1000;
    printf("\n %f METERS IS %f MILLIMETERS\n",DISTANCE,METERS);
    break;
    case 2 : METERS=DISTANCE*100;
    printf("\n %f METERS IS %f CENTIMETERS\n",DISTANCE,METERS);
    break;
    case 3 : METERS=DISTANCE/1000;
    printf("\n %f METERS IS %f KILOMETERS\n",DISTANCE,METERS);
    break;
    }
    }
else if(NUM == 4){
    printf("SELECT CONVERSION");
    printf("\n 1. KILOMETERS TO MILLIMETERS\n");
    printf("\n 2. KILOMETERS TO CENTIMETERS\n");
    printf("\n 3. KILOMETERS TO METERS\n");
    printf("ENTER CHOICE HERE :");
    scanf("%d",&N);
    switch(N)
    {
    case 1 : printf("\n SELETED KILOMETERS TO MILLIMETERS\n");
    break;
    case 2 : printf("\n SELETED KILOMETERS TO CENTIMETERS\n");
    break;
    case 3 : printf("\n SELETED KILOMETERS TO METERS\n");
    break;
    default : printf("YOU HAVE ENTERED WRONG CHOICE !!!");
    }
    printf("ENTER WEIGHT HERE :");
    scanf("%f",&DISTANCE);
    switch(N)
    {
    case 1 : METERS=DISTANCE*1000000;
    printf("\n %f KILOMETERS IS %f MILLIMETERS\n",DISTANCE,METERS);
    break;
    case 2 : METERS=DISTANCE*100000;
    printf("\n %f KILOMETERS IS %f CENTIMETERS\n",DISTANCE,METERS);
    break;
    case 3 : METERS=DISTANCE*1000;
    printf("\n %f KILOMETERS IS %f METERS\n",DISTANCE,METERS);
    break;
    }
    }
else {
    printf("YOU HAVE ENTERED WRONG CHOICE !!!");
}
}
else if(SEL ==2){
printf("SELECTED WEIGTH CONVERSION");
printf("SELECT MEASURING METRICS");
printf("\n 1. MILLIGRAM\n");
printf("\n 2. GRAM\n");
printf("\n 3. KILOGRAM\n");
printf("\n 4. TON\n");
printf("ENTER CHOICE HERE :");
scanf("%d",&WEI);
if(WEI == 1) {
    printf("SELECT CONVERSION");
    printf("\n 1. MILLIGRAM TO GRAM\n");
    printf("\n 2. MILLIGRAM TO KILOGRAM\n");
    printf("\n 3. MILLIGRAM TO TON\n");
    printf("ENTER CHOICE HERE :");
    scanf("%d",&W);
    switch(W)
    {
    case 1 : printf("\n SELECTED MILLIGRAM TO GRAM\n");
    break;
    case 2 : printf("\n SELECTED MILLIGRAM TO KILOGRAM\n");
    break;
    case 3 : printf("\n SELECTED MILLIGRAM TO TON\n");
    break;
    default : printf("YOU HAVE ENTERED WRONG CHOICE !!!");
    }
    printf("ENTER WEIGHT HERE :");
    scanf("%f",&WEIGHT);
    switch(W)
    {
    case 1 : GRAMS=WEIGHT/1000;
    printf("\n %f MILLIGRAMS IS %f GRAMS\n",WEIGHT,GRAMS);
    break;
    case 2 : GRAMS=WEIGHT/1000000;
    printf("\n %f MILLIGRAMS IS %f KILOGRAMS\n",WEIGHT,GRAMS);
    break;
    case 3 : GRAMS=WEIGHT/1000000000;
    printf("\n %f MILLIGRAMS IS %f TONS\n",WEIGHT,GRAMS);
    break;
    }
    }

else if(WEI == 2) {
    printf("SELECT CONVERSION");
    printf("\n 1. GRAM TO MILLIGRAM\n");
    printf("\n 2. GRAM TO KILOGRAM\n");
    printf("\n 3. GRAM TO TON\n");
    printf("ENTER CHOICE HERE :");
    scanf("%d",&W);
    switch(W)
    {
    case 1 : printf("\n SELECTED GRAM TO MILLIGRAM\n");
    break;
    case 2 : printf("\n SELECTED GRAM TO KILOGRAM\n");
    break;
    case 3 : printf("\n SELECTED GRAM TO TON\n");
    break;
    default : printf("YOU HAVE ENTERED WRONG CHOICE !!!");
    }
    printf("ENTER WEIGHT HERE :");
    scanf("%f",&WEIGHT);
    switch(W)
    {
    case 1 : GRAMS=WEIGHT*1000;
    printf("\n %f GRAMS IS %f MILLIGRAMS\n",WEIGHT,GRAMS);
    break;
    case 2 : GRAMS=WEIGHT/1000;
    printf("\n %f GRAMS IS %f KILOGRAMS\n",WEIGHT,GRAMS);
    break;
    case 3 : GRAMS=WEIGHT/1000000;
    printf("\n %f GRAMS IS %f TONS\n",WEIGHT,GRAMS);
    break;
    }
    }

else if(WEI == 3) {
    printf("SELECT CONVERSION");
    printf("\n 1. KILOGRAM TO MILLIGRAM\n");
    printf("\n 2. KILOGRAM TO GRAM\n");
    printf("\n 3. KILOGRAM TO TON\n");
    printf("ENTER CHOICE HERE :");
    scanf("%d",&W);
    switch(W)
    {
    case 1 : printf("\n SELECTED KILOGRAM TO MILLIGRAM\n");
    break;
    case 2 : printf("\n SELECTED KILOGRAM TO GRAM\n");
    break;
    case 3 : printf("\n SELECTED KILOGRAM TO TON\n");
    break;
    default : printf("YOU HAVE ENTERED WRONG CHOICE !!!");
    }
    printf("ENTER WEIGHT HERE :");
    scanf("%f",&WEIGHT);
    switch(W)
    {
    case 1 : GRAMS=WEIGHT*1000000;
    printf("\n %f KILOGRAMS IS %f MILLIGRAMS\n",WEIGHT,GRAMS);
    break;
    case 2 : GRAMS=WEIGHT*1000;
    printf("\n %f KILOGRAMS IS %f KILOGRAMS\n",WEIGHT,GRAMS);
    break;
    case 3 : GRAMS=WEIGHT/1000;
    printf("\n %f KILOGRAMS IS %f TONS\n",WEIGHT,GRAMS);
    break;
    }
    }

else if(WEI == 4) {
    printf("SELECT CONVERSION");
    printf("\n 1. TON TO MILLIGRAM\n");
    printf("\n 2. TON TO GRAM\n");
    printf("\n 3. TON TO KILOGRAM\n");
    printf("ENTER CHOICE HERE :");
    scanf("%d",&W);
    switch(W)
    {
    case 1 : printf("\n SELECTED TON TO MILLIGRAM\n");
    break;
    case 2 : printf("\n SELECTED TON TO GRAM\n");
    break;
    case 3 : printf("\n SELECTED TON TO KILOGRAM\n");
    break;
    default : printf("YOU HAVE ENTERED WRONG CHOICE !!!");
    }
    printf("ENTER WEIGHT HERE :");
    scanf("%f",&WEIGHT);
    switch(W)
    {
    case 1 : GRAMS=WEIGHT*1000000000;
    printf("\n %f TON IS %f MILLIGRAMS\n",WEIGHT,GRAMS);
    break;
    case 2 : GRAMS=WEIGHT*1000000;
    printf("\n %f TON IS %f GRAMS\n",WEIGHT,GRAMS);
    break;
    case 3 : GRAMS=WEIGHT*1000;
    printf("\n %f TON IS %f KILOGRAM\n",WEIGHT,GRAMS);
    break;
    }
    }
else {
    printf("YOU HAVE ENTERED WRONG CHOICE !!!");
}
}
else {
    printf("YOU HAVE ENTERED WRONG CHOICE !!!");
}
}
