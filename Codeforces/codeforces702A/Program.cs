using System;
using System.Collections.Generic;
namespace codeforces702A
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            var arr = new List<string>();
            for(long j=0;j<n;j++)
            {
                string s = Console.ReadLine();
                arr.Add(s);
            }
            long mx = -1,cnt = 0;

            for(int j=0;j<n;j++)
            {
                while(int.Parse(arr[j])<int.Parse(arr[j+1])&&j<n-2)
                {
                    cnt++;
                    j++;
                }
                mx = Math.Max(cnt, mx);
            }
            Console.WriteLine(mx);
        }
    }
}
