//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    class _186A
//    {
//        static void Main(String[] args)
//        {
//            int cnt = 0; var mismatchs1 = ""; var mismatchs2 = "";
//            var s1 = Console.ReadLine();
//            var s2 = Console.ReadLine();
//            if (s1.Length != s2.Length)
//                Console.WriteLine("NO");
//            else
//            {

//                for (int i = 0; i < s1.Length; i++)
//                {
//                    if (s1[i] != s2[i])
//                    {
//                        cnt++;
//                        mismatchs1 += s1[i];
//                        mismatchs2 += s2[i];
//                        if (cnt > 2) break;
//                    }
//                }
//                if (cnt == 2)
//                {
//                    if (mismatchs1[0] == mismatchs2[1] && mismatchs1[1] == mismatchs2[0])
//                        Console.WriteLine("YES");
//                    else
//                        Console.WriteLine("NO");
//                }
//                else
//                    Console.WriteLine("NO");

//            }

//        }
//    }
//}
