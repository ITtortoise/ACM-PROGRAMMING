using System;

namespace codeforces978B
{
    class Program
    {
        static void Main(string[] args)
        {
            long n = int.Parse(Console.ReadLine());
            string s = Console.ReadLine();
            char[] s1 = s.ToCharArray();
            long cnt = 0;
            for (int i = 0; i < n- 2; i++)
            {
                if (s1[i] == 'x' && s1[i + 1] == 'x' && s1[i + 2] == 'x')
                    cnt++;

            }
            Console.Write(cnt);
        }
    }
}
