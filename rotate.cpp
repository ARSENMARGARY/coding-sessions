#include <iostream>

void rotateMatrix(int mat[][3], int A)
{
    for (int x = 0; x < A / 2; x++) {
        for (int y = x; y < A - x - 1; y++) {
            int temp = mat[x][y];
            mat[x][y] = mat[y][A - 1 - x];
            mat[y][A - 1 - x] = mat[A - 1 - x][A - 1 - y];
            mat[A - 1 - x][A - 1 - y] = mat[A - 1 - y][x];
            mat[A - 1 - y][x] = temp;
        }
    }
}

int main()
{
    return 0;
}