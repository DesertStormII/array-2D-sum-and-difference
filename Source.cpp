#include <iostream>

using namespace std;

int main()
{
    int arr1[4][4] = { {1, 1, 1, 1},
                      {2, 2, 2, 2},
                      {3, 3, 3, 3},
                      {4, 4, 4, 4} };

    int arr2[4][4] = { {5, 5, 5, 5},
                      { 6, 6, 6, 6},
                      {7, 7, 7, 7 },
                      {8, 8, 8, 8} };
    int arr3[4][4];


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}