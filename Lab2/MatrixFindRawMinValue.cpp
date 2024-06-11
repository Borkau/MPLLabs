#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define N 5

using namespace std;

// �㭪�� ��� ��宦����� �������쭮�� ���祭�� � ������ ��ப� ������
void findRowMins(float matrix[N][N], float rowMins[N]) {
    for (int i = 0; i < N; i++) {
        rowMins[i] = matrix[i][0];
        for (int j = 1; j < N; j++) {
            if (matrix[i][j] < rowMins[i]) {
                rowMins[i] = matrix[i][j];
            }
        }
    }
}

int main() {
    float m[N][N];
    float rowMins[N];
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

    // ��宦����� ���������� ���祭�� � ������ ��ப� ������
    findRowMins(m, rowMins);

    // �뢮� ���������� ���祭�� ��ப ������
    for (i = 0; i < N; i++) {
        cout << "�������쭮� ���祭�� � ��ப� " << i + 1 << ": " << rowMins[i] << endl;
    }

    return 0;
}
