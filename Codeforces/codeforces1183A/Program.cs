using System;

namespace codeforces1183A
{
    class Program
    {
        static void Main(string[] args)
        {
            long n = int.Parse(Console.ReadLine());
            for ( long i = n; ; i++)
            {
                long sum = 0;
               long m = i;
                while (m > 0)
                {
                    long rem = m % 10;
                    sum += rem;
                    m = m / 10;

                }
                if (sum % 4 == 0)
                {
                    Console.WriteLine(i);
                    return ;
                }

            }
        }
    }
}
