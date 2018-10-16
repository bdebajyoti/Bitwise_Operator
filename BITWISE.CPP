//program to demonstrate the bitwise system of AND OR and XOR Operator
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void and(char[],char[]);
void or(char[],char[]);
void xor(char[],char[]);
void main()
{
char s1[100],s2[100];
int ch;
clrscr();
cout<<"\n8 Digit Binary Number:";
cin>>s1;
cout<<"\n8 DigitBinary Number:";
cin>>s2;
if(strlen(s1)==strlen(s2))
{
cout<<"\n1.AND Operator\n2.OR Operator\n3.XOR Operator\n";
cout<<"\nEnter Choice:";
cin>>ch;
if(ch==1)
{
and(s1,s2);
}
if(ch==2)
{
or(s1,s2);
}
if(ch==3)
{
xor(s1,s2);
}
if(ch>3)
{
cout<<"\nInvalid Choice";
}
}
else
{
cout<<"\nYour Length Is Not Correct";
}
getch();
}
void and(char s1[100],char s2[100])
{
char s3[100];
int i,j,l,val;
l=strlen(s1);
j=l;
s3[j]='\0';
--j;
for(i=l-1;i>=0;i--)
{
if(s1[i]=='1' && s2[i]=='1')
{
s3[j]='1';
}
else
{
s3[j]='0';
}
j--;
}
val=0;
j=l-1;
l=strlen(s3);
for(i=0;i<l;i++)
{
if(s3[i]=='1')
{
val+=pow(2,j)*1;
//cout<<j<<" ";
//use to check the performance of loop is correct or not
}
j--;
}
cout<<"\nAfter AND Operation="<<s3<<" The Value Is:"<<val;
}
void or(char s1[100],char s2[100])
{
char s3[100];
int i,j,l,val;
l=strlen(s1);
j=l;
s3[j]='\0';
--j;
for(i=l-1;i>=0;i--)
{
if((s1[i]=='1' && s2[i]=='1') || (s1[i]=='0' && s2[i]=='1') || (s1[i]=='1' && s2[i]=='0'))
{
s3[j]='1';
}
else
{
s3[j]='0';
}
j--;
}
val=0;
j=l-1;
l=strlen(s3);
for(i=0;i<l;i++)
{
if(s3[i]=='1')
{
val+=pow(2,j)*1;
//cout<<j<<" ";
//use to check the performance of loop is correct or not
}
j--;
}
cout<<"\nAfter OR Operation="<<s3<<" The Value Is:"<<val;
}
void xor(char s1[100],char s2[100])
{
char s3[100];
int i,j,l,val;
l=strlen(s1);
j=l;
s3[j]='\0';
--j;
for(i=l-1;i>=0;i--)
{
if((s1[i]=='1' && s2[i]=='0') || (s1[i]=='0' && s2[i]=='1'))
{
s3[j]='1';
}
else
{
s3[j]='0';
}
j--;
}
val=0;
j=l-1;
l=strlen(s3);
for(i=0;i<l;i++)
{
if(s3[i]=='1')
{
val+=pow(2,j)*1;
//cout<<j<<" ";
//use to check the performance of loop is correct or not
}
j--;
}
cout<<"\nAfter XOR Operation="<<s3<<" The Value Is:"<<val;
}