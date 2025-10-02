#include <stdio.h>
#include <string.h>

int main(){
    char str1[49] = {0}; 
    char str2[49] = {0};
    scanf("%s", str1);
    scanf("%s", str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for (int i = 0; i < len2; i++) {
        str1[len1 + i] = str2[i];
    }
    printf("%s\n", str1);
    return 0;
}