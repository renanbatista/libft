# Libft

## Sobre
A `libft` é uma biblioteca em C desenvolvida como parte do currículo da [42 School](https://www.42.fr/), recriando funções padrão da biblioteca C e implementando funções adicionais úteis para manipulação de strings, listas, etc. Essa biblioteca é ideal para quem está aprendendo programação em C e deseja uma compreensão profunda do funcionamento das funções padrão.

## Funções
A `libft` contém uma ampla gama de funções recriadas da biblioteca padrão C, assim como funções adicionais desenvolvidas para facilitar a programação em C. Abaixo está a lista das funções disponíveis:

### Funções de manipulação de strings
- `ft_strlen` - calcula o comprimento de uma string.
- `ft_strcpy` - copia uma string para outra.
- `ft_strcat` - concatena duas strings.
- `ft_strchr` - localiza a primeira ocorrência de um caractere em uma string.
- `ft_strrchr` - localiza a última ocorrência de um caractere em uma string.
- `ft_strstr` - localiza uma substring em uma string.
- `ft_strnstr` - localiza uma substring em uma string, onde o comprimento é limitado.
- `ft_strcmp` - compara duas strings.
- `ft_strncmp` - compara os primeiros n caracteres de duas strings.
- `ft_strlcpy` - copia até n caracteres de uma string para outra, garantindo terminação nula.
- `ft_strlcat` - concatena strings garantindo terminação nula.

### Funções de conversão
- `ft_atoi` - converte uma string para um inteiro.
- `ft_itoa` - converte um inteiro para uma string.

### Funções de manipulação de memória
- `ft_memset` - preenche uma área de memória com um byte específico.
- `ft_memcpy` - copia n bytes de uma área de memória para outra.
- `ft_memccpy` - copia a memória até que o caractere seja encontrado.
- `ft_memmove` - copia n bytes de memória de uma área para outra.
- `ft_memchr` - procura um caractere em uma área de memória.
- `ft_memcmp` - compara duas áreas de memória.

### Funções extras
- `ft_bzero` - zera uma área de memória.
- `ft_calloc` - aloca memória e a inicializa com zero.
- `ft_strdup` - duplica uma string.

### Funções de listas encadeadas
- `ft_lstnew` - cria um novo elemento de lista.
- `ft_lstadd_front` - adiciona um elemento no início da lista.
- `ft_lstsize` - conta o número de elementos em uma lista.
- `ft_lstlast` - retorna o último elemento da lista.
- `ft_lstadd_back` - adiciona um elemento no final da lista.
- `ft_lstdelone` - exclui e libera um elemento da lista.
- `ft_lstclear` - exclui e libera a sequência da lista.
- `ft_lstiter` - aplica uma função a cada elemento da lista.
- `ft_lstmap` - aplica uma função a cada elemento da lista, criando uma nova lista com os resultados.

## Instalação
Para usar a `libft` em seus projetos, siga estes passos:

1. Clone o repositório:
   ```
   git clone https://github.com/renanbatista/libft.git
   ```
2. Compile a biblioteca usando `make`:
   ```
   cd libft
   make
   ```

## Como usar
Após a compilação, um arquivo `libft.a` será criado. Você deve linkar este arquivo com seus arquivos fonte quando compilar seus programas em C. Inclua o cabeçalho `libft.h` em seus arquivos fonte para usar as funções da biblioteca.

## Contribuições
Para contribuir com a `libft`, faça um fork do repositório, crie uma nova branch para sua funcionalidade ou correção, realize suas alterações e submeta um pull request para o branch principal.

## Observações
É importante notar que a organização do código, o limite de linhas por função, a não utilização de laços `for` e outras características específicas seguem as normas da 42 School de codificação. Essas regras foram rigorosamente aplicadas para garantir a conformidade com os padrões de codificação da escola, focando em funções modulares, legíveis e eficientes, mesmo que isso possa diferir das práticas comuns em outros contextos de desenvolvimento de software.

## Licença
Este projeto está licenciado sob a MIT License. Veja o arquivo `LICENSE` para mais detalhes.
