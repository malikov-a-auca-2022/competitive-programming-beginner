using System;
using System.Collections.Generic;
using System.Linq;

public class ProblemB
{
    static void solve()
    {
        Console.ReadLine();
        string input = Console.ReadLine();
        string[] inputtedNumbers = input.Split(' ');
        int[] numbers = Array.ConvertAll(inputtedNumbers, s => int.Parse(s));
        int res = numbers.Max() - numbers.Min();
        Console.WriteLine(res);
    }
    static void Main ()
    {
        int numberOfTestCases = 1;
        string input = Console.ReadLine();
        int.TryParse(input, out numberOfTestCases);

        while (numberOfTestCases > 0)
        {
            solve();
            numberOfTestCases--;
        }
    }
}
