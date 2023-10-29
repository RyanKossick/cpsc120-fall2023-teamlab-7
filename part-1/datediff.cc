// Monica soliman
// msoliman14@csu.fullerton.edu
// @monica-ss1
// Partners: @ryankossick

//
// Program to calculate the date between two Gregorian dates.
//

#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#include "datediff_functions.h"

// Main function - the entry point to our program
int main(int argc, char* argv[]) {
  // done: Convert argv into a std::vector<std::string> using the
  // pattern described in lecture. Name the std::vector<std::string>
  // arguments.

  // done: Check to make sure there are enough arguments provided on the
  // command line. If there are too few arguments, print the error message
  // "Please provide a starting date and an ending date. Exiting.\n"
  // and exit with a return code of 1.
  if (argc < 7) {
    std::cout
        << "Please provide a starting date and an ending date. Exiting.\n";
    return 1;
  }

  std::vector<std::string> arguments(argv, argv + argc);
  // done: Declare three integer variables and initialize them to zero.
  // Name the variables start_month, start_day, start_year.
  // done: For the std::string values at location 1, 2, and 3 in the
  // std::vector arguments, use std::stoi() to convert the string to
  // an integer.
  // Convert and assign the argument at location 1 to start_month.
  // Convert and assign the argument at location 2 to start_day.
  // Convert and assign the argument at location 3 to start_year.
  int start_month = std::stoi(arguments[1]);
  int start_day = std::stoi(arguments[2]);
  int start_year = std::stoi(arguments[3]);
  // done: Declare three integer variables and initialize them to zero.
  // Name the variables end_month, end_day, end_year.
  // done: For the std::string values at location 4, 5, and 6 in the
  // std::vector arguments, use std::stoi() to convert the string to
  // an integer.
  // Convert and assign the argument at location 4 to end_month.
  // Convert and assign the argument at location 5 to end_day.
  // Convert and assign the argument at location 6 to end_year.
  int end_month = std::stoi(arguments[4]);
  int end_day = std::stoi(arguments[5]);
  int end_year = std::stoi(arguments[6]);
  // done: Declare an integer variable namd number_days. Initialize the
  // variable to the return value of DateDifference(). Call DateDifference()
  // with the start_month, start_day, start_yuear, end_month, end_day, end_year.
  int number_days = DateDifference(start_month, start_day, start_year,
                                   end_month, end_day, end_year);
  // done: Using std::cout, print "The number of days between "
  // done: Use the function PrintDate() to print the start date
  // done: Using std::cout, print " and "
  // done: Use the function PrintDate() to print the end date
  // done: Using std::cout, print " is "

  // done: Using std::cout, print the variable named number_days
  // done: Using std::cout, print " days\n"
  std::cout << "The number of days between ";
  PrintDate(start_month, start_day, start_year);
  std::cout << " and ";
  PrintDate(end_month, end_day, end_year);
  std::cout << " is ";
  std::cout << number_days << " days\n";
  return 0;
}
