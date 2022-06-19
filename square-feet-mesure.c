#include <stdio.h>
void main(){
   float length, breadth, area;
    printf("Input the length in feet: ");
    scanf("%f", &length);
    printf("Input the breadth in feet: ");
    scanf("%f", &breadth);
if(length>0 && breadth >0){
    area = (length * 0.3048) * (breadth * 0.3048);
    printf("\====\Area of the rectangular piece of land is %.3f square meters.", area);
}else{
    printf("\====\*Something Went Wrong.\*Please Enter a Valid Input.");
}
}
