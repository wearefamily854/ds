#include <stdio.h>
int main() {
   /*int i,j;
    for(i=1;i<=9;i++) {
        for(j=1;j<=i;j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}*/
/*int i,j,k;
for(i=1;i<=9;i++) {
    for(k=1;k<i;k++) {
        printf("  ");
    }
    for(j=1;j<=10-i;j++) {
        printf("0 ");
    }
    printf("\n");
}
return 0;
}*/
int i,j;
for(i=1;i<=9;i++) {
    for(j=1;j<=i;j++) {
        printf("* ");
    }
    printf("\n");
}
return 0;
}