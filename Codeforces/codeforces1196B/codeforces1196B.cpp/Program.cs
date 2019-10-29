using System;
using System.Collections.Generic;

namespace codeforces1196B.cpp
{
    class Program
    {
        static void Main(string[] args)
        {
            List<long> ans = new List<long>();
            
            long T = long.Parse(Console.ReadLine());
            for (int i = 0; i < T; i++)
            {
                long[] nk = Array.ConvertAll(Console.ReadLine().Split(), e => long.Parse(e));
                long n = nk[0];
                long k = nk[1];
                long[] arr = Array.ConvertAll(Console.ReadLine().Split(), e => long.Parse(e));
                long sum = 0;
                k--;
                for (int j = 0; j < n; j++)
                {
                    sum = sum + arr[j];
                    if (k>0 && sum%2 == 1)
                    {
                     ans.Add(j + 1);
                       k--;
                    }

                }


                 if(sum%2==1)
                {
                    Console.WriteLine("YES");
                    for (int j = 0; j <ans.Count; j++)
                        Console.Write(ans[j]+" ");
                    Console.WriteLine(n);
                }
                else
                Console.WriteLine("NO");
            }

        }
    }
}
