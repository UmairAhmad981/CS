#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char* argv[]) {
    int n;
    if(argc >= 2){
        n = atoi(argv[1]);
    } else {
        cout << "Please enter a number: ";
        cin >> n;
    }

    int sum = 0;
    for(int i = 1; i <= n; i++){
        int term = pow(i, n) * pow(-1, i+1);
        sum += term;
    }
    cout << "Sum = " << sum;

    return 0;
}
