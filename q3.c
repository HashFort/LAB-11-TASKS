/*Design a Hospital Patient Monitoring Using Recursive Health Score Calculation where Each patient
has daily health score changes. Use structures:
Patient → name, age, healthScore
DailyReport → day, scoreChange
Write a recursive function that computes the final health score after N days using an array of
DailyReport. Stop when n all days are processed.*/
#include<stdio.h>
struct DailyReport{
    int scoreChange[100];
    int n;
};
struct patient {
    char name[100];
    int healthScore;
    struct DailyReport daily;
};
int y;
int final(struct patient p,int  num,int index)
{
    if(num<=0) 
    return y;
    else
    {
    printf("\n Enter the Score change of Day %d:",index+1);
    scanf("%d",&p.daily.scoreChange[index]);  
        y=y+p.daily.scoreChange[index];
       index++;
        return final(p,num-1,index);
    }
}
int main()
{ 
    struct patient p;
    printf("\n Enter Customer's name:");
    fgets(p.name,100,stdin);
    printf("\n Enter healthScore:");
    scanf("%d",&p.healthScore);
    printf("\n Enter Number of days:");
    scanf("%d",&p.daily.n);
    p.healthScore+=final(p,p.daily.n,0);
    printf("\n The Final health score is :%d",p.healthScore);
}