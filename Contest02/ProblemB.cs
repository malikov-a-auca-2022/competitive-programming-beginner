using System;

class ProblemB {

  public static long sumOfDivisors(int number) {
    if(number == 1) {
        return 0;
    }
    long result = 1L;
    for(int i = 2; i <= Math.Sqrt(number); i++) {
        if(number % i == 0) {
            if(number / i == i) {
                result += i;
            } else {
                result += i;
                result += number / i;
            }
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
