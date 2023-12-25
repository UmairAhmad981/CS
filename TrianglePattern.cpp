#include <iostream>
using namespace std;

int main() {
    int n;
    //Taking N from user
    cout << "Enter N" << endl;
    cin >> n;
    cout << endl;

    //Printing the Triangle
    for (int i = 1; i <= n; i++) {
        for (int j = i; j >= 1; j--) {
            //65 is ascii value of 'A' so we adding 64
            cout << (char)(j+64) << "\t";
        }
        cout << endl;
    }

    return 0;
}
