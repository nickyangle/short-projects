#include <iostream>
#include <string>
#include "Enrollment.h"

using std::cout;
using std::endl;
using std::string;

int main() {
  Enrollment e;
  cout << "Reading students1.txt ..." << endl;
  e.waitlist("students1.txt");
  cout << "Enrolling students ..." << endl;
  e.enroll(); // This should print the following:
/*
1. Jim Jumbograd
2. Bob Babargrad
3. Tommy Titanunder
4. Tina Tuskerunder
5. Dottie Dumbounder
*/
  cout << "Enrolling students ..." << endl;
  e.enroll(); // should not print any students

  cout << "Reading students2.txt ..." << endl;
  e.waitlist("students2.txt");
  cout << "Reading students3.txt ..." << endl;
  e.waitlist("students3.txt");
  cout << "Enrolling students ..." << endl;
  e.enroll(); // This should print the following:
/*
1. Janet Jumbograd
2. Harry Hathigrad
3. Hilary Hathigrad
4. Trinh Titanunder
5. Titania Tuskerunder
6. Mason Mahmudunder
7. Talia Titanunder
8. Hannah Hannaunder
9. Lin Wangunder
*/
  cout << "Enrolling students ..." << endl;
  e.enroll(); // should not print any students
}
