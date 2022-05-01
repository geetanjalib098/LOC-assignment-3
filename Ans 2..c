

#include<stdio.h>
 #include<conio.h>

void main()

{
 int i,no;

clrscr();

printf (" Enter a number");

scanf("%d",&no);
 for(i=2;i<=no; i++)

{
 if (no%i==0)

break;
}
if (i==no)

printf("Prime number" );

else

printf("not Prime");

getch();
}