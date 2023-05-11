# Lista de Exercícios de Algoritmos – 1º semestre 2023

Os códigos dos programas devem ser salvos em um arquivo de texto (Word, Bloco de Notas etc.) e esse arquivo deve ser compactado, renomeado para o nome do aluno (obrigatoriamente) e postado na atividade na plataforma Teams.

## Básicos

1) Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras.

2) A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos) e quanto deve guardar numa conta poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos para o dono. Com base nesses fatos, faça um algoritmo para ler as quantidades de pães e de broas e depois calcular os dados solicitados.

3) Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande. Cada uma sendo vendida, respectivamente, por 10, 12 e 15 reais. Construa um algoritmo em que o usuário forneça a quantidade de camisetas pequenas, médias e grandes referentes a uma venda e a máquina informe quanto será o valor arrecadado.

4) Criar um programa que informe a quantidade total de calorias de uma refeição a partir da escolha do usuário, que deverá informar o prato, a sobremesa e a bebida. (Veja a tabela a seguir.)

    |PRATO             |SOBREMESA              |BEBIDA                 |
    |:----------------:|:---------------------:|:---------------------:|
    |Vegetariano 180cal|Abacaxi 75cal          |Chá 20cal              |
    |Peixe 230cal      |Sorvete Diet 110cal    |Suco de Laranja 70cal  |
    |Frango 250cal     |Mousse Diet 170cal     |Suco de Melão 100cal   |
    |Carne 350cal      |Mousse chocolate 200cal|Refrigerante Diet 65cal|

5) Criar um programa que leia o destino do passageiro, se a viagem inclui retorno (ida e volta) e informe o preço da passagem conforme a tabela a seguir.

    |DESTINO            |IDA      |IDA E VOLTA|
    |:-----------------:|:-------:|:---------:|
    |Região Norte       |R$ 500,00|R$ 900,00  |
    |Região Nordeste    |R$ 350,00|R$ 650,00  |
    |Região Centro-Oeste|R$ 350,00|R$ 600,00  |
    |Região Sul         |R$ 300,00|R$ 550,00  |

6) Criar um programa que a partir de idade e peso do paciente calcule a dosagem de determinado medicamento e imprima a receita informando quantas gotas do medicamento o paciente deve tomar por dose. Considere que o medicamento em questão possui 500mg por ml e que cada ml corresponde a 20 gotas.

    * Adultos ou adolescentes desde 12 anos, inclusive, se tiverem peso igual ou acima de 60 quilos devem tomar 1000mg; com peso abaixo de 60 quilos devem tomar 875mg

    - Para crianças e adolescentes abaixo de 12 anos, a dosagem é calculada pelo peso corpóreo conforme a tabela a seguir:

        |PESO          |DOSAGEM|
        |:------------:|:-----:|
        |5 kg a 9 kg   |125mg  |
        |9,1 kg a 16 kg|250mg  |
        |16,1kg a 24kg |375mg  |
        |24.1kg a 30kg |500mg  |
        |acima de 30kg |750mg  |

## Estruturas de Repetição

7) A série de Fibonacci é uma sequência de termos que tem como os 2 primeiros termos, respectivamente, os números 0 e 1. A partir daí, os demais termos são formados seguindo uma certa regra. A série de Fibonacci pode ser vista a seguir:

    0 1 1 2 3 5 8 13 21...

    Desenvolva um programa que calcule a série Fibonacci.

8) Escrever um programa que calcule e apresente o somatório do número de grãos de trigo que se pode obter em um tabuleiro de xadrez obedecendo a seguinte regra: colocar um grão de trigo no primeiro quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro coloca-se um grão, no segundo quadro coloca-se dois grãos (neste momento tem-se três grãos), no terceiro coloca-se quatro grãos.Repetir até atingir o sexagésimo quarto quadro. (Este exercício foi baseado em uma situação do capítulo 16 do livro “O Homem que calculava” de Malba Tahan.)

## Vetores e Matrizes

9) Seja A e B dois vetores contendo N elementos inteiros. Fazer um programa para:

    1. ler A e B.

    2. Calcular a soma dos elementos de A.

    3. Calcular a soma dos elementos de B.

    4. Obter o vetor C, que é a soma dos vetores A e B.

    5. Obter o vetor D, subtraindo B de A.

    6. Obter o produto escalar de A por B, isto é, A[0]\*B[0] + A[1]\*B[1] + … + A[N-1]\*B[N-1].

10) Ordenar, de modo crescente, um vetor com n elementos solicitados ao usuário.

11) Leia uma matriz 10×10 e escreva a localização (linha e a coluna) do maior valor.

12) Numa enfermaria existem quatro camas (cama 1, cama 2, cama 3 e cama 4) onde se encontram 4 pacientes a quem de hora a hora são medidas as pulsações ao longo de um dia (24 leituras do valor da pulsação para cada paciente). Desenvolva um algoritmo capaz de:

    1. Proceder à leitura e armazenamento numa matriz de dimensão 24x4 dos valores das pulsações dos 4 pacientes ao longo das 24 horas de um dia.

    2. Calcular e apresentar a média das pulsações para cada um dos pacientes.

    3. Identificar a cama onde se encontra o paciente que apresentou maior valor médio das pulsações

13) Leia duas matrizes 4×4 e escreva uma terceira com os maiores elementos entre as primeiras

## Funções

14) Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3\*π\*r^3).

15) Faça um algoritmo que preencha uma matriz de inteiros 3×3 com valores aleatórios entre -50 e 50 e, através de uma função, retorne quantas vezes aparece o número zero.

16) Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o valor lógico **Verdadeiro** caso o valor seja primo e **Falso** em caso contrário.

17) Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função deve retornar um valor booleano.