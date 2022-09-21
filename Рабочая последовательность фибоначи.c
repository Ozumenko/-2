/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n1=0,n2=1,n3=0,i,num=3;
   while (n3<=num)
   {
       n3=n1+n2;
       n1=n2;
       n2=n3;
   }
   printf("%d",n3);
    return 0;
    
}
