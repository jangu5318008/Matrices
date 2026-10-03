#include 'Matrices.h'

using namespace std;

namespace Matrices {

            ///Construct a matrix of the specified size.
            ///Initialize each element to 0.
            Matrix::Matrix(int _rows, int _cols) {
                rows = _rows;
                cols = _cols; 
                a.resize(rows); 
                for (int i = 0; i < rows; i++) {
                   //(newSize, desiredValue) 
                   a[i].resize(cols, 0.0);
                    
                }
 
            }

            ///************************************
            ///inline accessors / mutators, these are done:

            ///Read element at row i, column j
            ///usage:  double x = a(i,j);
            const double& Matrix::operator()(int i, int j) const {
                return a.at(i).at(j);
            }

            ///Assign element at row i, column j
            ///usage:  a(i,j) = x;
            double& Matrix::operator()(int i, int j) {
                //return a[i][j];
                return a.at(i).at(j);
            }


            int Matrix::getRows() const {
                return rows;
            }

            int Matrix::getCols() const{
                return cols;
            }
            ///************************************






    ///Add each corresponding element.
    ///usage:  c = a + b;
    Matrix operator+(const Matrix& a, const Matrix& b) {
       //////GIGA FIXME///////
        Matrix c(a.getRows(), a.getCols());
            if (a.getRows() != b.getRows() || a.getCols() != b.getCols()) { 
                throw runtime_error("Error: dimensions must agree");
            }
            for (int i = 0; i < a.getRows(); i++) {
                for (int j = 0; j < a.getCols(); j++) {
                    c(i, j) = a(i, j) + b(i, j);

                }
            }
            return c;
       } 


    ///Matrix multiply.  See description.
    ///usage:  c = a * b;
    Matrix operator*(const Matrix& a, const Matrix& b) {

    }

    ///Matrix comparison.  See description.
    ///usage:  a == b
    bool operator==(const Matrix& a, const Matrix& b) {
        if (a.getRows() != b.getRows() || a.getCols() != b.getCols()) {
            return false;
        }
            for (int i = 0; i < a.getRows(); i++) {
                for (int j = 0; j < a.getCols(); j++) {
                    if (abs(a(i,j) - b(i,j)) < 0.001) {
                        continue;
                    }
                    else {
                        return false;
                    }
                }
            }
            return true;
        }


    ///Matrix comparison.  See description.
    ///usage:  a != b
    bool operator!=(const Matrix& a, const Matrix& b) {
        ////uses new == to compare/////
        return !(a == b); 
    }

    ///Output matrix.
    ///Separate columns by ' ' and rows by '\n'
    ostream& operator<<(ostream& os, const Matrix& a) {
        for () {
            for () {


            }

        }
    }

    void Matrix::print(Matrix print) {

    }

}