#include<stdio.h>
#include<conio.h>

void main(){
int n=1,i;
clrscr();
printf("Enter any Number..");
scanf("%d",&i);
printf("Even number from 1 to %d\n",i);

      while(n<=i){
      if(n%2==0){

      printf("%d\n",n);

      }
      n++;
      }
 getch();

}
