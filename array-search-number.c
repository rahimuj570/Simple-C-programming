#include<stdio.h>
void main(){
int i, arrSize, search, found=0;

//Declare The Array
printf("Please declare the array size: ");
scanf("%d",&arrSize);
int arr[arrSize];

//Insert value in the array
for(i=0;i<arrSize;i++){
printf("Please insert a value of %d index: ",i);
scanf("%d",&arr[i]);
}

//Insert search value
printf("Which number you want to search: ");
scanf("%d",&search);

//Search the targeted value from the array
for(i=0;i<arrSize;i++){
        if(arr[i]==search){
            printf("%d found in index number %d\n",search,i);
            found=1;
        }
}
if(found==0)printf("%d not found in the Array.", search);
}
