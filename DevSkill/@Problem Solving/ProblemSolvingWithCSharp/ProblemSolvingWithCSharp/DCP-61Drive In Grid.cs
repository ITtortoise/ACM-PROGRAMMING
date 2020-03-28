//using System;
//using System.Collections.Generic;
//using System.Text;
//using System.IO;
//using Microsoft.CSharp;
//using System.Numerics;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP_61Drive_In_Grid
//    {
//        public static int GCD(int p, int q)
//        {
//            if (q == 0)
//            {
//                return p;
//            }

//            int r = p % q;

//            return GCD(q, r);
//        }
//        static void Main(string[] agrs)
//        {
//            int T = int.Parse(Console.ReadLine());
//            while (T-- > 0)
//            {
//                var line = Console.ReadLine().Split(' ');
//                int x = int.Parse(line[0]);
//                int y = int.Parse(line[1]);
                
//                int min = Math.Min(x, y);
//                int max = Math.Max(x, y);
//                int[] arr = new int[100];
//                int[] arr2 = new int[100]; 
//                int j = 0,k=0;
//                for (int i = min + 1; i <= x + y; i++) arr[j++] = i;
//                for (j = 2; j <= max; j++) arr2[k++] = j;

//                for (k = 0; k <max-1; k++)
//                {
//                    for (int i = 0; i < x + y - min; i++)
//                    {
//                        int divisor = GCD(arr[i], arr2[k]);
//                        arr[i] = arr[i] / divisor;
//                        arr2[k] = arr2[k] / divisor;
//                    }
//                }
//                int sum = 1, sum2 = 1;
//                for (int i = 0; i < x + y - min; i++)
//                    sum = sum * arr[i];
//                for (int i = 0; i < max - 1; i++)
//                    sum2 = sum2 * arr2[i];
//                Console.WriteLine(sum/sum2);

//            }
//        }
//    }
//}
