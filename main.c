/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int n,e=0,o=0,c=0,d,r,t,t1;
n=235689743879;
t=n;
t1=n;
while(t)
{
    r=t%10;
    c++;
    t=t/10;
}
printf("%d\n",c);
while(c!=0)
{
if(c%2==0)
e=e+(t1%10);
else
o=o+(t1%10);
t1=t1/10;
c--;
}
printf("%d\n",o);
printf("%d\n",e);
d=abs(e)-abs(o);
printf("%d\n",abs(d));

}

