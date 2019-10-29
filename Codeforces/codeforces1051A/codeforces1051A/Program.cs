using System;

namespace codeforces1051A
{
    class Program
    {
        static void Main(string[] args)
        {
            int T = int.Parse(Console.ReadLine());
            while (T-- > 0)
            {
                int low = 0, upp = 0, num = 0;
                string s = Console.ReadLine();
                for (int i = 0; i < s.Length; i++)
                {
                    if (s[i] >= 'a' && s[i] <= 'z')
                        low++;
                    else if (s[i] >= 'A' && s[i] <= 'Z')
                        upp++;
                    else
                        num++;

                }
                if (low == 0)
                {

                }
                else if (upp == 0)
                {

                }
                else if (num == 0)
                {

                }
            }
        }
    }
}
