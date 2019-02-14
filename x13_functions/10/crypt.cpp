#include <iostream>

using namespace std;

int main() {

    cout << "Enter a phrase to encrypt: ";
    string phrase;
    cin >> phrase;


    cout << "Enter a key for encryption: ";
    string key;
    cin >> key;

    char* crypt = new char[phrase.length()];

    for (int i = 0; i < phrase.length(); i++) {
        crypt[i] = phrase[i]^key[i % key.length()];
    } 

    cout << crypt << endl;

    delete[] crypt;

}