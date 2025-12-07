/*Design a University Fee Management Using Nested Structures & Recursion, Use nested structures:
Person → name, age
Student → person (nested), creditHours, perCreditFee
Write a recursive function that computes semester fee: fee(n) = fee(n-1) + (perCreditFee *
subject_credit[n])*/
#include<stdio.h>
#include<stdlib.h>
struct person{
    char name[100];
    int age;
};
struct student{
    struct person p;
    int *creditHours;
    float perCreditFee;
}s;
float fee(float hour, int n,int *p,int i)
{
    float pre;
    if(n==0) return 0;
    else{
        pre=fee(hour,n-1,p,i);
        i++;
        return pre+(hour*p[i]); }   
}
int main()
{   int n,i;
    float total;
    printf("\n Enter the student name:");
    fgets(s.p.name,100,stdin);
    printf("\n Enter the student's age:");
    scanf("%d",&s.p.age);
    printf("\n Enter the number of courses:");
    scanf("%d",&n);
    printf("\n Enter the Per-credit-fee of subject:");
    scanf("%f",&s.perCreditFee);
    s.creditHours=malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
    printf("\n Enter the credit hours of subject %d : ",i+1);
    scanf("%d",&s.creditHours[i]);
    }
     total=fee(s.perCreditFee,n,s.creditHours,-1);   
    printf("\n the total semester fees is :%.2f",total);}