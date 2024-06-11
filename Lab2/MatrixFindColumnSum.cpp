#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define N 5

using namespace std;

// �㭪�� ��� ��宦����� �㬬 ����⮢ ������� �⮫�� ������
void findColumnSums(float matrix[N][N], float columnSums[N]) {
    for (int j = 0; j < N; j++) {
        columnSums[j] = 0;
        for (int i = 0; i < N; i++) {
            columnSums[j] += matrix[i][j];
        }
    }
}

int main() {
    float m[N][N];
    float columnSums[N];
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

    // ��宦����� �㬬 ����⮢ ������� �⮫�� ������
    findColumnSums(m, columnSums);

    // �뢮� �㬬 �⮫�殢 ������
    for (j = 0; j < N; j++) {
        cout << "�㬬� ����⮢ �⮫�� " << j + 1 << ": " << columnSums[j] << endl;
    }

    return 0;
}
