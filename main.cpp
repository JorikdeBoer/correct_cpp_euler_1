#include <iostream>
#include <numeric>
#include <vector>

/// Show the answer to Project Euler, problem 1 (https://projecteuler.net/problem=1):
///
/// If we list all the natural numbers below 10 
/// that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
/// The sum of these multiples is 23.
///
/// Find the sum of all the multiples of 3 or 5 below 1000.

///The euler_1 main function
int main()
{
  std::vector<int> numbers;
  int number = 1000;
  for(int counter = 0; counter < number; ++counter)
  {
    if(counter % 3 == 0 || counter % 5 == 0)
    {
      numbers.push_back(counter);
    }
  }
  int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
  std::cout << sum << "\n";
}
