using System;

namespace codeforces954A
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string s = Console.ReadLine();
            int cnt = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if ((s[i] == 'R' && s[i + 1] == 'U') || (s[i] == 'U' && s[i + 1] == 'R'))
                {
                    cnt++;
                    i++;
                }
            }
            
            Console.WriteLine(cnt+(n-cnt*2));
        }
    }
}
