#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define N 5

using namespace std;

// �㭪�� ��� ��宦����� ���ᨬ��쭮�� ���祭�� � ������ ��ப� ������
void findrowsMax(float matrix[N][N], float rowsMax[N]) {
    for (int i = 0; i < N; i++) {
        rowsMax[i] = matrix[i][0];
        for (int j = 1; j < N; j++) {
            if (matrix[i][j] > rowsMax[i]) {
                rowsMax[i] = matrix[i][j];
            }
        }
    }
}

int main() {
    float m[N][N];
    float rowsMax[N];
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

    // ��宦����� ���ᨬ��쭮�� ���祭�� � ������ ��ப� ������
    findrowsMax(m, rowsMax);

    // �뢮� ���ᨬ��쭮�� ���祭�� ��ப ������
    for (i = 0; i < N; i++) {
        cout << "���ᨬ��쭮�� ���祭�� � ��ப� " << i + 1 << ": " << rowsMax[i] << endl;
    }

    return 0;
}
