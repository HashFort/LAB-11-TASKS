/* Design a Food Delivery Tip Optimization using Recursion where a food delivery rider has a list of N
delivery stops, each offering a different tip amount. However, due to time constraints and route
optimization, the rider can either: deliver to the next stop, OR skip one stop and deliver to the
following one. Your job is to help the rider maximize the total tip he can collect.*/
#include<stdio.h>
int max(int a, int b)
 {
    return (a > b) ? a : b;
}
int opti(int n, int tips[], int i) {
    if (i >= n)
     {
        return 0;
     }
    int collect = tips[i] + opti(n, tips, i + 2);
    int skip = opti(n, tips, i + 1);
    return max(collect,skip);
}
int main()
{
    int n,total;
    printf("\n Enter total stops:");
    scanf("%d",&n);
    int tips[n];
    for(int i=0;i<n;i++)
    {
        printf("\n Enter the tip of the %d houses:",i+1);
        scanf("%d",&tips[i]);
    }
    total=opti(n,tips,0);
    printf("%d",total);
}