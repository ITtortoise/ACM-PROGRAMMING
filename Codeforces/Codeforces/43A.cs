//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Codeforces
//{
//    class _43A
//    {
//        static void Main(string[] args)
//        {
//            var dic = new SortedDictionary<string, int>();
//            int n = int.Parse(Console.ReadLine());
//            for(int i = 0; i < n; i++)
//            {
//                var s = Console.ReadLine();
//                if (!dic.ContainsKey(s))
//                    dic[s] = 1;
//                else
//                    dic[s]++;

//            }

//            Console.WriteLine(dic.Aggregate((l, r) => l.Value > r.Value ? l : r).Key);
//        }
//    }
//}
