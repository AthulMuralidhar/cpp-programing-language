#include <iostream>
using namespace std;


void copier() {
    // get user input
    cout << "give me 4 inputs\n";
    
    char inputs[4];
    int i = 0;


    cout << "initalised value for i: "  << i << "\n";
    
    while (i<4) {
        char inp;
        cout << "please enter value:\n";

        cin >> inp;

        cout << "incmoing inp: " << inp << "\n";

        inputs[i] = inp;

        ++i;
    }

    for (auto i: inputs) {
        cout << i << " ";
    }
    cout << "\n";

    cout << std::endl;

    // copy the input and make a new array
}

int main() {
    copier();
}