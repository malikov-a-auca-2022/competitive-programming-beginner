using System;

public class ProblemC
{
    static void solve()
    {
        string input = Console.ReadLine();
        int number = int.Parse(input);
        if(number < 5)
        {
            Console.WriteLine("few");
        }
        else if (number < 10)
        {
            Console.WriteLine("several");
        }
        else if (number < 20)
        {
            Console.WriteLine("pack");
        }
        else if (number < 50)
        {
            Console.WriteLine("lots");
        }
        else if (number < 100)
        {
            Console.WriteLine("horde");
        }
        else if (number < 250)
        {
            Console.WriteLine("throng");
        }
        else if (number < 500)
        {
            Console.WriteLine("swarm");
        }
        else if (number < 1000)
        {
            Console.WriteLine("zounds");
        }
        else
        {
            Console.WriteLine("legion");
        }
        Console.ReadKey();
    }
    static void Main ()
    {
        solve();
    }
}
