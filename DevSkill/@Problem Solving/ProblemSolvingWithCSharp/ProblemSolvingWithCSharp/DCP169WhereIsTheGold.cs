//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP169WhereIsTheGold
//    {
//        static int n, m;
//        static int[,] vis = new int[101, 101];
//        static char[,] G = new char[101, 101];
//        static int[] dx = { -1, -1, -1, 0, 0, 1, 1, 1 };
//        static int[] dy = { -1, 0, 1, -1, 1, -1, 0, 1 };
       
//        static void Main(String[] args)
//        {
//            int T = int.Parse(Console.ReadLine());
//            for (int t = 1; t <= T; t++)
//            {
//                string[] line = Console.ReadLine().Split(' ');
//                n = int.Parse(line[0]);
//                m = int.Parse(line[1]);

//                for (int i = 0; i < n; i++)
//                {
//                    for (int j = 0; j < m; j++)
//                        vis[i, j] = 0;
//                }

//                for (int i = 0; i < n; i++)
//                {
//                    string s = Console.ReadLine();
//                    for (int j = 0; j < m; j++)
//                        G[i, j] = s[j];

//                }
//                bool flag = false;
//                Console.WriteLine($"Case {t}:");
//                for(int i = 0; i < n; i++)
//                {
//                    for(int j = 0; j < m; j++)
//                    {
//                        if (G[i, j] == '$')
//                        {
//                          flag = true;
//                          Console.WriteLine((i+1)+","+(j+1));
//                        }
                            
//                    }
//                }
//                if (!flag) 
//                    Console.WriteLine("No Gold Found");
//            }
//        }
//    }
//}