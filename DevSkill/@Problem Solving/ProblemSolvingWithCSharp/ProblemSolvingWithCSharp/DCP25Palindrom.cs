//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP25Palindrom
//    {
//        static void Main(string[] args)
//        {
//            int T = int.Parse(Console.ReadLine());
//            while (T-- > 0)
//            {
//                string line = Console.ReadLine();
//                line = line.ToLower();
//                string revline = "";
//                int l = line.Length;
//                for (int i =l-1; i>=0; i--)
//                {
//                    revline += line[i];
//                }
//                bool b = line.Equals(revline);
//                if(b)
//                    Console.WriteLine("Yes");
//                else
//                    Console.WriteLine("No");
//            }
//        }
//    }
//}
