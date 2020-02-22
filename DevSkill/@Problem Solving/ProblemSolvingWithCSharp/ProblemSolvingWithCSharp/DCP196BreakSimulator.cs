//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP196BreakSimulator
//    {
//        static void Main(string[] args)
//        {

//            int T = int.Parse(Console.ReadLine());
//            while(T-->0)
//            {
//                double[] vt = Array.ConvertAll(Console.ReadLine().Split(), e => (double.Parse(e)));
//                double v = vt[0];
//                double t = vt[1];

//                double ans = v / t;
//                Console.WriteLine(String.Format("-{0:0.00}", ans));
//                //Console.WriteLine("-"+Math.Round(ans,2));
                
//            }
//        }
//    }
//}