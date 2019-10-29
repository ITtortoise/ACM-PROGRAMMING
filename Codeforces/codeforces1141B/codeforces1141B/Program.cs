using System;

namespace codeforces1141B
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int[] arr = Array.ConvertAll(Console.ReadLine().Split(' '), e => int.Parse(e));
            int cnt = 0;
            int ans = 0;

            for (int i = 0; i < n; i++)
            {

                if (arr[i] == 1)
                {
                    while (arr[i % n] == 1)
                    {
                        cnt++; i++;
                    }
                    ans = Math.Max(ans, cnt);
                    cnt = 0;
                }
            }
            Console.WriteLine(ans);
         }
         
    }
}
