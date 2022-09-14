using System;

class ProblemB {

  public static long sumOfDivisors(int number) {
    long result = 0;
    for(double i = 1.0; i <= Math.Sqrt(number); i++) {
      if(number % i == 0) {
        if(number / i == i || i == 1) {
          result += Convert.ToInt64(Math.Round(i));
          continue;
        }
        result += Convert.ToInt64(Math.Round(i));
        result += Convert.ToInt64(Math.Round(number / i));
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
