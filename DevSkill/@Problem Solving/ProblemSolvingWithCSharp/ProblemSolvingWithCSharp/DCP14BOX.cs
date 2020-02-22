//using System;
//using System.Collections.Generic;
//using System.Text;
//namespace ProblemSolvingWithCSharp
//{
//    class DCP14BOX
//    {
//        static void Main(string[] args)
//        {
//            int t = int.Parse(Console.ReadLine());
//            while (t-- > 0)
//            {
//                double[] val = Array.ConvertAll(Console.ReadLine().Split(), e => double.Parse(e));
//                double val1 = val[0] * val[0], val2 = val[1] * val[1], val3 = val[2] * val[2];
//                double sum = val1 + val2 + val3;
//                double d = Math.Sqrt(sum);
//                Console.WriteLine(String.Format("{0:0.00}", d));
//            }
//        }
//    }
//}
