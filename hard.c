#include <stdio.h>
int main() {
/*char ch;
int shift;
char encrypted_ch;
printf("please input a capital letter:\n");
scanf(" %c",&ch);
printf("please input a shift:\n");
scanf("%d",&shift);
if (ch>=65 && ch<=90)
{
if (shift>=1 && shift<=25)
{
encrypted_ch=(ch-65+shift)%26+65;
printf("Original: %c, Encrypted: %c\n", ch, encrypted_ch);
}
else  
{
printf("Invalid shift amount.\n");
}
}
else
{
    printf("Invalid input, please enter a Capital Letter.\n");
}
return 0;
}*/
/*int age;
printf("please input age:");
scanf("%d",&age);
if(age<3)
{
printf("free\n");
}
else if (age>=3 && age<=12)
{
printf("child ticket:10$\n");    
}
else
{
printf("adult ticket:20$\n");
}
return 0;
}*/
int year;
printf("please input year:");
scanf("%d",&year);
if (year%4==0 && year%100!=0 || year%400==0)
{
    printf("leap year\n");
}
else
{
    printf("not a leap year\n");
}
return 0;
}


