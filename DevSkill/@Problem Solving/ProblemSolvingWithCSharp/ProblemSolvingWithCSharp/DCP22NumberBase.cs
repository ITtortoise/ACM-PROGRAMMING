//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP22NumberBase
//    {
//        static void Main(string[] args)
//        {
//            var dic = new SortedDictionary<int, char>();
//            for (int i = 10; i < 36; i++)
//            {
//                dic.Add(i, (char)(i + 55));
//            }

//            int T = int.Parse(Console.ReadLine());                       
//            while (T-- > 0)
//            {
//                string[] line = Console.ReadLine().Split(',');
//                int n = int.Parse(line[0]);
//                int b = int.Parse(line[1]);
//                string result = "";
//                while (n >= b)
//                {
//                    int rem = n % b;
//                    n = n / b;
//                    if (rem > 10)
//                    {
//                        result += dic[rem];
//                    }
//                    else
//                    {
//                       result += rem.ToString();

//                    }
//                }
//                if (n > 10)
//                { 
//                   string final= result + "" + dic[n];
//                    for (int i = final.Length - 1; i >= 0; i--) 
//                        Console.Write(final[i]);
//                    Console.WriteLine();
//                }
//                else
//                {
//                    string final = result + "" +n.ToString();
//                    for (int i = final.Length - 1; i >= 0; i--)
//                        Console.Write(final[i]);
//                    Console.WriteLine();

//                }
                   
//            }
//        }
//    }
//}
