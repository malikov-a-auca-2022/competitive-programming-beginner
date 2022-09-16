using System;
public class HelloWorld {
  
  public static void printPrimesBetween() {
    string input = Console.ReadLine();
    string[] numbers = input.Split(' ');
    int firstNum = int.Parse(numbers[0]);
    int secondNum = int.Parse(numbers[1]);
    for(int i = firstNum; i <= secondNum; i++) {
      if(isPrime(i)) {
        Console.WriteLine(i);
      }
    }
  }
  
  public static bool isPrime(int number) {
    if (number == 1) { return false; }
    if (number == 2) { return true; }
    if (number % 2 == 0) { return false; }
    
    for(int i = 3; i <= Math.Sqrt(number); i += 2) { //+=2 because all even numbers are divisible by 2, but we checked for it already
      if (number % i == 0) {
        return false;
      }
    }
    return true;
  }
  
  public static void Main() {
    int numberOfTestCases = 1;
    numberOfTestCases = int.Parse(Console.ReadLine());

    while(numberOfTestCases > 0) {
      printPrimesBetween();
      Console.WriteLine();
      numberOfTestCases--;
    }
  }
  
}
