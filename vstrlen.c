/* Pega o tamanho da string completa
 Protótipo: int vstrlen(char *string);
by: vold */
#include <stdio.h>
int vstrlen(char *string) {
      int i = 0;
       while (*string != '\0') {
           i++;
           string++;
       }
       return i;
}
int main(void) {
    int i = vstrlen("eu");
    printf("Tamanho da string completa: %d\n", i);
}
