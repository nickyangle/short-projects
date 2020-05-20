// Nicolette Angle
#include <iostream>
#include <fstream>
#include <vector>
#include "Enrollment.h"

// gets information from the file to store into a vector called my_waitlist
void Enrollment::waitlist (std::string filename) {
  std::ifstream myfile;
  myfile.open(filename);
  studentsOnWaitlist temp_waitlist;
    while (myfile >> temp_waitlist.gradOrUndergrad) {
      myfile >> temp_waitlist.firstname >> temp_waitlist.lastname;
      my_waitlist.push_back( temp_waitlist );
    }
    myfile.close();
}

// this for loop finds all of the graduate students and stores them in the list vector first
void Enrollment::enroll() {
  for ( int i = 0; i < my_waitlist.size(); i++ ) {
    if ( my_waitlist.at(i).gradOrUndergrad == "G:") {
      list.push_back( my_waitlist.at(i) );
    }
  }

// this function finds all the undergrads and stores them into the list vector second
  for ( int i = 0; i < my_waitlist.size(); i++ ) {
    if ( my_waitlist.at(i).gradOrUndergrad == "U:" ) {
      list.push_back( my_waitlist.at(i) );
      }
  }

  //
  for ( int i = 0; i < my_waitlist.size(); i++) {
      std::cout << i+1 << ". " << list. at(i).firstname << " " << list.at(i).lastname << std::endl;
  }
  // clears the vectors after they are printed out so it doesn't print duplicates
      my_waitlist.clear();
      list.clear();
}
