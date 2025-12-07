/* Design a File Size Compression Estimator Using Recurrence Relation where a cloud service
compresses files in multiple passes: size(n) = size(n-1) - ceil(size(n-1) * reductionRate)
Use a File structure storing fileName, originalSize, reductionRate. Write a recursive function to
estimate file size after k compression rounds.  
*/
#include<stdio.h>
#include<math.h>
struct fileName
{
    float originalSize;
    float reductionRate;
}file;
float size(struct fileName file,int rounds)
{
    float pre;
        if(rounds<=0)  return file.originalSize;
        else
        {
            pre=size(file,rounds-1);
            return pre - ceil(pre*file.reductionRate);
        }
}
int main()
{
    int k;
    printf("\n Enter File's original size:");
    scanf("%f",&file.originalSize);
    printf("\nEnter Reduction Rate:");
    scanf("%f",&file.reductionRate);
    file.reductionRate=file.reductionRate/100;
    printf("\n Enter Compression rounds:");
    scanf("%d",&k);
    float com=size(file,k);
    printf("\n The Estimated file size is: %.2f",com);
}