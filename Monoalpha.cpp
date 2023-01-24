/* A CPP PROGRAM ON MONOALPHA CIPHER  SUBSTITUTION MAPPING METHOD */

/* This program will also encrypt the text into Special symbols also */

#include<iostream>
#include <string>
using namespace std;

int main() {
    // Input message
    cout << "Enter the message to be encrypted: ";
    string message;
    getline(cin, message);

    // Encrypt message
    string encrypted_message = "";
    for (char c : message) {
        // Replace each letter with a fixed letter
        switch (c) {
            case 'A': encrypted_message += 'X'; break;
            case 'B': encrypted_message += 'Y'; break;
            case 'C': encrypted_message += 'Z'; break;
            case 'D': encrypted_message += 'A'; break;
            case 'E': encrypted_message += 'B'; break;
            case 'F': encrypted_message += 'C'; break;
            case 'G': encrypted_message += 'D'; break;
            case 'H': encrypted_message += 'E'; break;
            case 'I': encrypted_message += 'F'; break;
            case 'J': encrypted_message += 'G'; break;
            case 'K': encrypted_message += 'H'; break;
            case 'L': encrypted_message += 'I'; break;
            case 'M': encrypted_message += 'J'; break;
            case 'N': encrypted_message += 'K'; break;
            case 'O': encrypted_message += 'L'; break;
            case 'P': encrypted_message += 'M'; break;
            case 'Q': encrypted_message += 'N'; break;
            case 'R': encrypted_message += 'O'; break;
            case 'S': encrypted_message += 'P'; break;
            case 'T': encrypted_message += 'Q'; break;
            case 'U': encrypted_message += 'R'; break;
            case 'V': encrypted_message += 'S'; break;
            case 'W': encrypted_message += 'T'; break;
            case 'X': encrypted_message += 'U'; break;
            case 'Y': encrypted_message += 'V'; break;
            case 'Z': encrypted_message += 'W'; break;
            case 'a': encrypted_message += '!'; break;
            case 'b': encrypted_message += '@'; break;
            case 'c': encrypted_message += '#'; break;
            case 'd': encrypted_message += '$'; break;
            case 'e': encrypted_message += '%'; break;
            case 'f': encrypted_message += '^'; break;
            case 'j': encrypted_message += '&'; break;
            case 'k': encrypted_message += '*'; break;
            case 'l': encrypted_message += '('; break;
            case 'm': encrypted_message += ')'; break;
            case 'n': encrypted_message += '_'; break;
            case 'o': encrypted_message += '-'; break;
            case 'p': encrypted_message += '+'; break;
            case 'q': encrypted_message += '='; break;
            case 'r': encrypted_message += '`'; break;
            case 's': encrypted_message += '~'; break;
            case 't': encrypted_message += '<'; break;
            case 'u': encrypted_message += '>'; break;
            case 'v': encrypted_message += '?'; break;
            case 'w': encrypted_message += '/'; break;
            case 'x': encrypted_message += '.'; break;
            case 'y': encrypted_message += ','; break;
            case 'z': encrypted_message += ':'; break;
            
            default: encrypted_message += c;
        }
    }

    // Output encrypted message
    cout << "Encrypted message: " << encrypted_message << endl;
 return 0;   
}
