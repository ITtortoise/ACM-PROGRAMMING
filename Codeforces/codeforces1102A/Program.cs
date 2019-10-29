using System;

namespace codeforces1102A
{
    class Program
    {
        static void Main(string[] args)
        {
            long n = int.Parse(Console.ReadLine());
            long sum = (n * (n + 1)) / 2;
            if (sum % 2 != 0)
                Console.WriteLine(1);
            else
                Console.WriteLine(0);
        }
    }
}
