//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP32Devideandfool
//    {
//        public static void Main()
//        {
//            long T = long.Parse(Console.ReadLine());
//            while (T-- > 0)
//            {
//                long[] values = Array.ConvertAll(Console.ReadLine().Split(), e => (long.Parse(e)));
//                long x = values[0];
//                long y = values[1];
//                long p = values[2];
//                long RealPart = x / y;
//                string Rpart = RealPart.ToString();
//                long rem = x % y;
//                long cnt = 0;
//                long i = 10;
//                string Ipart = "";
//                while (cnt < p)
//                {
//                    long newdivisor = rem;
//                    if (newdivisor < y)
//                        newdivisor = newdivisor * i;
//                    while (newdivisor < y)
//                    {
//                        Ipart += '0';
//                        newdivisor = newdivisor * 10;
//                        cnt++;
//                        if (cnt == p) goto e;
//                    }
//                    Ipart += (newdivisor / y).ToString();
//                    rem = newdivisor % y;
//                    cnt++;
//                }
//            e:
//                Console.WriteLine(Rpart + "." + Ipart);
//            }
//        }
//    }
//}