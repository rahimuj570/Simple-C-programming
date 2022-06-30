#include<stdio.h>
void main(){
int sum=0,mult=0,n,x,i=1;
float floatSum, floatMult;

printf("Please input the number which you're used to multiplication sequence: ");
scanf("%d",&x);
printf("Please input the maximum nth term: ");
scanf("%d",&n);

//First Programing Solution
while(i<=n){
    mult=x*i;
    printf("%d*%d=%d\n",x,i,mult);
    sum+=mult;
    i++;
}
printf("Sum of all multiplication is ==> %d\n\n",sum);

//Re-initial the values
i=1;
sum=0;

//Second Programming Solution
while(i<=n){
    mult=x*i;
    printf("%d*%d=%d\n",i,x,mult);
    sum+=mult;
    i++;
}
printf("Sum of all multiplication is ==> %d\n\n",sum);

//Third Programming Solution
for(i=1;i<=n;i++){
    floatMult=(float)x*1/i;
    printf("%d*1/%d=%.2f\n",x,i,floatMult);
    floatSum+=floatMult;
}
printf("Sum of all quotient is ==> %.2f\n",floatSum);

}


//Name: Md. Rahimujjman Rahim
//ID: 221010020
