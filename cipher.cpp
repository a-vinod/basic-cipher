#include <cstring>
#include "cipher.h"

using namespace std;

void coder(char* message, int* cipher, int len) { // Generates coded message
  // message: text to ints
  int message_digits[len] = {0};
  for (int i = 0; i < len; i++) {
    message_digits[i] = message[i] - 65;
  }

  // message_digits: decoded to coded
  for (int i = 0; i < len; i++) {
    message_digits[i] = (message_digits[i] + cipher[i])%26;
  }

  // message: coded ints to coded text
  for (int i = 0; i < len; i++) {
    message[i] = message_digits[i] + 65;
  }
}

void decoder(char* message, int* cipher, int len) { // Decodes coded message
  int message_digits[len] = {0};
  for (int i = 0; i < len ; i++) {
    message_digits[i] = message[i] - 65;
  }

  for (int i = 0; i < len; i++) {
    int diff = message_digits[i] - cipher[i];
    if (diff > 0) {
      message_digits[i] = diff%26;
    } else {
      message_digits[i] = (26+diff)%26;
    }
  }

  for (int i = 0; i < len; i++) {
    message[i] = message_digits[i] + 65;
  }
}

void keygen(int* cipher, int len) { // Generates cipher based on message length
  char key[] = "MYKEYBASEDCIPHER";
  
  for (int i = 0; i < len; i++) {
    cipher[i] = key[i%16] - 65;
  }
}
