#include <iostream>
#include <cmath>

using namespace std;

int Calculator(int n1, int n2);

int main() {
    string name;
    name = "Furkan";

    cout << "My Name is  " << name << endl;
    cout << "And I'm not " << pow(2,4) << " years old" << endl;

    /*
    int age = 15;
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string yourName;
    cout << "Enter your name: ";
    getline(cin, yourName);
    // A (bug) occurs ig? Program asks me for only age but name

    cout << "You are " << age << " years old!" << " And your name is: "<< yourName << endl;
    */

    int primeNumbers[] = {2,3,5,7};

    // Size of gives me the total size of the array in bytes
    // in this case it's total 4 elements * 4 bytes = 16 bytes
    cout << "Prime numbers are: ";
    for (int i = 0; i<sizeof(primeNumbers)/sizeof(primeNumbers[0]); i++) {
        cout << primeNumbers[i] << " ";
    }
    cout << endl;

    int result = Calculator(2,3);

    cout << "Result is: " << result << endl;

    int index = 7;
    do {
        cout << index++ << " ";
    }while(index <= 5);

    return 0;
}

int Calculator(int n1, int n2) {
    return n1 + n2;
}