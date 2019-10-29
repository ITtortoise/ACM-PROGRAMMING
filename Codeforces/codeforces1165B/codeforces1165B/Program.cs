using System;
using System.Collections.Generic;
namespace codeforces1165B
{
    class Program
    {
        static void Main(string[] args)
        {
            
            long n = long.Parse(Console.ReadLine());
            long[] arr = Array.ConvertAll(Console.ReadLine().Split(), e => long.Parse(e));
            long k = 0;
            Array.Sort(arr);
            for(long i=0;i<n;i++)
            {
                if (arr[i]>k)
                    k++;
            }
            //var set = new HashSet<long>(arr);
            Console.WriteLine(k);
            
        }
    }
}
