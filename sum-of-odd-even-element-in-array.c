#include <stdio.h>
void main()
{
int i, checkEven, allSum, evenSum=0, oddSum, arrayLimit=0;
printf("Input Limit of Array Index: ");
scanf(" %d",&arrayLimit);
int arr[arrayLimit];

//Input Number
for(i=0; i<arrayLimit; i++){
printf("Input value of %d index : ",i);
scanf("%d",&arr[i]);}

//Calculate
for(i=0;i<arrayLimit; i++){
allSum+=arr[i];
checkEven=arr[i]%2;
if(checkEven==0){
evenSum+=arr[i];
}else{
oddSum+=arr[i];
}
    }
printf("Sum of all number is ---> %d\n",allSum);
printf("Sum of all Even number is ---> %d\n",evenSum);
printf("Sum of all Odd number is ---> %d\n",oddSum);
}
