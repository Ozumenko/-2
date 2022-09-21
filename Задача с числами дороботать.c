/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a=4,num,mun;//num iscomoe chislo mun perevernutae
   for (int b=1;b<10;b++)
   for (int c=0;c<10;c++)
      {
          num=100*a+10*b+c;
          mun=100*c+10*b+a;
          if (a+b+c==9 && num/mun=47/36)
          printf("Chislo abc-%d\n",num);
      }
   getch();
    return 0;
    
}
