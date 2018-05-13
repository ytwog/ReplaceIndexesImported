#include "row.h"

double** changeRow(double **_arr, int Row1, int Row2)
{
    double *temp = _arr[Row1];
    _arr[Row1] = _arr[Row2];
    _arr[Row2] = temp;
    return _arr;
}
