#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    
    int produto;
    int pagamento;
    float quant1, quant2, total, parcela, a;
    

    setlocale (LC_ALL,"Portuguese");

    printf("****************************************\n");
    printf("***********Tabela de Produtos***********\n");
    printf("****************************************\n");

    printf("\n");

    printf("1-Creme de Corpo (Tododia) R$60,00\n");
    printf("2-Perfurme Feminino (Biografia) R$150,00\n");
    printf("3-Oleo corporal (Valete) R$50,00\n");

    printf("\n");

    printf("Me Enferme o Produto Desejado: 1 a 3\n");
    scanf("%d", &produto);

    printf("\n");

    switch (produto)
    {
    case 1:

    printf("Creme de Corpo (Tododia)\n");
    printf("Digite a quantidade:\n");
    scanf("%f", &quant1);

    total = quant1 * 60;

    printf("Valor a ser pago %1.2f\n", total);
        break;
    
    case 2:

    printf("Perfurme Feminino (Biografia)\n");
    printf("Digite a quantidade:\n");
    scanf("%f", &quant1);

    total = quant1 * 150;

    printf("Valor a ser pago %1.2f\n", total);
        break;

    case 3:

    printf("Oleo corporal (Valete)\n");
    printf("Digite a quantidade:\n");
    scanf("%f", &quant1);

    total = quant1 * 50;

    printf("Valor a ser pago %1.2f\n", total);
        break;

    default:
        break;
    }

    printf("\n");

    printf("/*/*/*Forma de pagamento*/*/*/\n");

    printf("\n");

    printf("1-Cartao de Debito:\n");
    printf("2-Pix:\n");
    printf("3-Dinheiro:\n");
    printf("4-Cartao de Cretido:\n");

    printf("Escolha a Forma de pagamento:\n");
    scanf("%d", &pagamento);

    printf("\n");

    switch (pagamento)
    {
    case 1:

    printf("Cartao de Debito:\n");
    
    printf("Compra realizada com sucesso: R$%1.2f\n", total);
        break;

    case 2:

    printf("Pix:\n");

    printf("Compra realizada com sucesso: R$%1.2f\n", total);
        break;

    case 3:

    printf("Dinheiro:\n");

    printf("Compra realizada com sucesso: R$%1.2f\n", total);
        break;

    case 4:

    printf("Cartao de Credito:\n");

    printf("Quantidade de parcelas:\n");
    scanf("%f", &parcela);

    a = total / parcela;

    printf("Valor de cada parcela: %2.2fx R$%1.2f\n", parcela, a);
        break;
    
    default:
        break;
    }

    printf("\n");

    printf("Muito obrigado pela preferencia, e volte sempre\n");

    return 0;
}