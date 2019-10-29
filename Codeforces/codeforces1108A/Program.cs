using System;

namespace codeforces1108A
{
    class Program
    {
        static void Main(string[] args)
        {
            long n = int.Parse(Console.ReadLine());
            for (long i = 0; i < n; i++)
            {
                long[] abcd = Array.ConvertAll(Console.ReadLine().Split(), e => long.Parse(e));
                long a = abcd[0];
                long b = abcd[1];
                long c = abcd[2];
                long d = abcd[3];
                if (a != c)
                    Console.WriteLine("{0} {1}",a,c);
                else if (a != d)
                    Console.WriteLine("{0} {1}",a,d);
                else if (b != c)
                    Console.WriteLine("{0} {1}", b,c);
                else if (b != d)
                    Console.WriteLine("{0} {1}",b,d);
            }
        }
    }
}
