#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int num)
{
    // Verifica se o número é menor ou igual a 1
    if (num <= 1)
    {
        return 0; // Números menores ou iguais a 1 não são primos
    }

    // Percorre os possíveis divisores do número
    for (int i = 2; i <= num / 2; i++)
    {
        // Verifica se o número é divisível por algum valor diferente de 1 e ele mesmo
        if (num % i == 0)
        {
            return 0; // Se divisível, o número não é primo
        }
    }

    return 1; // Se não foi encontrado nenhum divisor, o número é primo
}

int main()
{
    int numero;

    // Solicita ao usuário para digitar um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Chama a função ehPrimo e exibe o resultado
    if (ehPrimo(numero))
    {
        printf("%d eh um numero primo.\n", numero);
    }
    else
    {
        printf("%d nao eh um numero primo.\n", numero);
    }

    return 0;
}
