#include<stdio.h>
void main(){
char sen[50];
int i, count=0;

printf("Insert your sentence: ");
scanf("%[^\n]%*c", &sen);

for(i=0; sen[i]!='\0'; i++){
if(tolower(sen[i])=='a' || tolower(sen[i])=='e' || tolower(sen[i])=='i' || tolower(sen[i])=='o' || tolower(sen[i])=='u')count++;}
printf("There are %d vowels in the sentence.",count);
}
