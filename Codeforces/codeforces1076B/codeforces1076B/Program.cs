using System;

namespace codeforces1076B
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            bool flag = false;
            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    n -= i;
                    Console.WriteLine (1+ (n / 2));
                    flag = true;
                    return ;
                }

            }
            if (flag == false)
                Console.WriteLine(1);
        }
    }
}
