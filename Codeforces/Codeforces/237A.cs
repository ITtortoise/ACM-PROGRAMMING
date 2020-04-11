using System;
using System.Collections.Generic;
using System.Text;

namespace Codeforces
{
    class _237A
    {
        static void Main()
        {

            var myset = new HashSet<KeyValuePair<int ,int>>();
            int n = int.Parse(Console.ReadLine());

            for (int i = 0; i < n; i++)
            {
                var line =Console.ReadLine().Split(' ');
                int h = int.Parse(line[0]);
                int m = int.Parse(line[1]);

                myset.Add(new KeyValuePair<int, int>(h,m));
            }

            int ans = n - myset.Count;

            if (ans > 0)
                Console.WriteLine(ans + 1);
            else
                Console.WriteLine(1);

        }
    }
}
