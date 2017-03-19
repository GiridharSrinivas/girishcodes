#include<iostream.h>
#include<conio.h>
void main()
{
int yr;
clrscr();
cout<<"Enter Year:";
cin>>yr;
if((yr%4) == 0)
{
cout<<"Leap year";
}
else
{
cout<<"Not a leap year";
}
getch();
}