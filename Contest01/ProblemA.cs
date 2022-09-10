using System;

public class ProblemA {
  public static void solve() {
    string input = Console.ReadLine();
    if(input.Length % 2 != 0) {
      Console.WriteLine("NO");
      return;
    }
    for(int i = 0; i < input.Length / 2; i++ ) {
      char start = input[i];
      char middle = input[input.Length / 2 + i];
      if(start != middle) {
        Console.WriteLine("NO");
        return;
      }
    }
    Console.WriteLine("YES");
  }
  static void Main() {
    string input = Console.ReadLine();
    int numberOfTestCases = 1;
    int.TryParse(input, out numberOfTestCases);

    while(numberOfTestCases > 0) {
      solve();
      numberOfTestCases--;
    }
  }
}
