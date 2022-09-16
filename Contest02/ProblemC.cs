using System;
public class ProblemC {
  
  public static int EratosthenesSieve(int number) {
    if(number == 2) {
      return 1;
    }
    bool[] ListOfCompositeNumbers = new bool[number + 1];
    ListOfCompositeNumbers[0] = true;
    ListOfCompositeNumbers[1] = true;

    for(int i = 2; i <= Math.Sqrt(ListOfCompositeNumbers.Length); i++) {
      if(ListOfCompositeNumbers[i] == false) {
        for(int j = i * 2; j < ListOfCompositeNumbers.Length; j += i) {
          ListOfCompositeNumbers[j] = true;
        } 
      }
    }
    int numberOfPrimeNumbers = 0;
    for(int i = 0; i < ListOfCompositeNumbers.Length; i++) {
      if(ListOfCompositeNumbers[i] == false) {
        numberOfPrimeNumbers++;
      }
    }
    return numberOfPrimeNumbers;
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
        int actualValue = EratosthenesSieve(input);
        double approximateValue = primeNumberTheorem(input);
        Console.WriteLine(errorPercent(actualValue, approximateValue));
      }
    } while(true);
  }
}
