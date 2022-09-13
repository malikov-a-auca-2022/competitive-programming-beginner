using System;

public class ProblemA {
  
  public static bool isPrime() {
    int number = int.Parse(Console.ReadLine());
    if (number == 1) { return false; }
    if (number == 2) { return true; }
    if (number % 2 == 0) { return false; }
    
    for(int i = 3; i < Math.Sqrt((double)number); i += 2) {
      if (number % i == 0) {
        return false;
      }
    }
    return true;
  }
  
  static void Main() {
    string input = Console.ReadLine();
    int numberOfTestCases = 1;
    int.TryParse(input, out numberOfTestCases);

    while(numberOfTestCases > 0) {
      if(isPrime()) {
        Console.WriteLine("yes");
      } else {
        Console.WriteLine("no");
      }
      numberOfTestCases--;
    }
  }
  
}
