//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    class _686A
//    {
//        static void Main()
//        {
//            var line = Console.ReadLine().Split(' ');
//            long n = long.Parse(line[0]);
//            long x = long.Parse(line[1]);

//            long depressed = 0, cal = x;
//            for (long i = 0; i < n; i++)
//            {
//                line =Console.ReadLine().Split(' ');
//                var sign =char.Parse(line[0]);
//                long val = long.Parse(line[1]);
//                if (sign == '-')
//                {
//                    if (cal - val > 0)
//                        cal -= val;
//                    else
//                        depressed++;
//                }
//                else if(sign=='+')
//                {
//                    cal += val;
//                }
//            }
//            Console.WriteLine(cal+" "+depressed);
//        }
//    }
//}
