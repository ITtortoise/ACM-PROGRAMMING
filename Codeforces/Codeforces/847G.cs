    //using System;
    //using System.Collections.Generic;
    //using System.Text;

    //namespace Codeforces
    //{
    //    class _847G
    //    {
    //        static void Main(string[] args)
    //        {
    //            char[,] arr = new char[10009, 10009];
    //            int ans = 1;
    //            int n = int.Parse(Console.ReadLine());
    //            for (int i = 0; i < n; i++)
    //            {
    //                var line = Console.ReadLine();
    //                for (int j = 0; j < 7; j++)
    //                {
    //                    arr[i, j] = line[j];

    //                }
    //            }
    //            int f = 0;
    //            for (int i = 0; i < 7; i++)
    //            {
    //                int cnt = 0;
    //                for (int j = 0; j < n; j++)
    //                {
    //                    if (arr[j, i] == '1')
    //                        cnt++;
    //                }
    //                if (cnt > 0) f = 1;
    //                ans = Math.Max(ans, cnt);
    //            }
    //            if (f == 1)
    //                Console.WriteLine(ans);
    //            else
    //                Console.WriteLine(0);
    //        }
    //    }
    //}
