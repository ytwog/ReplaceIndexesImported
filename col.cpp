#include "col.h"

double** changeCol(double **_arr, int Col1, int Col2, int N)
{
    for(int i = 0; i < N; i++)
    {
        int temp = _arr[i][Col1];
        _arr[i][Col1] = _arr[i][Col2];
        _arr[i][Col2] = temp;
    }
    return _arr;
}
