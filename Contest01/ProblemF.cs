using System;

public class ProblemF {
  static void Main() {
    int result = 0;
    string input = Console.ReadLine();
    int numOfStatements = int.Parse(input);
    for(int i = 1; i <= numOfStatements; i++) {
      string statement = Console.ReadLine();
      if(statement[1] == '+') 
        result++;
      else if(statement[1] == '-')
        result--;
    }
    Console.WriteLine(result);
  }
}
