//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP32TheGrid
//    {
//        static void Main(string[] args)
//        {
//            int T = int.Parse(Console.ReadLine());
//            int test;
//            for (test = 1; test <= T; test++)
//            {
//               string[] line = Console.ReadLine().Split(' ');
//                int x1 = int.Parse(line[0]);
//                int y1 = int.Parse(line[1]);
//                int x2 = int.Parse(line[2]);
//                int y2 = int.Parse(line[3]);
//                int ans = Math.Abs(x1 - x2) + Math.Abs(y1 - y2);

//                Console.WriteLine($"Case {test}: { ans}");
                
//            }
//        }
//    }
//}