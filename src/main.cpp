#include <iostream>
#include <chrono>

//Functions


//Entry point
int main() {
    //setup


    //start timing
    auto start = std::chrono::high_resolution_clock::now();

    //actual code goes here
    


    //end timing
    auto end = std::chrono::high_resolution_clock::now();
    double elapsed = std::chrono::duration<double>(end - start).count();

    //Outputs 
    std::cout << "Time: " << elapsed << " s\n";

    return 0;
}