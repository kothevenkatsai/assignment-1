#include<stdio.h>
void main()
{
    char s[20]="Balaji";
    int cnt=0;
    for(int i=0;s[i]!='\0';++i)
    {
        cnt++;
    }
    printf("%d",cnt);
    printf("\n\"Hello ,Amit Kumar\" \n");
    printf("%%d\n");
    printf("\\n\n");
    printf("\\\\");
}
