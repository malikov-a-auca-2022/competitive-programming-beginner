using System;

public class ProblemE {
  static void Main() {
    string input = Console.ReadLine();
    int weight = int.Parse(input);
    if(weight % 2 == 0 && weight != 2) { Console.WriteLine("YES"); }
    else {Console.WriteLine("NO");}
  }
}
