#include<stdio.h>
int main()
{
    printf("\n%%d");
    printf("\n\\n");
    printf("\n\\\\");
    int dd,mm,yy;
    printf("\n Enter your Date(DD/MM/YYYY)\n Date=");
    scanf("%d/%d/%d",&dd,&mm,&yy);
    int h,m;
    printf("\nENter Your Time(HH:MM)\n Time=");
    scanf("%d:%d",&h,&m);
       printf("Day-%d,Month-%d,Year-%d",dd,mm,yy);
       printf("\n%dHours and%d Minutes",h,m);
    return 0;
}