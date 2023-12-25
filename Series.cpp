#include <iostream>
#include <math.h>

using namespace std;

//using command line
int main(int argc, char* argv[]) {
    int n;
    if(argc >= 2){
        //atoi to convert string to number
        n = atoi(argv[1]);
    } else {
        cout << "Please enter a number: ";
        cin >> n;
    }

    int sum = 0;
    for(int i = 1; i <= n; i++){
        //Each Term
        int term = pow(i, n) * pow(-1, i+1);
        sum += term;
    }
    cout << "Sum = " << sum;

    return 0;
}
