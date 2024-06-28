# Fibonacci

F(n)=F(n−1)+F(n−2)

#### Makefile 

- CC define o compilador a ser utilizado, que neste caso é o gcc.
- CFLAGS define as opções de compilação, onde -Wall ativa todas as mensagens de aviso para ajudar a detectar possíveis problemas no código.
- All é o alvo padrão que será executado quando make for chamado sem argumentos. Ele especifica que o alvo programa deve ser construído.
- programa alvo define que o executável programa depende dos arquivos objeto main.o e fib.o.
  

A linha de comando abaixo usa $(CC) (gcc) e $(CFLAGS) (-Wall) para compilar o programa.
$@ representa o nome do alvo (programa) e $^ representa todas as dependências (main.o fib.o).


 main é o alvo define que main.o depende de main.c e fib.h.
 A linha de comando compila main.c em um arquivo objeto (-c), onde $< representa o primeiro pré-requisito (main.c).
- fib.o é o alvo define que fib.o depende de fib.c e fib.h.


 A linha de comando compila fib.c em um arquivo objeto (-c), onde $< representa o primeiro pré-requisito (fib.c).
- clean é o alvo define a ação de limpeza, removendo todos os arquivos objeto (*.o) e o executável (programa).


O comando rm -f é usado para remover os arquivos sem pedir confirmação.

## fib.c
- fibonacci:


Esta função calcula o enésimo número da sequência de Fibonacci usando recursão.
Se n é 1, retorna 0 (primeiro número da sequência).
Se n é 2, retorna 1 (segundo número da sequência).
Para qualquer outro valor de n, retorna a soma dos dois números anteriores na sequência (fibonacci(n-1) + fibonacci(n-2)).
- sequencia:


Esta função imprime a sequência de Fibonacci até a enésima posição.
A função sequencia agora não retorna nenhum valor (void).
O laço for percorre de 1 até n e imprime cada número da sequência calculado pela função fibonacci.

## fib.h
- Declaraçoes das funções 

## main.c 

- Bibliotecas 
 

stdio.h e fib.h

- Verificação de valor
- Cálculo
- Resultado
- Usuário
- Sequência
  



