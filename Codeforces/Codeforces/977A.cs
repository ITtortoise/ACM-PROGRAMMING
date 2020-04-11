//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    class _977A
//    {
//        static int cnt = 0;
//        static int Function(int n,int k)
//        {
//            if (k == 0) return n;
//            if (n % 10 == 0) { 
//                n = n / 10;
//                return Function(n, k - 1);
//            }
//            else
//            {
//                n = n - 1;
//                return Function(n, k - 1);
//            }
//        }
//        static void Main(string[] args)
//        {
//            var line = Console.ReadLine().Split();
//            var n = int.Parse(line[0]);
//            var k = int.Parse(line[1]);
//            Console.WriteLine(Function(n,k)) ;

//        }
//    }
//}
