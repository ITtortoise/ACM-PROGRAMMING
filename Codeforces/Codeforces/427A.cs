//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    class _427A
//    {
//        static void Main()
//        {
//            int n = int.Parse(Console.ReadLine());
//            int[] arr = Array.ConvertAll(Console.ReadLine().Split(), e => int.Parse(e));
//            int police = 0, untreated = 0;
//            for (int i = 0; i < n; i++)
//            {
//                if (arr[i] == -1)
//                {
//                    if (police > 0)
//                        police = police - 1;
//                    else
//                        untreated++;
//                }
//                else if (arr[i] > 0)
//                    police += arr[i];
//            }
//            Console.WriteLine($"{untreated}");
//        }
//    }
//}
