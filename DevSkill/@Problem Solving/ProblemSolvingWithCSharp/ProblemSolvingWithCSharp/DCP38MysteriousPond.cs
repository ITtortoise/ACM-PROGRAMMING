//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP38MysteriousPond
//    {

//        static void Main(string[] args)
//        {
         
//            long T = long.Parse(Console.ReadLine());
//            while (T-- > 0)
//            {
//                int n = int.Parse(Console.ReadLine());
//                var mydic = new SortedDictionary<long,string>();
//                long mn = 100000000000001, mx = -1;
//                for (long i = 0; i < n; i++)
//                {
//                    string[] line = Console.ReadLine().Split(' ');
//                    var name = line[0];
//                    long t = long.Parse(line[1]);
//                    mn = Math.Min(mn, t);
//                    mx = Math.Max(mx, t);
//                    mydic.Add(t, name);
//                }       
              
//                Console.WriteLine(mydic[mx]+" "+mydic[mn]); 

//            }
//        }
       
//    }
    
//}
