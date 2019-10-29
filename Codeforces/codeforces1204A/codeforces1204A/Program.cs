using System;

namespace codeforces1204A
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            int n = s.Length;

            if (n % 2 == 0)
            {
               Console.WriteLine( n / 2 );
               return ;
            }

            int cnt = 0;
            for (int i = 0; i < s.Length; i++)
            {
                if (s[i] == '1') cnt++;
            }

            if (cnt > 1)
            {
                Console.WriteLine((n / 2) + 1);
                return;
            }

            else
                Console.WriteLine(n / 2); 
        }
    }
}
