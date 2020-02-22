//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP20BacktoSchool
//    {
//        static void Main(string[] args)
//        {
//            int T = int.Parse(Console.ReadLine());
//            for(int i=1;i<=T;i++)
//            {
//                var values = Array.ConvertAll(Console.ReadLine().Split(), e => double.Parse(e));
//                double Cx = Convert.ToInt32(values[0]);
//                double Cy = Convert.ToInt32(values[1]);
//                double R = Convert.ToInt32(values[2]);
//                double Px = Convert.ToInt32(values[3]);
//                double Py = Convert.ToInt32(values[4]);

//                double distance;
//                distance = Math.Sqrt((Px - Cx) * (Px - Cx) + (Py - Cy) * (Py - Cy));
//                if (distance == R)
//                    Console.WriteLine($"Case {i}: OnCircle");
//                else if (distance > R)
//                    Console.WriteLine($"Case {i}: Outside");
//                else 
//                    Console.WriteLine($"Case {i}: Inside");

//            }
//        }
//    }
//}
