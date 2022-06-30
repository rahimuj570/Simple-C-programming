#include<stdio.h>
void main () {
char a[50];
int i;

scanf("%[^\n]%*c",a);
for(i=0;a[i]!='\0';i++);
printf("There are %d character in %s",i,a);
}
