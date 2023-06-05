#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int matriz[24][4], bpmx24[4] = {0, 0, 0, 0}, aux = 0;

    for(int i = 0; i < 4; i++) {
        cout << "\nPaciente da cama " << i+1 << ':' << endl;
        for(int j = 0; j < 24; j++) {
            matriz[j][i] = rand() % 101 + 40; // de 40 a 140 bpm
            bpmx24[i] += matriz[j][i];
            if(j < 10) {
                cout << '0';
            }
            cout << j << "h\t" << matriz[j][i] << " bpm" << endl;
        }
    }

    cout.precision(0);
    cout << '\n';
    for(int i = 0; i < 4; i++) {
        cout << "Paciente da cama " << i+1 << ": média de " << fixed << (float) bpmx24[i] / 24 << " bpm" << endl;
        if(bpmx24[i] > bpmx24[aux]) {
            aux = i;
        }
    }

    cout << "\nO paciente da cama " << aux+1 << " apresentou a maior média de batimentos por minuto das últimas 24h\n" << endl;
    system("pause");

    return 0;
}