#include <stdio.h>

void strassen(int m1[2][2], int m2[2][2], int result[2][2]) {
    int m100 = m1[0][0];
    int m101 = m1[0][1];
    int m110 = m1[1][0];
    int m111 = m1[1][1];

    int m200 = m2[0][0];
    int m201 = m2[0][1];
    int m210 = m2[1][0];
    int m211 = m2[1][1];

    int m30 = m100 + m111;
    int m31 = m101 - m111;
    int m32 = m110 + m111;
    int m33 = m100 - m101 + m110;
    int m34 = m100 + m110;
    int m35 = m101 - m110 + m111;
    int m36 = m100 - m111;
    int m37 = m101 + m110;

    int p10 = m30 * m200 + m31 * m210;
    int p11 = m30 * m201 + m31 * m211;
    int p12 = m32 * m200 + m33 * m210;
    int p13 = m32 * m201 + m33 * m211;
    int p20 = m34 * m200 + m36 * m210;
    int p21 = m34 * m201 + m36 * m211;
    int p22 = m35 * m200 + m37 * m210;
    int p23 = m35 * m201 + m37 * m211;

    result[0][0] = p10 + p13 - p20 + p23;
    result[0][1] = p11 + p21;
    result[1][0] = p12 + p22;
    result[1][1] = p10 - p12 + p13 - p23;
}

int main() {
    int m1[2][2], m2[2][2], result[2][2];

    printf("Enter the first matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter the second matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    strassen(m1, m2, result);

    printf("Product achieved using Strassen's algorithm:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
