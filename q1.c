/*Design a Building Height Simulation Using Recursive Growth Model where a construction firm
estimates the height of a building at day n using: H(n) = H(n-1) + floor(H(n-1) * growthRate) by
writing a recursive function to compute H(n). Use a structure Building holding: ID, initialHeight,
growthRate. Update values using pointers.*/
#include<stdio.h>
#include<math.h>
struct building
{
    char ID[100];
    float initialheight;
    float growthRate;

};
float H(int n,float *in, float *g) //4,20,3
{
    float prev;
    if(n<=0)   
    return *in;

    else
     prev = H(n-1,in,g);
return prev + floor(prev*(*g));
}
int main()
{
    struct building b1;
    int n;
    printf("\n Enter the number of days the simulation should finish in:");
    scanf("%d",&n);
    printf("\n Enter Building's ID:");
    while(getchar()!='\n');
    fgets(b1.ID,100,stdin);
    printf("\n Enter the Intial height of the building:");
    scanf("%f",&b1.initialheight);
    printf("\n Enter the growth rate:");
    scanf("%f",&b1.growthRate);
    b1.growthRate=b1.growthRate/100;
    printf("\n The Estimated height of a building is: %.2f",H(n, &b1.initialheight, &b1.growthRate));
    

}