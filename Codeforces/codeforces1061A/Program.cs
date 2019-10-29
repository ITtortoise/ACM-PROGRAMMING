using System;

namespace codeforces1061A
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] nm=Array.ConvertAll(Console.ReadLine().Split(' '),e=>int.Parse(e));
            int n = nm[0];
            int m = nm[1];
            Console.WriteLine((int)Math.Ceiling((double)m/n));
        }
    }
}
