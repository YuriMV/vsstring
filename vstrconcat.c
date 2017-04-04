/*Função equivalente a strcat()
Protótipo: void vstrConcat(char *dest, char *src);
by: vold */
#include <stdio.h>
#include <string.h>

#define LEN 100
void vstrConcat(char *dest, char *src) {
   int i = 0;
   size_t lenptr1 = strlen(dest);
       for (i=0;i<lenptr1;i++);
      while(*src != '\0') {
          dest[i] = *src++;
          i++;
      }
         dest[i] = '\0';
         printf("\nstrings concatenadas\n%s\n", dest);
       //EOF
}
int main(void) {
    char s1[LEN], s2[LEN];

    printf("digite uma string: ");
    scanf("%s", s1);

    printf("digite outra string: ");
    scanf("%s", s2);

    vstrConcat(s1, s2);
    return 0;
}
