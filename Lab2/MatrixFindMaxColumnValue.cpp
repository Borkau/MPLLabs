#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define N 5

using namespace std;

// �㭪�� ��� ��宦����� ���ᨬ��쭮�� ���祭�� � ������ �⮫�� ������
void findColumnMax(float matrix[N][N], float columnMax[N]) {
    for (int j = 0; j < N; j++) {
        columnMax[j] = matrix[0][j];
        for (int i = 1; i < N; i++) {
            if (matrix[i][j] > columnMax[j]) {
                columnMax[j] = matrix[i][j];
            }
        }
    }
}

int main() {
    float m[N][N];
    float columnMax[N];
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

    // ��宦����� ���ᨬ����� ���祭�� � ������ �⮫�� ������
    findColumnMax(m, columnMax);

    // �뢮� ���ᨬ����� ���祭�� �⮫�殢 ������
    for (j = 0; j < N; j++) {
        cout << "���ᨬ��쭮� ���祭�� � �⮫�� " << j + 1 << ": " << columnMax[j] << endl;
    }

    return 0;
}
