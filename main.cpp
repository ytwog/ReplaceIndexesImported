#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include "row.h"
#include "col.h"
using namespace std;


int main()
{
    setlocale(LC_ALL,"Russian");
    int N = 0;
    bool started = false;
    int max1 = 0, maxRow = 0, maxCol = 0;
    double **arr = NULL;

    cout << "Введите N\n";
    cin  >> N;
    cout << "Введите массив\n";

    arr = new double *[N];
    for(int i = 0; i < N; i++)
    {
        arr[i] = new double[N];
        for(int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
            if((started == false) || (max1 < arr[i][j]))
            {
                started = true;
                max1 = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    arr = changeRow(arr, maxRow, 0);
    arr = changeCol(arr, maxCol, 0, N);
    cout << "Полученный массив\n";
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
