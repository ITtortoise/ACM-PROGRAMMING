//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP166POSSystem
//    {
//        static void Main(string[] args)
//        {
//            int T = int.Parse(Console.ReadLine());
//            for(int test = 1; test <= T; test++)
//            {
//                int N = int.Parse(Console.ReadLine());
//                double sum = 0;
//                while (N-- > 0)
//                {
//                    var line = Console.ReadLine().Split(' ');

//                    double Uprice = double.Parse(line[0]);
//                    int ammount = int.Parse(line[1]);
//                    sum = sum + (Uprice * ammount);
                 
//                }
//                int G = int.Parse(Console.ReadLine());

//                int ans =(int)(G - sum);
//                Console.WriteLine($"Case {test}: {ans}");
                
//            }
//        }
//    }
//}
