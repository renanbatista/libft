# Libft - Sua Biblioteca C Estendida

## Visão Geral
A **Libft** é mais do que uma reimplementação das funções da biblioteca C padrão; é um compêndio crescente de funções auxiliares que facilitam o desenvolvimento em C, cultivado a partir das experiências e desafios enfrentados durante minha jornada de aprendizado na [42 School](https://www.42.fr/). Este projeto visa não apenas solidificar o conhecimento das funções básicas, mas também expandir esse arsenal com ferramentas úteis e práticas.

## Funcionalidades
- **Reimplementações**: Funções clássicas da libc como `strlen`, `strcpy`, `atoi`, etc., com uma atenção meticulosa à robustez e eficiência.
- **Extensões Práticas**: Funções adicionais que lidam com listas encadeadas, manipulação de strings e memória, ampliando as capacidades padrão da libc.
- **Código Confiável**: Todas as funções são rigorosamente testadas para garantir confiabilidade e consistência.

## Como Utilizar
Para integrar a `libft` aos seus projetos em C e ter uma biblioteca de funções estendida à disposição, siga os passos abaixo:

1. Clone o repositório:
   ```
   git clone https://github.com/renanbatista/libft.git
   ```
2. Compile a biblioteca:
   ```
   cd libft
   make
   ```
3. Inclua o header `libft.h` em seus arquivos de projeto C para acessar as funções.

## Exemplo de Implementação
Aqui está um exemplo simples de como utilizar uma função da `libft`:
```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, Libft!";
    size_t len = ft_strlen(str);
    printf("Length of '%s' is %zu.\n", str, len);
    return 0;
}
```

## Contribuições
Encorajo a comunidade de programadores a contribuir para a `libft`, seja melhorando funções existentes, adicionando novas ou corrigindo bugs. Para contribuir, faça um fork do repositório, crie suas alterações em uma nova branch e envie um pull request.

## Observações
Desenvolvida seguindo as diretrizes rigorosas da 42 School, a `libft` encarna o compromisso com código limpo, eficiente e modular, sempre visando aprimorar e expandir as habilidades de programação.

## Licença
A `libft` está licenciada sob a MIT License, promovendo uma distribuição e uso livre e aberto.
