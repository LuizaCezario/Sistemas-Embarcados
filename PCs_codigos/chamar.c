#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

char comando[30] = "./Teste ";
char *tudo = strcat(comando,argv[1]);
system("qmake Teste.pro");
system("make Teste");
system(tudo);

return 0;
}
