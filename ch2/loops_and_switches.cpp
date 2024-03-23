#include <iostream>

using namespace std;


bool accept_user_input() {
    int tries = 1;

    while (tries <4) {
        char answer;
        cout << "do u want to continue? (y/n)";
        cin >> answer;


        switch (answer) {
            case 'y':
                return true;
            case 'n':
                return false;
            default:
                cout << "retrying: " << tries << "\n";
                tries++;

        }
    }
    cout << "assuming no \n";
    return false;
}

int main() {

    bool answer;

    answer = accept_user_input();

    cout << "got answer: " << answer << "\n";

}