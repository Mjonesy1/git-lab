//Lab 8
//Makenna Jones

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

int displayMenu();
int getKey();
int encrypt(int key);
int decrypt();

int main(){
    int choice, key;
    key = 3: //default
    do{
        displayMenu();
        cin >> choice;
        if (choice == 1)
            key = getKey();
        }
        else if (choice == 2){
        encrypt(key);
        }
        else if (choice == 3){
        //call the decryption function
    }while(choice !=4);
    return 0;
}

int displayMenu(){
    cout << "Enter a 1 to give the key" << endl;
    cout << "Enter a 2 to encrypt" << endl;
    cout << "Enter a 3 to encrypt" << endl;
    cout << "Enter a 4 to exit" << endl;
    return 0;
}

int getKey(){
    int key;
    do{
        cout << "Enter a number between 1 and 10";
        cin >> key;
        if (key < 1 || 10 < key){
            cout << "Please enter a number between 1 and 10"
        }
    }while (key < 1 || 10 < key);
    cout << "The new key is " << key;
    return key;
}

int encrypt(int key){
    int key
    ifStream ifStream;
    ofstream ofstream;
    string inputfile;
    string outputfile;

    cout << "Enter file name";
    return 0;
}

int decrypt(){
    
}