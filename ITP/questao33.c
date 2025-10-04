#include <stdio.h>
#include <string.h>

int main() {
    char p[30], f[100] = "", t[100];
    int n = 0;
    
    while (1) {
        scanf("%d", &n);
        if (n == -1) {
            break;
        }
        getchar();
        scanf("%[^\n]", p);
        if (n == 0) {
            int i = 0;
            while (f[i] != '\0') {
                t[i] = f[i];
                i++;
            }
            t[i] = '\0';
            
            i = 0;
            while (p[i] != '\0') {
                f[i] = p[i];
                i++;
            }
            f[i] = '\0';
            
            i = 0;
            while (t[i] != '\0') {
                f[strlen(f)] = t[i];
                i++;
            }
            f[strlen(f)] = '\0';
        } else if (n == 1) {
            if (strlen(f) > 0) {
                f[strlen(f)] = ' ';
                f[strlen(f) + 1] = '\0';
            }
            int i = 0;
            while (p[i] != '\0') {
                f[strlen(f)] = p[i];
                i++;
            }
            f[strlen(f)] = '\0';
        }
    }
    
    printf("%s\n", f);
    return 0;
}