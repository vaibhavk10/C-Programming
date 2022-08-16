#include <stdio.h> 
int main()
{
char c;
printf("Enter the alphabet - ");
scanf("%c",&c);
if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
printf("Entered alphabet is Vowel");
}
else  
{
printf("Entered alphabet is consonant");

}

return 0;

}