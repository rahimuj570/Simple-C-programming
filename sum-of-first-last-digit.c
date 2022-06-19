#include <stdio.h>
void main()
{
int last, first, number,countNum, countDigit=0;
printf("Input your 4 digits: ");
scanf("%d",&number);

//Check Number of digits
countNum=number;
while(countNum!=0){
    countNum=countNum/10;
    countDigit++;
    }

//Find and Sum last,first digit
if(countDigit==4){
    last=number%10;
    while(number>=10)number=number/10;
    first=number;
    printf(" First digit of number is --->%d\n Last digit of number is --->%d\n Sum of last and first digit is --->%d",first,last,first+last);
    }
    else{
        printf("Please Insert 4 digits of number");
        }
}
