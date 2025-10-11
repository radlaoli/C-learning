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
            int tam_f = i;
            
            i = 0;
            while (t[i] != '\0') {
                f[tam_f + i] = t[i];
                i++;
            }
            f[tam_f + i] = '\0';
            
        } else if (n == 1) {
            int tam_f = strlen(f);
            
            int i = 0;
            while (p[i] != '\0') {
                f[tam_f + i] = p[i];
                i++;
            }
            f[tam_f + i] = '\0';
        }
    }
    
    printf("%s\n", f);
    return 0;
}