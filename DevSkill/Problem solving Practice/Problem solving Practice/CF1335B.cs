using System;
using System.Collections.Generic;
using System.Text;

namespace Problem_solving_Practice
{
    class CF1335B
    {
        public static void Main(string[] args)
        {
            int test = int.Parse(Console.ReadLine());
            while (test-- > 0)
            {
                var line = Console.ReadLine().Split(' ');
                int n = int.Parse(line[0]);
                int a = int.Parse(line[1]);
                int b = int.Parse(line[2]);
                string ans = "";
                for (int k = 97; k <= 96 + b; k++)
                {
                    ans += (char)k;
                    if (ans.Length < a && ans.Length < n)
                    {
                        if (k == 96 + b)
                            k = 96;
                    }
                    if (ans.Length == n)
                    {
                        Console.WriteLine(ans);
                        break;
                    }

                }

            }
        }
    }
}
