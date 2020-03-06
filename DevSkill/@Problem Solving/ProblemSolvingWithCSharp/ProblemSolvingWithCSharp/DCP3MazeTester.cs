using System;
using System.Collections.Generic;
using System.Text;

namespace ProblemSolvingWithCSharp
{
    class DCP3MazeTester
    {
       
        class DFS
        {
            static int n, m;
            static bool f = false;
            static int[,] vis = new int[30, 30];
            static int[,] G = new int[30, 30];
            static int[] dx = { -1, 0, 0, 1 };
            static int[] dy = { 0, -1, 1, 0 };
            static bool ff = false, f = false, flag = false;

            static void Dfs(int x, int y)
            {

                vis[x, y] = 1;

                for (int i = 0; i < 4; i++)
                {
                    int nx = x + dx[i];
                    int ny = y + dy[i];

                    if (nx >= 0 && ny >= 0 && nx < n && ny < m && G[nx, ny] != '|' && G[nx, ny] != '-' && G[nx, ny] != 'X' && vis[nx, ny] == 0)
                    {
                        if (G[nx, ny] == 'G')
                            f = true;
                        Dfs(nx, ny);
                    }

                }

            }
            static void Main(string[] args)
            {
                while (true)
                {
                    n = 30;
                    m = 30;

                    for (int i = 0; i < n; i++)
                    {
                        for (int j = 0; j < m; j++)
                        {
                            vis[i, j] = 0;
                        }
                    }
                    for (int i = 0; i < n; i++)
                    {
                        for (int j = 0; j < m; j++)
                        {
                            G[i, j] = 0;
                        }
                    }
                    for (int i = 0; i < n; i++)
                    {
                        string s = Console.ReadLine();
                        if (string.IsNullOrEmpty(s))
                        {
                            ff = true;
                            break;
                        }

                        for (int j = 0; j < m; j++)
                            G[i, j] = s[j];
                    }
                    if (ff == true) break;

                    for (int i = 0; i < n; i++)
                    {
                        for (int j = 0; j < m; j++)
                        {
                            if (G[i, j] == 'P' && vis[i, j] == 0)
                                Dfs(i, j);
                        }
                    }
                    if (f == true)
                        Console.WriteLine("Possible");
                    else
                        Console.WriteLine("Impossible");
                  ff = false, f = false, flag = false;

                }

            }
        }
    }
}