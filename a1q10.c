#include<stdio.h>
void main()
{
   char s[10];
   gets(s);
   printf("day- %c%c",s[0],s[1]);
   printf("\nmonth- %c%c",s[3],s[4]);
   printf("\nyear- %c%c%c%c",s[6],s[7],s[8],s[9]);
}
