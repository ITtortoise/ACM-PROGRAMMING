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
//                string[] line = Console.ReadLine().Split(' ');
//                double len = double.Parse(line[0]);
//                double radious = double.Parse(line[0]);
//                double a = Math.Floor(Math.Sqrt(2 * Math.Pow(len, 2)));
//                double r = Math.Floor(radious);
//                if (r==a)
//                    Console.WriteLine("Yes");
//                else
//                    Console.WriteLine("No");
//            }
//        }
//    }
//}