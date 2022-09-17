using System;
public class ProblemC {
  
  public static bool[] isComposite = new bool[10^8 + 1];
  public static int[] amountOfPrimeNumbers = new int[10^8 + 1];
  
  public static void EratosthenesSieve() {
    isComposite[0] = true;
    isComposite[1] = true;
    for(int i = 2; i * i < isComposite.Length; i++) {
      if(!isComposite[i]) {
        for(int j = i * i; j < isComposite.Length; j += i) isComposite[j] = true;
      }
    }
  }
  
  public static void CalculateAmountOfPrimeNumbers() {
    for(int i = 2; i < isComposite.Length; i++) {
      if(!isComposite[i]) {
        amountOfPrimeNumbers[i] = amountOfPrimeNumbers[i-1] + 1;
      }
    }
  }
  
  public static double primeNumberTheorem(int number) {
    return number / Math.Log(number);
  }
  
  public static double errorPercent(int actualValue, double approximateValue) {
    double result = Math.Abs((actualValue - approximateValue)) / actualValue;
    return Math.Round(result * 100, 1);
  }
  
  public static void Main() {
    EratosthenesSieve();
    CalculateAmountOfPrimeNumbers();
    do {
      int input = int.Parse(Console.ReadLine());
      if(input == 0) {
        break;
      } else {
        int actualValue = amountOfPrimeNumbers[input];
        double approximateValue = primeNumberTheorem(input);
        Console.WriteLine(errorPercent(actualValue, approximateValue));
      }
    } while(true);
  }
}
