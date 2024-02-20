<!-- Título -->
# Exercício 2

***Conteúdo da Aula:***

Escreva um programa em **C** que, através da leitura de um número fornecido pelo usuário, indique se este número é primo.

Lembrando:

* A condição para um número ser considerado primo é que este seja divisível somente por ele mesmo e por 1.
* Um exemplo de número primo é o número 11.

[Resolução](main.c)

> [!IMPORTANT]\
> **Boas práticas**:
>
> * Comentários Descritivos:
>   * Utilize comentários para descrever a finalidade das funções e trechos de código, tornando mais fácil para outros programadores entenderem o seu código.
>
> * Evitar o Uso de Magic Numbers:
>   * Evite o uso de números mágicos diretamente no código.
>   * Considere a possibilidade de criar constantes para valores específicos, como 1 e 2.
>
> * Limitação do Loop:
>   * No trecho for (int i = 2; i <= num / 2; i++), a verificação pode ser otimizada para i * i <= num para reduzir a quantidade de iterações, melhorando a eficiência para números grandes.

> [!WARNING]\
> **Sugestões de melhoria**:
>
> * Validação de Entrada:
>   * Adicione verificações para garantir que o usuário insira um número inteiro válido.
>
> * Usabilidade:
>   * Considere fornecer mensagens de erro mais informativas ao lidar com entradas inválidas.
>
> * Utilização de Funções:
>   * Pode ser benéfico dividir a lógica em funções mais curtas e focadas, facilitando a compreensão e manutenção do código.

> [!NOTE]\
> **Observações**:
>
> * Eficiência:
>   * A abordagem atual pode não ser a mais eficiente para verificar se um número é primo, especialmente para números grandes.
>   * Existem algoritmos mais otimizados, como o Crivo de Eratóstenes, que podem ser considerados para melhorar o desempenho.
>
> * Limitação de Precisão:
>   * Para garantir maior precisão ao trabalhar com números grandes, pode-se considerar o uso de tipos de dados de maior precisão, como long long para armazenar números inteiros.

<!-- Informações -->
## &#8505; Informações

![Visitors](https://api.visitorbadge.io/api/visitors?path=Devsgeeknerd%2Fcla-exe-2-hor-pra-3-log-par-pro-com-bas&label=Visitantes&labelColor=%23700070&labelStyle=none&countColor=%23000fff&style=plastic&color=%23ffffff "Total de Visitantes")
&nbsp;
![Followers](https://img.shields.io/github/followers/Devsgeeknerd?style=p&label=Seguidores&labelColor=800080&color=000fff "Total de Seguidores")
&nbsp;
![Watchers](https://img.shields.io/github/watchers/Devsgeeknerd/cla-exe-2-hor-pra-3-log-par-pro-com-bas?style=p&label=Observadores&labelColor=800080&color=000fff "Total de Observadores")
&nbsp;
![Stars](https://img.shields.io/github/stars/Devsgeeknerd/cla-exe-2-hor-pra-3-log-par-pro-com-bas?style=p&label=Estrelas&labelColor=800080&color=000fff "Total de Estrelas")
&nbsp;
![Forks](https://img.shields.io/github/forks/Devsgeeknerd/cla-exe-2-hor-pra-3-log-par-pro-com-bas?style=p&label=Bifurcações&labelColor=800080&color=000fff "Total de Bifurcações")
&nbsp;
![Repo Size](https://img.shields.io/github/repo-size/Devsgeeknerd/cla-exe-2-hor-pra-3-log-par-pro-com-bas?style=p&label=Tamanho&labelColor=800080&color=000fff "Tamanho do Repositório")
&nbsp;
![License](https://img.shields.io/github/license/Devsgeeknerd/cla-exe-2-hor-pra-3-log-par-pro-com-bas?style=p&label=Licença&labelColor=800080&color=000fff "Licença do Repositório")
