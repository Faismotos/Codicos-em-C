#include <stdio.h>
int main(){
	
	char nome[10];//variavel com identificador nome com 10 caracteres
	char sobrenome[10];//variavel com identificador sobrenome com 10 caracteres
		printf ("Digite seu Nome: ");//pede para o usuario digitar o nome
		scanf ("%s",nome);//armazena o nome na variavel nome
		printf ("Digite seu sobrenome");;//pede para o usuario digitar o sobrenome
		scanf ("%s",sobrenome);//armazena o sobrenome na variavel sobrenome
		printf ("Ola, %s %s!\n", nome, sobrenome);//mostra Ola, nome sobrenome! e pula pra proxima linha
		
	
	
	
return 0;//fecha o progama
	
}