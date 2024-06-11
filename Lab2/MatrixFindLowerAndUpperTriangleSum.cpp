#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define N 5

using namespace std;

// �㭪�� ��� ��宦����� �㬬� ����⮢ �������㣮�쭮� ��� ������
float findLowerTriangleSum(float matrix[N][N]) {
    float sum = 0.0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) { // �᫮��� j <= i
            sum += matrix[i][j];
        }
    }
    return sum;
}

// �㭪�� ��� ��宦����� �㬬� ����⮢ ���孥��㣮�쭮� ��� ������
float findUpperTriangleSum(float matrix[N][N]) {
    float sum = 0.0;
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) { // �᫮��� j >= i
            sum += matrix[i][j];
        }
    }
    return sum;
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

    // ��宦����� �㬬� ����⮢ �������㣮�쭮� ��� ������
    float lowerSum = findLowerTriangleSum(m);
    cout << "�㬬� ����⮢ �������㣮�쭮� ��� ������: " << lowerSum << endl;

    // ��宦����� �㬬� ����⮢ ���孥��㣮�쭮� ��� ������
    float upperSum = findUpperTriangleSum(m);
    cout << "�㬬� ����⮢ ���孥��㣮�쭮� ��� ������: " << upperSum << endl;

    return 0;
}
