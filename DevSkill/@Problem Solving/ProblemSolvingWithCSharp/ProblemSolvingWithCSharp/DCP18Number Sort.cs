//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class Number_Sort
//    {
      
//        static void Main(string[] args)
//        {
//            int T = int.Parse(Console.ReadLine());
//            while (T-- > 0)
//            {
//                int n = int.Parse(Console.ReadLine());
//                decimal[] A = Array.ConvertAll(Console.ReadLine().Split(), e => decimal.Parse(e));

//                decimal temp;
//                for (int round = 1; round < n; round++)
//                {
//                    for (int i = 0; i <= n - 1 - round; i++)
//                    {
//                        if (A[i] > A[i + 1])
//                        {
//                            temp = A[i];
//                            A[i] = A[i + 1];
//                            A[i + 1] = temp;
//                        }
//                    }
//                }
//                for (int i = 0; i < n - 1; i++)
//                  Console.Write(A[i] + ",");
//                Console.WriteLine(A[n - 1]);
//            }
//        }
//    }
//}
