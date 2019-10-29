using System;

namespace codeforces822A
{
    class Program
    {
        static void Main(string[] args)
        {
            long[] nm = Array.ConvertAll(Console.ReadLine().Split(), e => long.Parse(e));
            long n = nm[0];
            long m = nm[1];
            long t = Math.Min(n, m);
            long sum = 1;
            for (long i = 1; i <= t; i++)
                 sum = sum * i;
            Console.WriteLine(sum);
        }
    }
}
