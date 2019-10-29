using System;
using System.Collections.Generic;

namespace codeforces988A
{
    class Program
    {
        static void Main(string[] args)
        {
            long[] nk = Array.ConvertAll(Console.ReadLine().Split(), e => long.Parse(e));
            long n = nk[0];
            long k = nk[1];
            long cnt = 0;
            long[] a = Array.ConvertAll(Console.ReadLine().Split(), e => long.Parse(e));
            long[] vis = new long[1000];
            //long[] a = new long[1000];
            //for (int i=0;i<n;i++)
            //{
            //    a[i] = long.Parse(Console.ReadLine());
            //    vis[a[i]] = 0;
            //}
            var set = new HashSet<long>(a);
            if (set.Count >= k)
            {
                Console.WriteLine("YES");
                for(int i=0;i<n;i++)
                {
                    if (cnt == k)
                        break;
                    else if(vis[a[i]]==0)
                    {
                        vis[a[i]] = 1;
                        Console.Write(i + 1+" ");
                        cnt++;
                    }
                }
            }
            else
                Console.WriteLine("NO");

        }
    }
}
