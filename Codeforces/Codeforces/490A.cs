//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    class _490A
//    {
//        static void Main()
//        {
//            int ans = 0;
//            int n = int.Parse(Console.ReadLine());
//            var line = Console.ReadLine().Split(' ');
            
//            var list1 = new List<int>();
//            var list2 = new List<int>();
//            var list3 = new List<int>();
//            for(int i = 0; i < n; i++)
//            {
//                int val = int.Parse(line[i]);
//                if (val == 1)
//                    list1.Add(i + 1);
//                else if (val == 2)
//                    list2.Add(i + 1);
//                else
//                    list3.Add(i + 1);
//            }
//            ans =Math.Min(list3.Count, Math.Min(list1.Count, list2.Count));
                
//            Console.WriteLine(ans);
//            if (ans > 0)
//            {
//                for (int i = 0; i < ans; i++)
//                {
//                    Console.WriteLine(list1[i] + " " + list2[i] + " " + list3[i]);
//                }
//            }
            
//        }
//    }
//}
