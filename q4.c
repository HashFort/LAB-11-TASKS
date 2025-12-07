/* Design a Weather Forecast Prediction Using Recursive Temperature Modelling where a
Meteorologists predict temperature using: T(n) = T(n-1) + random_variation – cooling_factor
Create a structure WeatherData that stores cityName, baseTemp, coolingFactor. Write a
recursive function that simulates temperature for n days.*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
struct weather
{
    char cityName[100];
    float baseTemp;
    float coolingFactor;
}w;
float T(struct weather *p,int n,int index,float temp1[])
{
    float pre;
    if(n==0)
    {
        return temp1[0]=p->baseTemp;
    }
    else
    {
        index=index+1;
        pre=T(p,n-1,index,temp1);
        temp1[index]=pre+((rand()%10)+1)-(p->coolingFactor);
        return temp1[index];
    }
}
int main()
{
    srand(time(NULL));
    int n;
    printf("\n Enter the City's name:");
   fgets(w.cityName,100,stdin);
   printf("\n Enter the Base temperature:");
   scanf("%f",&w.baseTemp);
   printf("\n Enter the cooling factor:");
   scanf("%f",&w.coolingFactor);
   printf("\n Enter the Number of days to predict the weather forecast:");
   scanf("%d",&n);
   float temp1[n];
 
   T(&w,n,-1,temp1);
   for(int i=0;i<n;i++)
   {
    printf("\nThe temperature of day %d is:%.2f",i+1,temp1[i]);
   }
}