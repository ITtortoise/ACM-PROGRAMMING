using System;

namespace codeforces1153A
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] nt = Array.ConvertAll(Console.ReadLine().Split(), e => int.Parse(e));
            int n = nt[0];
            int t = nt[1];
            int[] arr = new int[1000001];
            int mn =100000001,ans=0;
            for(int i=1;i<=n;i++)
            {
                int[] sd = Array.ConvertAll(Console.ReadLine().Split(), e => int.Parse(e));
                int s = sd[0];
                int d = sd[1];
                while(s<t)
                   s = s + d;
               if(s<mn)
                {
                    mn = Math.Min(s, mn);
                    ans = i;
                }
            }

            Console.WriteLine(ans); 
            
        }
    }
}
