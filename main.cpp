#include <iostream>
#include <cstring>
#include "cipher.h"

using namespace std;

int main() {
  char message[] = "ISENTANATTENDANCEREPORTFORECEB";
  int cipher[strlen(message)] = {0};
  
  keygen(cipher, strlen(message));
  
  cout << "Original Message: " << message << endl;
  
  coder(message, cipher, strlen(message));

  cout << "Coded Message: " << message << endl;

  decoder(message, cipher, strlen(message));

  cout << "Decoded Message: " << message << endl;
  
  return 0;
}
