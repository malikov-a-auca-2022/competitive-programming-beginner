using System;
using System.Runtime.InteropServices;
internal class NativeMethods
{
    [DllImport("kernel32.dll", SetLastError = true)]
    internal static extern bool SetConsoleMode(IntPtr hConsoleHandle, int mode);

    [DllImport("kernel32.dll", SetLastError = true)]
    internal static extern bool GetConsoleMode(IntPtr hConsoleHandle, out int mode);

    [DllImport("kernel32.dll", SetLastError = true)]
    internal static extern IntPtr GetStdHandle(int nStdHandle);

    internal const int STD_INPUT_HANDLE = -10;
    internal const int ENABLE_ECHO_INPUT = 0x0004;
}

public class ProblemC
{

    public static bool[] isComposite = new bool[(int)Math.Pow(10, 8) + 1];
    public static int[] amountOfPrimeNumbers = new int[(int)Math.Pow(10, 8) + 1];

    public static void EratosthenesSieve()
    {
        isComposite[0] = true;
        isComposite[1] = true;
        for (int i = 2; i * i < isComposite.Length; i++)
        {
            if (!isComposite[i])
            {
                for (int j = i * i; j < isComposite.Length; j += i)
                {
                    isComposite[j] = true;
                }
            }
        }
    }

    public static void CalculateAmountOfPrimeNumbers()
    {
        for (int i = 2; i < isComposite.Length; i++)
        {
            if (!isComposite[i])
            {
                amountOfPrimeNumbers[i] = amountOfPrimeNumbers[i - 1] + 1;
            } else
            {
                amountOfPrimeNumbers[i] = amountOfPrimeNumbers[i - 1];
            }
        }
    }

    public static double primeNumberTheorem(int number)
    {
        return number / Math.Log(number);
    }

    public static double errorPercent(int actualValue, double approximateValue)
    {
        double result = Math.Abs((actualValue - approximateValue)) / actualValue;
        return Math.Round(result * 100, 1, MidpointRounding.AwayFromZero);
    }

    public static int Main()
    {
        EratosthenesSieve();
        CalculateAmountOfPrimeNumbers();
        var handle = NativeMethods.GetStdHandle(NativeMethods.STD_INPUT_HANDLE);
        int mode;
        NativeMethods.GetConsoleMode(handle, out mode);
        mode &= ~NativeMethods.ENABLE_ECHO_INPUT; // disable flag
        NativeMethods.SetConsoleMode(handle, mode);
        do
        {
            int input = int.Parse(Console.ReadLine());
            if (input == 0)
            {
                break;
            }
            else
            {
                int actualValue = amountOfPrimeNumbers[input];
                double approximateValue = primeNumberTheorem(input);
                Console.WriteLine(errorPercent(actualValue, approximateValue));
            }
        } while (true);
        return 0;
    }
}
