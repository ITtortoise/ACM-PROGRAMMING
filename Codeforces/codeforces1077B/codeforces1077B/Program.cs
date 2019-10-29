using System;

namespace codeforces1077B
{
    class Program
    {
        static void Main(string[] args)
        {
            long n = long.Parse(Console.ReadLine());
            long[] a = Array.ConvertAll(Console.ReadLine().Split(), e => long.Parse(e));
            long cnt = 0;
            for(int i=1;i<n-1;i++)
            {
                if (a[i] == 0)
                {
                    if (a[i - 1] == 1 && a[i + 1] == 1)
                    {
                        a[i + 1] = 0;
                        cnt++;
                    }
                        
                }
            }
            Console.WriteLine(cnt);
            //for (int i = 0; i < n; i++)
            //    Console.Write(a[i]+" ");
        } 
    }
}
