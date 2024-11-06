// 14.Escreva um algoritmo que leia as idades de 2 homens e de 2 mulheres
//(considere que as idades dos homens serão sempre diferentes entre si, bem
// como as das mulheres). Calcule e escreva a soma das idades do homem
// mais velho com a mulher mais nova, e o produto das idades do homem mais
// novo com a mulher mais velha.
#include <stdio.h>

int main()
{

    // Declaração das variáveis
    int idadePrimeiroHomem, idadeSegundoHomem, idadePrimeiraMulher, idadeSegundaMulher;
    int homemMaisVelho, homemMaisNovo, mulherMaisVelha, mulherMaisNova;
    int soma, produto;

    // Entrada de dados
    printf("\nDigite a idade do primeiro homem: \n");
    scanf("%d", &idadePrimeiroHomem);

    printf("\nDigite a idade do segundo homem: \n");
    scanf("%d", &idadeSegundoHomem);

    printf("\nDigite a idade da primeira mulher: \n");
    scanf("%d", &idadePrimeiraMulher);

    printf("\nDigite a idade da segunda mulher: \n");
    scanf("%d", &idadeSegundaMulher);

    // Determine o homem mais velho e o mais novo
    if (idadePrimeiroHomem > idadeSegundoHomem)
    {
        homemMaisVelho = idadePrimeiroHomem;
        homemMaisNovo = idadeSegundoHomem;
    }

    else
    {
        homemMaisVelho = idadeSegundoHomem;
        homemMaisNovo = idadePrimeiroHomem;
    }

    // Determine a mulher mais velha e a mais nova
    if (idadePrimeiraMulher > idadeSegundaMulher)
    {
        mulherMaisVelha = idadePrimeiraMulher;
        mulherMaisNova = idadeSegundaMulher;
    }

    else
    {
        mulherMaisVelha = idadeSegundaMulher;
        mulherMaisNova = idadePrimeiraMulher;
    }

    // Cálculo da soma e do produto
    soma = homemMaisVelho + mulherMaisNova;
    produto = homemMaisNovo * mulherMaisVelha;

    // Saída de Dados
    printf("soma do homem mais velho com a mulher mais nova eh: %d\n", soma);
    printf("Produto do homem mais novo com a mulher mais velha eh: %d\n", produto);

    return 0;
}