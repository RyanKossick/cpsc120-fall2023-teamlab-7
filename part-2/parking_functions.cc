// Monica soliman
// msoliman14@csu.fullerton.edu
// @monica-ss1
// Partners: @ryankossick

#include "parking_functions.h"

bool CanParkOnAsh(const std::string& day, int hour) {
  // TODO: Write an if statement that returns true when parking is allowed on
  // Ash Street, or false otherwise.
  // HINT: The if statement needs a compound Boolean expression with multiple
  // && operators.
 if (day == "wed" && hour >= 10 && hour < 12) {
    return false;
  } else {
    return true;
  }
}
bool CanParkOnBeech(const std::string& day, int hour) {
  // TODO: Write an if statement that returns true when parking is allowed on
  // Beech Street, or false otherwise.
if (day == "fri" && hour >= 8 && hour < 12) {
    return false;
  } else {
    return true;
  }
}
bool CanParkOnCedar(const std::string& day, int hour) {
  // TODO: Write an if statement that returns true when parking is allowed on
  // Cedar Street, or false otherwise.
   if ((hour >= 19 || hour < 7) || (day == "tue" && (hour >= 8 && hour < 10))) {
    return false;
  } else {
    return true;
  }
}
bool CanParkOnDate(const std::string& day, int hour, int min) {
  // TODO: Write an if statement that returns true when parking is allowed on
  // Date Street, or false otherwise.
if ((day != "sat" && day != "sun") && ((hour == 6 && min >= 30) || (hour > 6 && hour < 16))) {
    return false;
  } else {
    return true;
  }
}
bool CanParkOnElm(const std::string& day, int hour) {
  // TODO: Write an if statement that returns true when parking is allowed on
  // Elm Street, or false otherwise.
  if (((day == "mon" || day == "thu" || day == "wed") && (hour >= 8 && hour < 20)) ||
      (day == "fri" && (hour >= 8 && hour < 17)) ||
      (day == "tue")) {
    return false;
  } else {
    return true;
  }
}
