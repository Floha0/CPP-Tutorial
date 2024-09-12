#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string name;
    name = "Furkan";

    cout << "My Name is  " << name << endl;
    cout << "And I'm not " << pow(2,4) << " years old" << endl;

    int age = 15;
    cin >> age;

    string yourName;
    getline(cin, yourName);
    // A (bug) occurs ig? Program asks me for only age but name

    cout << "You are " << age << " years old!" << " And your name is: "<< yourName << endl;

    return 0;
}
