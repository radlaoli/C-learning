#include <stdio.h>

int main (){

    int n1 = 3;
    int n2;
    int n3;
     n2 = 3 + n1++;
     n3 = n2;
    printf ("%d\n", 3 + n1++);
    printf ("%d", n2);
    printf ("\n%d", n3);

    return 0;
}