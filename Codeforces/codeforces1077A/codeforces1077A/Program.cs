using System;

namespace codeforces1077A
{
    class Program
    {
        static void Main(string[] args)
        {
            long T = long.Parse(Console.ReadLine());
            while(T-->0)
            {
               long[] abk = Array.ConvertAll(Console.ReadLine().Split(), e => long.Parse(e));
               long a = abk[0];
               long b = abk[1];
               long k = abk[2];
               Console.WriteLine((a * ((k + 1) / 2)) - (b * (k / 2)));

            }
        }
    }
}
