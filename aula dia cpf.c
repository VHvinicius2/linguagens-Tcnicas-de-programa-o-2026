#include <stdio.h>
#include <stdlib.h>

int mult(int numero,int valor){
  return numero * valor;
}

int main(int argc, char *argv[]) {
	
	
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,nv,nv2,soma,resto;
	
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&nv,&nv2);
	 
	prinf(" confirme seu cpf:%d%d%d.%d%d%d.%d%d%d-%d%d", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&nv,&nv2);
     
     
     soma= mult(n1,10)+(n2,9)+(n3,8)+(n4,7)+(n5,6)+(n6,5)+(n7,4)+(n8,3)+(n9,2);
     
     soma*=10
     resto= soma%11;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
