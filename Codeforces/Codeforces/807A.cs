//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    class _807A
//    {
//        static void Main(string[] args)
//        {
//            int n = int.Parse(Console.ReadLine());
//            var a = new List<int>();
//            var b = new List<int>();
//            for(int i = 0; i < n; i++)
//            {
//                var line = Console.ReadLine().Split(' ');
//                int x = int.Parse(line[0]);
//                int y = int.Parse(line[1]);
//                a.Add(x);
//                b.Add(y);

//            }
//            int k = 0,p=0;
//            for (int i = 0; i < n; i++)
//            {
//                if (a[i] == b[i])
//                    k++;
//            }

//            if (k == n)
//            {
//                for (int i = 0; i < n - 1; i++)
//                {
//                    if (a[i] >= a[i + 1])
//                        p++;
//                }

//                if (p == n - 1)
//                    Console.WriteLine("maybe");
//                else
//                    Console.WriteLine("unrated");

//            }
//            else
//                Console.WriteLine("rated");


//        }
//    }
//}
