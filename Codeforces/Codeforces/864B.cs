//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    class _864B
//    {
//        static void Main(string[] args)
//        {
//            int n = int.Parse(Console.ReadLine());
//            var s = Console.ReadLine();
//            var schar = s.ToCharArray();
//            var set = new HashSet<char>();
//            int i = 0;
//            int max = 0;
//            while (i < n)
//            {
//                while (schar[i] > 96 && schar[i] < 123)
//                {
//                    set.Add(schar[i]);
//                    max = Math.Max(set.Count, max);
//                    if (i == n - 1) break;
//                    i++;

//                }
//                if (i == n - 1) break;
//                i++;
//                set.Clear();

//            }
//            Console.WriteLine(max);


//        }
//    }
//}
