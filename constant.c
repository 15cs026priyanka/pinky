#include<stdio.h>
void main()
{
char c;
int lowercase voewl,uppercase vowel;
printf("Enter a alphat");
scanf("%c",&c);
is lowervowel=(c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u');
is uppervowel=(c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U');
if(lowervowel||uppervowel)
{
printf("%c is a vowel",c);
}
else
{
printf("%c is a consonat",c);
}
getch();
