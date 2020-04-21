// Name: Arjun Vinod
// cipher.h
// A message encryption function that can code a message of all capital letters
// using a cipher

// Precondition:
//     - message: pointer to char array of message to be coded
//     - cipher: cipher of equal length of message used to code it
//     - len: length of message
// Postcondition: message is coded based on cipher
void coder(char* message, int* cipher, int len);

// Precondition:
//     - message: pointer to char array of message to be decoded
//     - cipher: cipher of equal length of message used to decode it
//     - len: length of message
// Postcondition: message is decoded based on cipher
void decoder(char* message, int* cipher, int len);

// Precondition:
//     - cipher: pointer to in array of appropriate length
//     - len: length of message to be coded with cipher
// Postcondition: cipher is filled with integer values of key
void keygen(int* cipher, int len);
