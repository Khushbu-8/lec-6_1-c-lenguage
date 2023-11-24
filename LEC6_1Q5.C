#include<stdio.h>
#include<conio.h>

void main(){
int n,m,i;
	clrscr();
   printf("Enter the first number :");
   scanf("%d",&n);
   printf("Enter the second numberm :");
   scanf("%d",&m);
   i=n;
   while(i<=m){
   if(i%4==0||i%400==0||i%100==0){
   printf("%d\n",i);
   }
   i++;
   }


getch();
}