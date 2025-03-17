#include <iostream>
#include <cassert>
using namespace std;

// The function to calculate the n-th Fibonacci number
int Fibox(int liczba)
{
    int f1 = 1, f2 = 1;
    int f3 = 0;
    int i = 2;
    if (liczba <= 2)
        return 1;
    while (i < liczba)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        i++;
    }
    return f2;
}

// Test function to check if Fibox returns correct Fibonacci numbers
void testFibox()
{
    // Test cases based on known Fibonacci numbers
    assert(Fibox(1) == 1); // Fibonacci(1) is 1
    assert(Fibox(2) == 1); // Fibonacci(2) is 1
    assert(Fibox(3) == 2); // Fibonacci(3) is 2
    assert(Fibox(4) == 3); // Fibonacci(4) is 3
    assert(Fibox(5) == 5); // Fibonacci(5) is 5
    assert(Fibox(6) == 8); // Fibonacci(6) is 8
    assert(Fibox(7) == 13); // Fibonacci(7) is 13
    assert(Fibox(8) == 21); // Fibonacci(8) is 21
    assert(Fibox(9) == 34); // Fibonacci(9) is 34
    assert(Fibox(10) == 55); // Fibonacci(10) is 55
    assert(Fibox(20) == 6765); // Fibonacci(20) is 6765
    assert(Fibox(30) == 832040); // Fibonacci(30) is 832040

    cout << "All test cases passed!" << endl;
}

int main()
{
    testFibox();  // Run the test functions

    int n = 0;
    cin >> n;  // Take input from the user for the Fibonacci number
    cout << Fibox(n) << endl; // Output the n-th Fibonacci number
    return 0;
}
