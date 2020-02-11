//===-- general_functions.h - global functions definitions =-----*- C++ -*-===//
//
// Module TODO:MODULENNUMBER Homework TODO:CHAPTERNUMBER
// Ashton Scott Hellwig
// CSC 160: Introduction to Programming (C++)
// TODO:DATE
//===----------------------------------------------------------------------===//
///
/// \file
/// This file contains global function definitions used to emulate
/// system-dependent Windows libraries.
///
//===----------------------------------------------------------------------===//

#include "../include/general_functions.hh"
#include <iostream>

/**
 * \brief Prompts the user to press <RET> to continue running the program.
 *
 * \return int Exit code.
 */
int general_functions::pauseprompt() {
  std::cout << "Press enter to continue..." << '\n';
  std::cin.ignore();

  return 0;
}
