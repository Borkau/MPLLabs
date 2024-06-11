#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define N 5

using namespace std;

// �㭪�� ��� ��宦����� �㬬 ����⮢ ������ ��ப� ������
void findRowSums(float matrix[N][N], float rowSums[N]) {
    for (int i = 0; i < N; i++) {
        rowSums[i] = 0;
        for (int j = 0; j < N; j++) {
            rowSums[i] += matrix[i][j];
        }
    }
}

int main() {
    float m[N][N];
    float rowSums[N];
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

    // ��宦����� �㬬 ����⮢ ������ ��ப� ������
    findRowSums(m, rowSums);

    // �뢮� �㬬 ��ப ������
    for (i = 0; i < N; i++) {
        cout << "�㬬� ����⮢ ��ப� " << i + 1 << ": " << rowSums[i] << endl;
    }

    return 0;
}
