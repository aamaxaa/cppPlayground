
#include "Matrix.hpp"

using namespace std;


int main(){
    Matrix matrix(4,5);
    Matrix* matptr = &matrix;
    matptr->printMat();
    return 0;
}

// make matrix a new file and create an hpp 你  