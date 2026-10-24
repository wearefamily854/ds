#include <stdio.h>
int main() {
    /*int a,b,c,pr;
    printf("please input length:\n");
    scanf("%d",&a);
    printf("please input second width:\n");
    scanf("%d",&b);
    c=a*b;
    printf("the area is:%d\n",c);
    pr=(a+b)*2;
    printf("the perimeter is:%d\n",pr);
    printf("Thank you for using the calculator.\n");
    return 0;
}*/
/*int score;
printf("please input score:\n");
scanf("%d",&score);
if (score>=60)
printf("pass.\n");
else if(score<60)
printf("fail.\n");
if(score==100)
printf("perfect!\n");
return 0;
}*/
/*int a,b,total;
printf("please input price:\n");
scanf("%d",&a);
printf("please input payment amonut:\n");
scanf("%d",&total);
 if(total>a)
printf("your change is:%d\n",total-a);
else if(total<a)
printf("insufficient funds!");
if (total==a)
{
printf("exact payment!");
}
return 0;
}*/
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a<b && a<c)
{
printf("a is the minimum number.\n");
}
else if(b<a && b<c)
{
 printf("b is the minimum number.\n");
}
else
{
   printf("c is the minimum number.\n");
} 
printf("thank you");
return 0;
}


