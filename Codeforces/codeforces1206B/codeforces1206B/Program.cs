using System;
using System.Collections.Generic;
namespace codeforces1206B
{
    class Program
    {
        static void Main(string[] args)
        {
            long n=long.Parse(Console.ReadLine());
            int[] a = Array.ConvertAll(Console.ReadLine().Split(), e => int.Parse(e));

            long pos = 0, neg = 0, zero = 0;
            long ans = 0;
            for (int i = 0; i < n; i++)
            {

                if (a[i] > 0)
                {
                    ans += (a[i] - 1);
                    pos++;
                }
                else if (a[i] < 0)
                {
                    ans += (-1 - (a[i]));
                    neg++;
                }
                else zero++;

            }

            if (neg % 2 == 0)
                ans += (zero);

            else if (neg % 2 == 1)
            {
                if (zero == 0) ans += 2;
                else ans += zero;
            }

            Console.WriteLine(ans);
        }
    }
}
