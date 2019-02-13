// File: assignment.cpp
//
// Assignment is the action of copying the matrix into another, using operator=.
// Eigen resizes the matrix on the left-hand side automatically so that it matches
// the size of the matrix on the right-hand side.
//
#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

int main()
{
   MatrixXf a(2,2);
   std::cout << "a is of size " << a.rows() << "x" << a.cols() << std::endl;
   MatrixXf b(3,3);
   a = b;
   std::cout << "a is now of size " << a.rows() << "x" << a.cols() << std::endl;
   return 0;
}
