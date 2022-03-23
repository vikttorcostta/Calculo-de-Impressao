//PROGRAMA DE CÁCULO DE VALOR DO METRO QUADRADO PEÇAS GRÁFICAS DE IMPRESSÃO

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alt, larg, quantidade, valMetroQuadrado;
  printf("PROGRAMA DE PRECO PARA IMPRESSAO DE PECAS GRAFICAS: \n");
  printf("------------------------------------------------------------------------ \n");
  printf("PARA VALORES EM CENTIMETROS: 0.07 CM, PARA METROS 1.00 M \n");
  printf("------------------------------------------------------------------------ \n");

        printf("INFORME A ALTURA: \n");
        scanf("%f", &alt);
        printf("INFORME A LARGURA: \n");
        scanf("%f", &larg);
        printf("INFORME A QUANTIDADE: \n");
        scanf("%f", &quantidade);
        printf("INFORME VALOR DO METRO QUADRADO: \n");
        scanf("%f", &valMetroQuadrado);



    float valorFinal = alt * larg * quantidade * valMetroQuadrado;
 printf("VALOR FINAL EM REAIS: R$ %.2f \n", valorFinal);


system("pause");
return 0;
}
