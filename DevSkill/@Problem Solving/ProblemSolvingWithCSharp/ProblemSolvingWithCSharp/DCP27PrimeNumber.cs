//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP27PrimeNumber
//    {
       
//        static void Main(string[] args)
//        {
//            int[] arr = new int[10009];
//            for (int i = 0; i < 10009; i++) arr[i] = 0;
//            arr[0] = 1; arr[1] = 1;
//            for (int i = 2; i < Math.Sqrt(10009); i++)
//            {
//                if (arr[i] == 0)
//                {
//                    for (int j = i * i; j < 10009; j += i)
//                        arr[j] = 1;
//                }
//            }
//            //for (int i = 0; i < 100; i++) Console.WriteLine(i+" "+arr[i]);
//            int T = int.Parse(Console.ReadLine());
//            while (T-- > 0)
//            {
//                int n = int.Parse(Console.ReadLine());
//                if (arr[n] == 0)
//                    Console.WriteLine("Yes");
//                else if(arr[n]==1)
//                    Console.WriteLine("No");
//            }
//        }
//    }
//}
