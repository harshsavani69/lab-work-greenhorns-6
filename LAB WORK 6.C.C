#include<stdio.h>
#include<conio.h>

main()
{
   float bs,hra,da,ta,gs;
   clrscr();
   printf("enter basic salary: ");
   scanf("%f",&bs);
   hra=(15*bs)/100;
   printf("hra: %f",hra);
   da=(5*bs)/100;
   printf("\nda: %f",da);
   ta=(2*bs)/100;
   printf("\nta: %f",ta);
   gs=bs+hra+da+ta;
   printf("gross salary: %f",gs);

   getch();

}
