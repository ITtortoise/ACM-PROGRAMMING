//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace Codeforces
//{
//    class _660B
//    {
//        static void Main(string[] args)
//        {
//            var lw = new List<int>();
//            var rw = new List<int>();
//            var lm = new List<int>();
//            var rm = new List<int>();
//            var line = Console.ReadLine().Split();
//            int n = int.Parse(line[0]);
//            int m = int.Parse(line[1]);
//            int seat = n * 4;
//            int available = 1;

//            while (available < seat / 2)
//            {
//                lw.Add(available);
//                available++;
//                if (available > m) break;
//                rw.Add(available);
//                available++;
//                if (available > m) break;

//            }
//            while (available < seat)
//            {
//                if (available > m) break;
//                lm.Add(available);
//                available++;
//                if (available > m) break;
//                rm.Add(available);
//                available++;
//                if (available > m) break;
//            }
//            int man = m;
//            while (man > 0)
//            {
//                if (lm.Count > 0)
//                {
//                    Console.Write(lm[0]+" ");
//                    lm.RemoveAt(0);
//                    man--;
//                }
//                if (lw.Count > 0)
//                {
//                    Console.Write(lw[0]+" ");
//                    lw.RemoveAt(0);
//                    man--;
//                }
//                if (rm.Count > 0)
//                {
//                    Console.Write(rm[0]+" ");
//                    rm.RemoveAt(0);
//                    man--;
//                }
//                if (rw.Count > 0)
//                {
//                    Console.Write(rw[0]+" ");
//                    rw.RemoveAt(0);
//                    man--;
//                }


//            }
//        }
//    }
//}