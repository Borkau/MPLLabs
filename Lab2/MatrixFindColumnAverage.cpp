#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define N 5

using namespace std;

// �㭪�� ��� ��宦����� �।����䬥��᪮�� ���祭�� ����⮢ ������� �⮫�� ������
void findColumnAverages(float matrix[N][N], float columnAverages[N]) {
    for (int j = 0; j < N; j++) {
        float sum = 0.0;
        for (int i = 0; i < N; i++) {
            sum += matrix[i][j];
        }
        columnAverages[j] = sum / N;
    }
}

int main() {
    float m[N][N];
    float columnAverages[N];
    int i, j;

    // ���樠������ ������� ��砩��� �ᥫ
    srand(static_cast<unsigned int>(time(0)));

    // ���������� ������ ��砩�묨 �᫠��
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            m[i][j] = static_cast<float>(rand()) / RAND_MAX * 100; // ���砩��� �᫮ �� 0 �� 100
        }
    }

    // �뢮� ������
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cout << setw(8) << setprecision(5) << m[i][j];
        }
        cout << endl;
    }

    // ��宦����� �।����䬥��᪮�� ���祭�� ����⮢ ������� �⮫�� ������
    findColumnAverages(m, columnAverages);

    // �뢮� �।����䬥��᪮�� ���祭�� �⮫�殢 ������
    for (j = 0; j < N; j++) {
        cout << "�।����䬥��᪮� ���祭�� � �⮫�� " << j + 1 << ": " << columnAverages[j] << endl;
    }

    return 0;
}
