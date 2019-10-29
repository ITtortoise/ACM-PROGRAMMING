using System;

namespace codeforces1176A
{
    class Program
    {
        static void Main(string[] args)
        {
            int T = int.Parse(Console.ReadLine());
            for(int t=0;t<T;t++)
            {
                long n= long.Parse(Console.ReadLine());
                int cnt=0;
                while (n > 1)
                {
                    if (n % 2 == 0)
                        n = n / 2;
                    else if (n % 3 == 0)
                        n = (2 * n) / 3;
                    else if (n % 5 == 0)
                        n = (4 * n) / 5;
                    else
                    {
                       cnt = -1;
                       break;
                    }

                    cnt++;
                }
                Console.WriteLine(cnt);

            }
        }
    }
}
