//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP28CircleandSquare
//    {
//        static void Main(string[] args)
//        {
//            int T = int.Parse(Console.ReadLine());
//            while (T-- > 0)
//            {
//                var values = Array.ConvertAll(Console.ReadLine().Split(), e => double.Parse(e));
//                double R = values[0];
//                double S = values[1];
//                double D = (double)Math.Round(S * 1.414213562, 2);
//                R = R * 2;
//                R = (double)Math.Round(R, 2);
//                Console.WriteLine(Math.Abs(R - D));
//                //double diff = (double)Math.Round(Math.Abs(R - D), 2);
//                //Console.WriteLine(diff);
//                if (D == R || Math.Abs(R - D)<= 0.1)
//                    Console.WriteLine("Yes");
//                else
//                    Console.WriteLine("No");
//            }
//        }
//    }
//}