//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP_3MazeTester
//    {
//        class BFS
//        {
//            static int n, m;
//            static int[,] vis = new int[50, 50];
//            static int[,] G = new int[50, 50];
//            static int[] dx = { -1, 0, 0, 1 };
//            static int[] dy = { 0, -1, 1, 0 };
//            static bool ff = false, f = false, flag = false;
//            static void Bfs(int a, int b)
//            {
//                var Q = new Queue<KeyValuePair<int, int>>();
//                vis[a, b] = 1;
//                Q.Enqueue(new KeyValuePair<int, int>(a, b));
//                while (Q.Count > 0)
//                {
//                    var xy = Q.Dequeue();
//                    int x = xy.Key;
//                    int y = xy.Value;
//                    for (int k = 0; k < 4; k++)
//                    {
//                        int nx = x + dx[k];
//                        int my = y + dy[k];
//                        if (nx >= 0 && my >= 0 && nx < n && my < m && G[nx, my] != '|' && G[nx, my] != 'X' && G[nx, my] != '-' && vis[nx, my] == 0)
//                        {
//                            if(G[nx, my] =='G')
//                            {
//                                f = true;
//                                break;
//                            }
//                            Q.Enqueue(new KeyValuePair<int, int>(nx, my));
//                            vis[nx, my] = 1;
//                        }
//                    }
//                    if (f) break;

//                }
//            }
//            static void Main(string[] args)
//            {
              
//                while (true)
//                {
                    
//                    n = 30;
//                    m = 30;

//                    for (int i = 0; i < n; i++)
//                    {
//                        for (int j = 0; j < m; j++)
//                        {
//                            vis[i, j] = 0;
//                        }
//                    }
//                    for (int i = 0; i < n; i++)
//                    {
//                        for (int j = 0; j < m; j++)
//                        {
//                            G[i, j] = 0;
//                        }
//                    }
//                    for (int i = 0; i < n; i++)
//                    {
//                        string s = Console.ReadLine();
//                        if (string.IsNullOrEmpty(s))
//                        {
//                            ff = true;
//                            break;
//                        }

//                        for (int j = 0; j < m; j++)
//                            G[i, j] = s[j];
//                    }
//                    if (ff == true) break;

//                    for (int i = 0; i < n; i++)
//                    {
//                        for (int j = 0; j < m; j++)
//                        {
//                            if (G[i, j] == 'P' && vis[i, j] == 0)
//                            {
//                                Bfs(i, j);
//                                flag = true;
//                                break;
//                            }
//                        }
//                        if (flag) break;
//                    }
//                    if (f == true)
//                        Console.WriteLine("Possible");
//                    else
//                        Console.WriteLine("Impossible");

//                    ff = false; f = false; flag = false;
//                }

//            }
//        }
//    }
//}
