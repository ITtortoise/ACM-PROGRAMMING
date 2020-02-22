using System;
using System.Collections.Generic;
using System.Text;

namespace ProblemSolvingWithCSharp
{
    class DCP169WhereIsTheGold
    {
        static int n, m;
        static int[,] vis = new int[101,101];
        static char[,] G = new char[101,101];
        static bool f = false;
        static int[] dx = { -1, -1, -1, 0, 0, 1, 1, 1 };
        static int[] dy = { -1, 0, 1, -1, 1, -1, 0, 1 };
        static void Bfs(int a, int b)
        {
            var Q = new Queue<KeyValuePair<int, int>>();
            vis[a,b] = 1;
            Q.Enqueue(new KeyValuePair<int, int>(a, b));
            while (Q.Count > 0)
            {
                var kv = Q.Dequeue();
                int x =kv.Key;
                int y = kv.Value;
                for (int k = 0; k < 8; k++)
                {
                    int nx = x + dx[k];
                    int my = y + dy[k];
                    if (nx >= 0 && nx < n && my >= 0 && my < m && G[nx, my] != '#' && vis[nx, my]==0)
                    {
                        Q.Enqueue(new KeyValuePair<int, int>(nx, my));
                        vis[nx, my] = 1;
                        if (G[nx, my] == '$')
                        {
                            f = true;
                            nx += 1;my += 1;
                            Console.WriteLine(nx +"," + my);
                        }

                    }

                }              
                
            }
            if(!f)
                Console.WriteLine("No Gold Found");
            Q.Clear();
            f = false;
            
        }
        static void Main(String[] args)
        {
            int T = int.Parse(Console.ReadLine());
            for(int t=1;t<=T;t++)
            {
                string[] line = Console.ReadLine().Split(' ');
                n = int.Parse(line[0]);
                m = int.Parse(line[1]);

                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                        vis[i, j] = 0;
                }
                
                for (int i = 0; i < n; i++)
                {                       
                 string s= Console.ReadLine();
                   for(int j = 0; j < m; j++)
                       G[i, j] = s[j];
                                    
                }

                Console.WriteLine($"Case {t}:");
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        if (G[i, j] == '*' && vis[i, j] == 0)
                          Bfs(i, j);
                    }
                }

            }
        }
    }
}