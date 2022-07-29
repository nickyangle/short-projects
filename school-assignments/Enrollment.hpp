// Nicolette Angle
#include <iostream>
#include <fstream>
#include <vector>

struct Waitlist {
  char gradOrUndergrad_;
  std::string firstname_;
  std::string lastname_;
};

class Enrollment {
private:
std::vector <Waitlist> waitlist;
public:
  //accessors
  char gradOrUndergrad() { return gradOrUndergrad_;}
  std::string firstname() { return firstname_;}
  std::string lastname() { return lastname_;}
  //functions
Enrollment(): gradOrUndergrad(), firstname(), lastname() {}
void waitlist (std::string filename);
void enroll();

};
