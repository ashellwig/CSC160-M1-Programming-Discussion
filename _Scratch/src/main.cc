//===-- main.cc - main program definition -----------------------*- C++ -*-===//
//===----------------------------------------------------------------------===//
///
/// \file
/// This file contains the main function to run the program.
///
//===----------------------------------------------------------------------===//

#include <iostream>

using namespace std;

/**
 * \brief Prompts the user to press <RET> to continue running the program.
 *
 * \return int Exit code.
 */
int pauseprompt(); // Prototype
int pauseprompt() {
  std::cout << "Press enter to continue..." << '\n';
  std::cin.ignore();

  return 0;
}

int main() {
  // Declaring Variables
  double cartonMaxVolume =
      0.00;                   /** Maximum amount of milk per carton in liters */
  double cartonProfit = 0.00; /** Profit from one carton of milk */
  double literCost = 0.00;    /** Cost of producing one liter of milk */
  double totalMilkProduced = 0.00; /** Amount of liters of milk produced */
  double totalCost = 0.00;         /** Cost of producing all of the milk */
  double totalProfit = 0.00;       /** Total profit earned */
  int numberOfCartonsNeeded =
      0; // Cartons needed to hold amount of milk produced

  // Assigning values to variables
  cartonMaxVolume = 3.78000;
  cartonProfit = 0.27000;
  literCost = 0.38;

  // Prompting user to enter amount of milk produced
  cout << "Please enter the total amount of milk produced in the morning in "
          "liters (L): ";
  cin >> totalMilkProduced;

  // Multiply the cost of milk with the number of cartons for total cost.
  totalCost = literCost * totalMilkProduced;

  // Calculating total cartons produced
  numberOfCartonsNeeded = static_cast<int>(totalMilkProduced / cartonMaxVolume);

  // Calculating total profit
  totalProfit = static_cast<double>(cartonProfit * numberOfCartonsNeeded);

  // Number of milk cartons needed to hold the milk
  cout << "You will need " << numberOfCartonsNeeded
       << " cartons to hold the milk you have produced." << '\n';

  // Cost of production
  cout << "Cost of producing " << totalMilkProduced << "L of milk: $"
       << totalCost << '\n';

  // Profit
  cout << "Profit from producing " << totalMilkProduced << " ("
       << numberOfCartonsNeeded << " cartons) of milk: $" << totalProfit
       << endl;

  // "Press enter to continue"
  pauseprompt(); // `system("pause")` does not work on Linux.

  return 0;
}
