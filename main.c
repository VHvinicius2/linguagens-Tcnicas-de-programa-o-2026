#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*FAÇA UM PROGRAMA QUE LEIA 10 NUMEROS INTEROS E POSITVOS,IGNOR CALCULE A SOMA E A MEDIA E MOSTRE NA TELA
OBS:SOMENTE COM 3 VARIAVEIS.NÃO PODE SER VETOR.NÃO PODE USAR LAÇO FOR.

*/




int main(int argc, char *argv[]) {
	
	int n,i,s;
	s=0;
	while(i<10){
		scanf("%d",&n);
		if(n>0){
			s+=n;
			i++;
		
		}
	}
	printf("%d|%d",s,s/10);	
	
	return 0;
}
