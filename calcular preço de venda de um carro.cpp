//algoritomo pra calcular o preço,de venda de um carro que é formado pelo preço damontadora, mais 15% de lucro, mais 11% de IPI, mais 17% de ICMS
//entrada:4 algoritmos 1 para preço outro pros 15% e outro pro 11 de ipi e 17& de icms
//saida:1 com resultados
//procesamento:pegar os 4 algorimos fazer a coonta e dar o resultado
//teste de mesa:

#include <stdio.h>


int main (){
	
	float valor, lucro, ipi, icms, venda;
	
	printf ("digite o valod do veiocolo");
	scanf ("%f", &valor);
	
	
	//procesamento
	lucro = valor * 0.15;
	ipi = valor * 0.11;
	icms = valor * 0.17;
	
	
   venda = valor + lucro + ipi + icms;
   
   
   //chat
    printf("Valor do lucro: R$ %.2f\n", lucro);
    printf("Valor do IPI: R$ %.2f\n", ipi);
    printf("Valor do ICMS: R$ %.2f\n", icms);
    printf("Preço de venda: R$ %.2f\n", venda);

    
	
	
	
	
	
	
	
}