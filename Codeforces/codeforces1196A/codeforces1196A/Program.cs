using System;

namespace codeforces1196A
{
    class Program
    {
        static void Main(string[] args)
        {
            long n = int.Parse(Console.ReadLine());
            for(int i=0;i<n;i++)
            {
                long [] arr = Array.ConvertAll(Console.ReadLine().Split(), e => long.Parse(e));
                long  sum =(arr[0] + arr[1] + arr[2])/2;
                Console.WriteLine(sum);
                sum = 0;
            }
            

        }
    }
}
