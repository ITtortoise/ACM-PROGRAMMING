using System;

namespace codeforces1095A
{
    class Program
    {
        static void Main(string[] args)
        {
            long n = int.Parse(Console.ReadLine());
            string  s1 =Console.ReadLine();
            char[] s = s1.ToCharArray();
            long j = 0;

            for (long i = 0; i < n; i = i + j)
            {
                Console.Write(s[i]);
                j++;
            }


        }
    }
}
