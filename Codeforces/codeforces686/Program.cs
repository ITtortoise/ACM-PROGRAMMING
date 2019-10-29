using System;

namespace codeforces686
{
    class Program
    {
        static void Main(string[] args)
        {
            long[] A = Array.ConvertAll(Console.ReadLine().Split(), e => long.Parse(e));
            long n = int.Parse(Console.ReadLine());
            long round, i;
            for (round = 1; round < n; round++)
            {
                for (i = 0; i < n - round; i++)
                    if (A[i] > A[i + 1])
                    {
                        Console.WriteLine("{0},{1}", i + 1, i + 2);
                        Swap(A[i + 1], A[i]);
                    }
            }
        }
        static void Swap(long , long b)
        {
            long temp = a;
            a = b;
            b = temp;
        }
    }
}
