//===-- main.cc - main program definition -----------------------*- C++ -*-===//
//===----------------------------------------------------------------------===//
///
/// \file
/// This file contains the main function to run the program.
///
//===----------------------------------------------------------------------===//

#include "../include/general_functions.hh"
#include <iostream>

using namespace std;

int main()
{
  cout << "Hello World!" << endl;

  general_functions::pauseprompt(); // `system("pause")` does not work on Linux.

  return 0;
}
