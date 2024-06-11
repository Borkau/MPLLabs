#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define N 5

using namespace std;

// �㭪�� ��� ��宦����� ���ᨬ� �� ����⥯����� ��������� ������
float findMinAntiDiagonal(float matrix[N][N]) {
    float maxVal = matrix[0][N-1];
    for (int i = 1; i < N; i++) {
        if (matrix[i][N-1-i] > maxVal) {
            maxVal = matrix[i][N-1-i];
        }
    }
    return maxVal;
}

int main() {
    float m[N][N];
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

    // ��宦����� � �뢮� ���ᨬ� �� ����⥯����� ��������� ������
    float maxVal = findMinAntiDiagonal(m);
    cout << "���ᨬ� �� ����⥯����� ��������� ������: " << maxVal << endl;

    return 0;
}
