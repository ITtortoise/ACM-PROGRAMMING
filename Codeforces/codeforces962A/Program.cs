using System;

namespace codeforces962A
{
    class Program
    {
        static void Main(string[] args)
        {
            long n = int.Parse(Console.ReadLine());
            double sum = 0,equator=0;
            long[] arr = Array.ConvertAll(Console.ReadLine().Split(), e => long.Parse(e));

            for (int i=0;i<n;i++)
                sum = sum + arr[i];

            //Console.WriteLine(Math.Ceiling(sum/2));

            for (int i = 0; i < n; i++)
            {
                equator = equator + arr[i];
                if (equator >= sum / 2)
                {
                    Console.WriteLine(i+1);
                    break;
                }
            }
           
            

        }
    }
}
