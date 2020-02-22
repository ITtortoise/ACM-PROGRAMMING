//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP4GreatTheWorkIsDone
//    {
//        static void Main(string[] args)
//        {
//            while (true)
//            {
//                var lines = Console.ReadLine();

//                if (lines == null) { break; }
//                var line = lines.Split(' ');
//                decimal sum = 0;
//                int ct = Convert.ToInt32(line[0]);
//                int n = Convert.ToInt32(line[1]);
//                for (int i = 0; i < n; i++)
//                {
//                    int p = int.Parse(Console.ReadLine());
//                    sum = sum + p;
//                }
//                decimal ans = (ct / sum);
//                decimal finalans = Math.Ceiling(ans);
//                if (finalans == 1)
//                    Console.WriteLine("Project will finish within 1 day.");
//                else
//                    Console.WriteLine($"Project will finish within {finalans} days.");
//            }
//        }
//    }
//}
