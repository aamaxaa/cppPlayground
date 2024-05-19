#include "Matrix.hpp"

Matrix::Matrix(int row, int col)
: r{row},c{col},matrix{vector<vector<int>> (row, vector<int>(col, 0))}
{
        // matrix.resize(row, vector<int> (col, 0));
}
void Matrix::printMat() const
    {
        for (auto it = matrix.begin(); it != matrix.end(); it++) {
            for (auto it2 = it->begin(); it2 != it->end(); it2++){
                cout << *it2 << " ";
            }
            cout << endl;
        }
    };