using System;

public class ProblemD {
  public static int[] inputArray() {
    string input = Console.ReadLine();
    char[] inputtedNumbers = input.ToCharArray();
    int[] numbers = Array.ConvertAll(inputtedNumbers, s => (int)char.GetNumericValue(s)); 
    return numbers;
  }
  public static void solve() {
    int lengthOfArray = int.Parse(Console.ReadLine());
    int[] array1 = inputArray();
    int[] array2 = inputArray();
    for(int i = 0; i < lengthOfArray; i++)
    {
      if(array1[i] == 1 && array2[i] == 1) {
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
