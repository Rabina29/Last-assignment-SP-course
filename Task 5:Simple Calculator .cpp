#include<stdio.h>
int main(){
char ch;
int a,b;
printf("Enter a ch(+,-,*,/):");
scanf("%c",&ch);
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
switch(ch){
case'+':
printf("%d\n",a+b);
break;
case'-':
printf("%d\n",a-b);
break;
case'*':
printf("%d\n",a*b);
break;
case'/':
printf("%d\n",a/b);
break;
default :
printf("Invalid operation\n");
}
return 0;
}
