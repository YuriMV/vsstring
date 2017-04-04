/*
função pra zerar o buffer total
by: vold
Salve: Dennis e D3m0l1d0r. s2
Protótipo: void vmemset(char *ptr, int valor, int len);
*/
#include <stdio.h>
#include <string.h>

#define LEN 100
void vmemset(char *ptr, int valor, int len) {
    int i = 0;
    for(i=0;i<len;i++) {
        ptr[i] = valor;
    }
}
int main(void) {
    char p[LEN];
    strcpy(p, "buff");
    fprintf(stdout, "%s\n", p);
    
    vmemset(p, 0x0, sizeof p); /* Buffer zerado. -> " 0x0 " atribuindo 0 (zerando) todas as posições do vetor. */
    fprintf(stdout, "%s\n", p);
    return 0;
}
