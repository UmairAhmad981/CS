#include <iostream>
using namespace std;

//Function For Factorial With Default Argument 10
int fact(int n = 10) {
    int f = 1;
    for(int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    cout << "For N = "<< n<<endl<< "Factorial =" << fact(n) << endl;
    cout << "For default argument" << endl << fact() << endl;
    return 0;
}
