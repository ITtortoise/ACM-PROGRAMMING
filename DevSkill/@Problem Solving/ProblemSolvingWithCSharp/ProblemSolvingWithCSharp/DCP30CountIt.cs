//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP30CountIt
//    {
        
//        static void Main(string[] args)
//        {
//            int T = int.Parse(Console.ReadLine());
//            for(int j=1;j<=T;j++)
//            {
//                string s = Console.ReadLine();
//                int[] cal = new int[1000];
//                foreach (char t in s)
//                {
//                    cal[(int)t]++;
//                }
//                Console.WriteLine($"Case {j}:");
//                for (int i = 97; i <123; i++)
//                {
//                    if (cal[i] > 0)
//                        Console.WriteLine((char)i+" "+ cal[i]);                                         
//                }
//            }
//        }
//    }
//}
