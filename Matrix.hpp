#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <iostream>
#include <vector>


using namespace std;


class Matrix{

    // class Matrix 2D array of int 
    // constructor will have row and col
    // empty 2D array of the given size with 0

    private: 
    vector<vector<int>> matrix;
    int r;
    int c;

    
    //write a method that prints out what is inside the 2D array
    public:
    void printMat() const;

    Matrix(int row, int col);

};

#endif