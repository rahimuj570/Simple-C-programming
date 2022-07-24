#include<stdio.h>
void main(){
char str[500];
int option, i, count=0;
printf("Insert your string here: ");
gets(str);

redeclear:
printf("\n\nWhat you want to count?\n1) All Character. \n2) Word. \n3) Sentence.\n4) Alphabet.\n5) Vowel.\n6) Consonant. \n7) Special Character. \n8) Number. \n9) Uppercase. \n10) Lowercase.");
printf("\n\n Input Here: ");
scanf("%d", &option);

switch(option){
case 1: {
    for(i=0; str[i]!='\0'; i++)count++;break;
}

case 2: {
    for(i=0; str[i]!='\0'; i++)if(str[i]==' ')count++;count+=1;break;
}

case 3: {
    for(i=0; str[i]!='\0'; i++)if(str[i]=='.')count++;break;
}

case 4: {
    for(i=0; str[i]!='\0'; i++)if(str[i]>='a' || str[i]>='A')count++;break;
}

case 5: {
    for(i=0; str[i]!='\0'; i++)if(tolower(str[i])=='a' || tolower(str[i])=='e' || tolower(str[i])=='i' || tolower(str[i])=='o' || tolower(str[i])=='u')count++;break;
}

case 6: {
    for(i=0; str[i]!='\0'; i++)if(tolower(str[i])>='a')if(tolower(str[i])!='a' && tolower(str[i])!='e' && tolower(str[i])!='i' && tolower(str[i])!='o' && tolower(str[i])!='u')count++;break;
}

case 7: {
    for(i=0; str[i]!='\0'; i++)if(tolower(str[i])>='a' && tolower(str[i]<='z') || str[i]>='0' && str[i]<='9');else count++;break;
}

case 8: {
    for(i=0; str[i]!='\0'; i++)if(str[i]>='0' && str[i]<='9')count++;break;
}

case 9: {
    for(i=0; str[i]!='\0'; i++)if(str[i]>='a' && str[i]<='z') count++;break;
}

case 10: {
    for(i=0 ; str[i]!='\0'; i++)if(str[i]>='A' && str[i]<='Z') count++;break;
}

default: printf("\n\n>>>>>>>>Invalid Input...\n>>>>>>>>Try Again...\n\n"); goto redeclear;
}

printf("\n\nResult => %d\n\n",count);

printf("***Want to count again?\n 1) YES\t\t 2) No \nInput Here: ");
scanf("%d",&option);
if(option==1)goto redeclear;
else printf("\n\n<<<<< See You Again... >>>>>");
}
