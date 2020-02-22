//using System;
//using System.Collections.Generic;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP_13_Banglawash
//    {
//        static void Main(string[] args)
//        {
//            int t = int.Parse(Console.ReadLine());

//            for (int i = 0; i < t; i++)
//            {
//                int[] match1 = Array.ConvertAll(Console.ReadLine().Split(), e => int.Parse(e));
//                int fbd1 = match1[0], fbd2 = match1[1], fpak1 = match1[2], fpak2 = match1[3];

//                int[] match2 = Array.ConvertAll(Console.ReadLine().Split(), e => int.Parse(e));
//                int sbd1 = match2[0], sbd2 = match2[1], spak1 = match2[2], spak2 = match2[3];

//                if (fbd1 + fbd2 > fpak1 + fpak2 && sbd1 + sbd2 > spak1 + spak2)
//                    Console.WriteLine("Banglawash");
//                else 
//                    Console.WriteLine("Miss");
//            }
//        }
//    }
//}

