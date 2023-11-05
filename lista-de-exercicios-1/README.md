# Lista de Exercícios de Algoritmos – 1º semestre 2023

Os códigos dos programas devem ser salvos em um arquivo de texto (Word, Bloco de Notas etc.) e esse arquivo deve ser compactado, renomeado para o nome do aluno (obrigatoriamente) e postado na atividade na plataforma Teams.

## Básicos

1. Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras.

    ```c++
    #include <iostream>
    using namespace std;
    int main() {
        int input;

        cout << "Quantos cavalos foram comprados para o haras? ";
        cin >> input;

        cout << "Serão necessárias " << input * 4 << " ferraduras" << endl;

        system("pause");
        return 0;
    }
    ```

2. A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos) e quanto deve guardar numa conta poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos para o dono. Com base nesses fatos, faça um algoritmo para ler as quantidades de pães e de broas e depois calcular os dados solicitados.

    ```c++
    #include <iostream>
    using namespace std;
    int main() {
        int input;
        float montante = 0;

        cout << "Quantos pãezinhos foram vendidos? ";
        cin >> input;
        montante += input * 0.12;

        cout << "E quantas broas foram vendidas? ";
        cin >> input;
        montante += input * 1.5;

        cout << "Total arrecadado: R$ " << montante << endl;
        cout << "Você deve guardar na poupança R$ " << montante * 10/100 << endl;

        system("pause");
        return 0;
    }
    ```

3. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande. Cada uma sendo vendida, respectivamente, por 10, 12 e 15 reais. Construa um algoritmo em que o usuário forneça a quantidade de camisetas pequenas, médias e grandes referentes a uma venda e a máquina informe quanto será o valor arrecadado.

    ```c++
    #include <iostream>
    using namespace std;
    int main() {
        int input, montante = 0;

        cout << "Qtde. de camisetas P: ";
        cin >> input;
        montante += input * 10;

        cout << "Qtde. de camisetas M: ";
        cin >> input;
        montante += input * 12;

        cout << "Qtde. de camisetas G: ";
        cin >> input;
        montante += input * 15;

        cout << "Valor total: R$ " << montante << endl;

        system("pause");
        return 0;
    }
    ```

4. Criar um programa que informe a quantidade total de calorias de uma refeição a partir da escolha do usuário, que deverá informar o prato, a sobremesa e a bebida. (Veja a tabela a seguir.)

    |PRATO             |SOBREMESA              |BEBIDA                 |
    |:----------------:|:---------------------:|:---------------------:|
    |Vegetariano 180cal|Abacaxi 75cal          |Chá 20cal              |
    |Peixe 230cal      |Sorvete Diet 110cal    |Suco de Laranja 70cal  |
    |Frango 250cal     |Mousse Diet 170cal     |Suco de Melão 100cal   |
    |Carne 350cal      |Mousse chocolate 200cal|Refrigerante Diet 65cal|

    ```c++
    #include <iostream>
    using namespace std;
    int main() {
        int input, cal = 0;

        do {
            cout << "Escolha o prato:" << endl;
            cout << "1. Vegetariano" << endl;
            cout << "2. Peixe" << endl;
            cout << "3. Frango" << endl;
            cout << "4. Carne" << endl;
            cin >> input;
        }
        while(input != 1 && input != 2 && input != 3 && input != 4);

        switch(input) {
            case 1:
                cal += 180;
                break;
            case 2:
                cal += 230;
                break;
            case 3:
                cal += 250;
                break;
            case 4:
                cal += 350;
                break;
        }

        do {
            cout << "Escolha a sobremesa:" << endl;
            cout << "1. Abacaxi" << endl;
            cout << "2. Sorvete diet" << endl;
            cout << "3. Mousse diet" << endl;
            cout << "4. Mousse de chocolate" << endl;
            cin >> input;
        }
        while(input != 1 && input != 2 && input != 3 && input != 4);

        switch(input) {
            case 1:
                cal += 75;
                break;
            case 2:
                cal += 110;
                break;
            case 3:
                cal += 170;
                break;
            case 4:
                cal += 200;
                break;
        }

        do {
            cout << "Escolha a bebida:" << endl;
            cout << "1. Chá" << endl;
            cout << "2. Suco de laranja" << endl;
            cout << "3. Suco de melão" << endl;
            cout << "4. Refrigerante diet" << endl;
            cin >> input;
        }
        while(input != 1 && input != 2 && input != 3 && input != 4);

        switch(input) {
            case 1:
                cal += 20;
                break;
            case 2:
                cal += 70;
                break;
            case 3:
                cal += 100;
                break;
            case 4:
                cal += 65;
                break;
        }

        cout << "Total de calorias: " << cal << endl;

        system("pause");
        return 0;
    }
    ```

5. Criar um programa que leia o destino do passageiro, se a viagem inclui retorno (ida e volta) e informe o preço da passagem conforme a tabela a seguir.

    |DESTINO            |IDA      |IDA E VOLTA|
    |:-----------------:|:-------:|:---------:|
    |Região Norte       |R$ 500,00|R$ 900,00  |
    |Região Nordeste    |R$ 350,00|R$ 650,00  |
    |Região Centro-Oeste|R$ 350,00|R$ 600,00  |
    |Região Sul         |R$ 300,00|R$ 550,00  |

    ```c++
    #include <iostream>
    using namespace std;
    int main() {
        int destino, opcao, valor;

        do {
            cout << "Escolha o destino:" << endl;
            cout << "1. Norte" << endl;
            cout << "2. Nordeste" << endl;
            cout << "3. Centro-oeste" << endl;
            cout << "4. Sul" << endl;
            cin >> destino;
        }
        while(destino != 1 && destino != 2 && destino != 3 && destino != 4);

        do {
            cout << "Escolha uma das opções:" << endl;
            cout << "1. Somente ida" << endl;
            cout << "2. Ida e volta" << endl;
            cin >> opcao;
        }
        while(opcao != 1 && opcao != 2);

        switch(opcao) {
            case 1:
                switch(destino) {
                    case 1:
                        valor = 500;
                        break;
                    case 2:
                        valor = 350;
                        break;
                    case 3:
                        valor = 350;
                        break;
                    case 4:
                        valor = 300;
                        break;
                }
                break;
            case 2:
                switch(destino) {
                    case 1:
                        valor = 900;
                        break;
                    case 2:
                        valor = 650;
                        break;
                    case 3:
                        valor = 600;
                        break;
                    case 4:
                        valor = 550;
                        break;
                }
                break;
        }

        cout << "Valor da passagem: R$ " << valor << endl;

        system("pause");
        return 0;
    }
    ```

6. Criar um programa que a partir de idade e peso do paciente calcule a dosagem de determinado medicamento e imprima a receita informando quantas gotas do medicamento o paciente deve tomar por dose. Considere que o medicamento em questão possui 500mg por ml e que cada ml corresponde a 20 gotas.

    * Adultos ou adolescentes desde 12 anos, inclusive, se tiverem peso igual ou acima de 60 quilos devem tomar 1000mg; com peso abaixo de 60 quilos devem tomar 875mg

    * Para crianças e adolescentes abaixo de 12 anos, a dosagem é calculada pelo peso corpóreo conforme a tabela a seguir:

        |PESO          |DOSAGEM|
        |:------------:|:-----:|
        |5 kg a 9 kg   |125mg  |
        |9,1 kg a 16 kg|250mg  |
        |16,1kg a 24kg |375mg  |
        |24,1kg a 30kg |500mg  |
        |acima de 30kg |750mg  |

    ```c++
    #include <iostream>
    using namespace std;
    int main() {
        int idade, dosagem;
        float peso;

        cout << "Informe a idade do paciente em anos: ";
        cin >> idade;

        cout << "Informe o peso do paciente em kg: ";
        cin >> peso;

        if(idade >= 12) {
            if(peso >= 60) {
                dosagem = 1000;
            }
            else {
                dosagem = 875;
            }
        }
        else {
            if(peso < 5) {
                dosagem = 0;
            }
            else if(peso >= 5 && peso < 9.1) {
                dosagem = 125;
            }
            else if(peso >= 9.1 && peso < 16.1) {
                dosagem = 250;
            }
            else if(peso >= 16.1 && peso < 24.1) {
                dosagem = 375;
            }
            else if(peso >= 24.1 && peso <= 30) {
                dosagem = 500;
            }
            else if(peso > 30) {
                dosagem = 750;
            }
        }

        cout << "Receita: " << dosagem << "mg (" << dosagem * 20/500 << " gotas)" << endl;

        system("pause");
        return 0;
    }
    ```

## Estruturas de Repetição

7. A série de Fibonacci é uma sequência de termos que tem como os 2 primeiros termos, respectivamente, os números 0 e 1. A partir daí, os demais termos são formados seguindo uma certa regra. A série de Fibonacci pode ser vista a seguir:

    0 1 1 2 3 5 8 13 21...

    Desenvolva um programa que calcule a série Fibonacci.

    ```c++
    #include <iostream>
    #include <limits>
    using namespace std;
    int main() {
        long long a = 0, b = 1;

        while(LLONG_MAX - a > b) {
            cout << a << " ";
            a += b;
            swap(a, b);
        }

        system("pause");
        return 0;
    }
    ```

8. Escrever um programa que calcule e apresente o somatório do número de grãos de trigo que se pode obter em um tabuleiro de xadrez obedecendo a seguinte regra: colocar um grão de trigo no primeiro quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro coloca-se um grão, no segundo quadro coloca-se dois grãos (neste momento tem-se três grãos), no terceiro coloca-se quatro grãos.Repetir até atingir o sexagésimo quarto quadro. (Este exercício foi baseado em uma situação do capítulo 16 do livro “O Homem que calculava” de Malba Tahan.)

    ```c++
    #include <iostream>
    using namespace std;
    int main() {
        float somatorio = 0;

        for(int expoente = 0; expoente < 64; expoente++) {
            float produtorio = 1;
            for(int i = 0; i < expoente; i++) {
                produtorio *= 2;
            }
            somatorio += produtorio;
        }

        cout << somatorio << endl;
        system("pause");
        return 0;
    }
    ```

## Vetores e Matrizes

9. Seja A e B dois vetores contendo N elementos inteiros. Fazer um programa para:

    1. ler A e B.

    2. Calcular a soma dos elementos de A.

    3. Calcular a soma dos elementos de B.

    4. Obter o vetor C, que é a soma dos vetores A e B.

    5. Obter o vetor D, subtraindo B de A.

    6. Obter o produto escalar de A por B, isto é, A[0]\*B[0] + A[1]\*B[1] + … + A[N-1]\*B[N-1].

    ```c++
    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    using namespace std;
    int main() {
        srand(time(NULL));
        int N = rand() % 7 + 3;
        int A[N], B[N], C[N], D[N], E[N];

        for(int i = 0; i < N; i++) {
            A[i] = rand() % 100;
            B[i] = rand() % 100;
            C[i] = A[i] + B[i];
            D[i] = A[i] - B[i];
            E[i] = A[i] * B[i];
        }

        cout << "A =\t";
        for(int i = 0; i < N; i++) {
            cout << A[i] << "\t";
        }
        cout << endl;

        cout << "B =\t";
        for(int i = 0; i < N; i++) {
            cout << B[i] << "\t";
        }
        cout << endl;

        cout << "C =\t";
        for(int i = 0; i < N; i++) {
            cout << C[i] << "\t";
        }
        cout << endl;

        cout << "D =\t";
        for(int i = 0; i < N; i++) {
            cout << D[i] << "\t";
        }
        cout << endl;

        cout << "E =\t";
        for(int i = 0; i < N; i++) {
            cout << E[i] << "\t";
        }
        cout << endl;

        system("pause");
        return 0;
    }
    ```

10. Ordenar, de modo crescente, um vetor com n elementos solicitados ao usuário.

    ```c++
    #include <iostream>
    using namespace std;
    int main() {
        int n;

        cout << "Defina o número de elementos: ";
        cin >> n;
        int vetor[n];

        for(int i = 0; i < n; i++) {
            cout << "Defina o valor do " << i+1 << "º elemento: ";
            cin >> vetor[i];
        }

        for(int i = 0; i < n - 1; i++) {
            int posicao_do_menor = i;
            for(int j = i + 1; j < n; j++) {
                if(vetor[j] < vetor[posicao_do_menor]) {
                    posicao_do_menor = j;
                }
            }
            if(posicao_do_menor != i) {
                swap(vetor[i], vetor[posicao_do_menor]);
            }
        }

        cout << "Elementos ordenados: ";
        for(int i = 0; i < n; i++) {
            cout << vetor[i] << " ";
        }

        cout << endl;
        system("pause");
        return 0;
    }
    ```

11. Leia uma matriz 10×10 e escreva a localização (linha e a coluna) do maior valor.

12. Numa enfermaria existem quatro camas (cama 1, cama 2, cama 3 e cama 4) onde se encontram 4 pacientes a quem de hora a hora são medidas as pulsações ao longo de um dia (24 leituras do valor da pulsação para cada paciente). Desenvolva um algoritmo capaz de:

    1. Proceder à leitura e armazenamento numa matriz de dimensão 24x4 dos valores das pulsações dos 4 pacientes ao longo das 24 horas de um dia.

    2. Calcular e apresentar a média das pulsações para cada um dos pacientes.

    3. Identificar a cama onde se encontra o paciente que apresentou maior valor médio das pulsações

13. Leia duas matrizes 4×4 e escreva uma terceira com os maiores elementos entre as primeiras

## Funções

14. Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3\*π\*r^3).

15. Faça um algoritmo que preencha uma matriz de inteiros 3×3 com valores aleatórios entre -50 e 50 e, através de uma função, retorne quantas vezes aparece o número zero.

16. Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o valor lógico **Verdadeiro** caso o valor seja primo e **Falso** em caso contrário.

17. Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função deve retornar um valor booleano.
