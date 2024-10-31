#include <stdio.h>
#include <math.h>
/*
Uma loja vende seus produtos no sistema de entrada mais duas prestações, sendo a
entrada maior do que ou igual às duas prestações, as quais devem ser iguais, inteiras e
as maiores possíveis. Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e
as duas prestações são iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a
entrada é de R$ 102,75 e as duas prestações são a iguais a R$ 100,00. Escreva um
programa que receba o valor da mercadoria e forneça o valor da entrada e das duas
prestações, de acordo com as regras acima. Observe que uma jusVficaVva para a adoção
desta regra é que ela facilita a confecção e o consequente pagamento dos boletos das
duas prestações.
*/
int main(){
    float numeroPacelas = 2;
    float valorEntrada = 0;
    float valorProduto = 0; 
    float precoParcela = 0;
    float produtoFinal = 0;
    float valorDevendo = 0;


    printf("Digite o valor do produto ");
    scanf("%f", &valorProduto);

    printf("Digite o valor da entrada ");
    scanf("%f", &valorEntrada);

    precoParcela = (valorProduto - valorEntrada) / numeroPacelas;
    produtoFinal = valorProduto / 3;

    if (valorEntrada >= produtoFinal){
        printf("Compra Aprovada!!\n");
        printf("Valor do produto: %.2f\n", valorProduto);
        printf("Valor de entrada: %.2f\n", valorEntrada);
        valorProduto = valorProduto - valorEntrada;
        valorDevendo = valorProduto;
        printf("Valor da parcela: 2x de %.2f\n", precoParcela);
        printf("Valor produto atualizado: %.2f\n",valorDevendo);

    }else{
        printf("entrada insuficiente!\n");
        printf("O valor da entrada, tem que ser o mesmo preco, ou maior de 3 parcelas do produto !");

    }
    
    return 0;

}
