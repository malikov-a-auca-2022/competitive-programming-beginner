// First of all i need to find number of prime numbers less or equal to N. and then calculate N/logN function. and then find error percentage

using System;
public class ProblemC {
  
  public static int NumberOfPrimes(int number) {
    if(number == 2) {
      return 1;
    }
    int result = 1;
    for(int i = 3; i <= number; i += 2) { // +=2 because all even numbers are composite and we can just skip them 
      if(isPrime(i)) {
        result++;
      }
    }
    return result;
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
  
  public static double primeNumberTheorem(int number) {
    return number / Math.Log(number);
  }
  
  public static double errorPercent(int actualValue, double approximateValue) {
    double result = Math.Abs((actualValue - approximateValue)) / actualValue;
    return Math.Round(result * 100, 1);
  }
  
  public static void Main() {
    do {
      int input = int.Parse(Console.ReadLine());
      if(input == 0) {
        break;
      } else {
        int actualValue = NumberOfPrimes(input);
        double approximateValue = primeNumberTheorem(input);
        Console.WriteLine(errorPercent(actualValue, approximateValue));
      }
    } while(true);
  }
}
