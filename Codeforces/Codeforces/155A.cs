//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    class _155A
//    {
//        static void Main(string[] args)
//        {
//            int n = int.Parse(Console.ReadLine());
//            var line = Console.ReadLine().Split();
//            var list = new List<int>();
//            for (int i = 0; i < n; i++)
//                list.Add(int.Parse(line[i]));
//            int max =list[0];int min = list[0];
//            int cnt = 0;
//            for(int i = 0; i < n; i++)
//            {
//                if (list[i]>max)
//                {
//                    max = Math.Max(max, list[i]);
//                    cnt++;
//                }
//                if (list[i] < min)
//                {
//                    min = Math.Min(min, list[i]);
//                    cnt++;
//                }
//            }
//            Console.WriteLine(cnt);
           
//        }
//    }
//}
