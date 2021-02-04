/*using formula Fn = {[(sqrt(5)+1)/2]^N}/sqrt(5)
 *  http://www.maths.surrey.ac.uk/hosted-sites/R.Knott/Fibonacci/fibFormula.html*/

#include <iostream>
#include <cmath>
using namespace std;

unsigned long long int fibonacci(int N){
    double phi = (1+sqrt(5))/2;
    return round(pow(phi,N)/sqrt(5));
}

int main() {
    int T = 0, N=0;
    std::cin >> T;
    for (int x=0;x<T;x++){
        std::cin >> N;
        if (N >= 0 && N<=60) {
            std::cout << "Fib(" << N << ") = " << fibonacci(N) << std::endl;
        }
    }
    return 0;
}
