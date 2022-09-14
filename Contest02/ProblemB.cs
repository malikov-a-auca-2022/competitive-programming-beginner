using System;

class ProblemB {

  public static long sumOfDivisors(int number) {
    long result = 0;
    for(int i = 1; i <= Math.Sqrt(number); i++) {
      if(number % i == 0) {
        if(number / i == i || i == 1) {
          result += i;
          continue;
        }
        result += i;
        result += number / i;
      }
    }
    return result;
  }
  
  static void Main() {
    int numberOfTestCases = 1;
    numberOfTestCases = int.Parse(Console.ReadLine());

    while(numberOfTestCases > 0) {
      Console.WriteLine(sumOfDivisors(int.Parse(Console.ReadLine())));
      numberOfTestCases--;
    }
  }
  
}
