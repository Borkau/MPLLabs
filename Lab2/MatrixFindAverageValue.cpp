#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#define N 5

using namespace std;

// �㭪�� ��� ��宦����� �।����䬥��᪮�� ���祭�� ����⮢ ������
float findAverage(float matrix[N][N]) {
    float sum = 0.0;
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sum += matrix[i][j];
            count++;
        }
    }
    return sum / count;
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

    // ��宦����� � �뢮� �।����䬥��᪮�� ���祭�� ����⮢ ������
    float average = findAverage(m);
    cout << "�।����䬥��᪮� ���祭�� ����⮢ ������: " << average << endl;

    return 0;
}
