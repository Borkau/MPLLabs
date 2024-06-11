#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define N 5

using namespace std;

// �㭪�� ��� ��宦����� �����㬠 � ���孥��㣮�쭮� ��� ������
float findMinUpperTriangle(float matrix[N][N]) {
    float minVal = matrix[0][0];
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) { // ����� �������� �� �᫮��� j >= i
            if (matrix[i][j] < minVal) {
                minVal = matrix[i][j];
            }
        }
    }
    return minVal;
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

    // ��宦����� � �뢮� �����㬠 � ���孥��㣮�쭮� ��� ������
    float minVal = findMinUpperTriangle(m);
    cout << "�����㬠 � ���孥��㣮�쭮� ��� ������: " << minVal << endl;

    return 0;
}
