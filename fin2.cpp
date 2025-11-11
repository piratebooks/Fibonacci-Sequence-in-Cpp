#include <iostream>
using namespace std;

void fibonacci (int userin) {
    int index = 2, next;
    int a = 0; int b = 1;

    cout << a << " " << b << " ";
    while (index < userin) {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
        index++;
    }
    cout << endl << "Completed!!" << endl;
}

int main () {
    int input;
    cout <<  "Enter repetitions of the fibonacci sequence you need (int only): ";
    cin >> input;
    fibonacci (input);
return 0;
}
