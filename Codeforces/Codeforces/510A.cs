//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    class _510A
//    {
//        static void Main(string[] args)
//        {
//            var line=Console.ReadLine().Split(' ');
//            int n = int.Parse(line[0]);
//            int m = int.Parse(line[1]);
//            int cnt = 1;
//            for(int i = 1; i <= n; i++)
//            {   
//                if(i%2!=0)
//                {
//                    for(int j=1;j<=m;j++)
//                        Console.Write("#");
//                }
//                else
//                {
//                   if(cnt%2!=0)
//                    {
//                        for (int j = 1; j < m; j++)
//                         Console.Write("."); 
//                        Console.Write("#");
//                        cnt++;
//                    }
//                    else if (cnt % 2 == 0)
//                    { 
//                        Console.Write("#");
//                        for (int j = 1; j < m; j++)
//                            Console.Write(".");
                       
//                        cnt++;
//                    }
//                }
//                Console.WriteLine();
//            }


//        }
//    }
//}
