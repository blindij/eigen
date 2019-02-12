// File: comma_init.cpp
//
// Showing the comma-initialization
//
#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

int main()
{
   Matrix3f m;
   m << 1,2,3,
     4,5,6,
     7,8,9;
   
   std::cout << m << std::endl;
   return 0;
}
