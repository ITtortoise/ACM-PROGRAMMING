//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    class _1295A
//    {
//        static void Main(string[] ages)
//        {
//            int t = int.Parse(Console.ReadLine());
//            while (t-- > 0)
//            {
//                int n = int.Parse(Console.ReadLine());
//                if (n < 2)
//                    Console.WriteLine(0);
//                else if (n > 1)
//                {
//                    if (n % 2 == 0)
//                    {
//                        for (int i = 1; i <= n / 2; i++)
//                            Console.Write(1);
//                    }
//                    else if (n % 2 != 0)
//                    {
//                        Console.Write(7);
//                        for (int i = 1; i < n / 2; i++)
//                            Console.Write(1);
                       
//                    }

//                    Console.WriteLine();
//                }
//            }
//        }
//    }
//}
