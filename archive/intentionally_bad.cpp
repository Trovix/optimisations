#include <iostream>
#include <chrono>

int fib(int n){
    if (n <=1) return n;
    return fib(n-1) + fib(n-2);
}

int main() {

    //start timing
    auto start = std::chrono::high_resolution_clock::now();

    for(int i = 0; i < 10000; i++){
        std::cout << fib(i) << " ";
    }
    

    //end timing
    auto end = std::chrono::high_resolution_clock::now();
    double elapsed = std::chrono::duration<double>(end - start).count();

    //Outputs 
    std::cout << "\n" << "Time: " << elapsed << " s\n";

    return 0;
}