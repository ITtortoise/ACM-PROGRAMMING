//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP15Filter
//    {
//        static void Main(String[] args)
//        {
//            int T = int.Parse(Console.ReadLine());
//            while (T-- > 0)
//            {
//                int f = 0, cnt = 0, pos = -1;
//                var list = new List<int>();
//                string lines = Console.ReadLine();
//                string lines2 = lines;
//                char[] line = lines.ToCharArray();
//                for (int i = 0; i < line.Length; i++)
//                {

//                    if (lines[i] == '0' && f == 0)
//                    {
//                        f = 1;
//                        list.Add(i);
//                    }
//                    else if (f == 1)
//                    {
//                        if (lines[i] >= 48 && lines[i] <= 57)
//                        {
//                            list.Add(i);
//                            if (list.Count == 11) break;
//                        }
//                    }

//                }
//                if (f == 1)
//                    for (int i = 0; i < list.Count; i++)
//                        line[list[i]] = '*';

//                lines2 = lines2.ToLower();
//                string ga = "gmail", ya = "yahoo", ho = "hotmail", li = "live",
//                    ao = "aol", fa = "facebook", ro = "rocketmail", zo = "zoho", ym = "ymail";
//                bool b = lines2.Contains(ga);
//                if (b)
//                {
//                    int index = lines2.IndexOf(ga);
//                    if (index >= 0)
//                    {
//                        int x = 0;
//                        for (int h = index; x < ga.Length; h++)
//                        {
//                            line[h] = '*';
//                            x++;
//                        }
//                    }

//                }
//                bool a = lines2.Contains(ya);
//                if (a)
//                {
//                    int index = lines2.IndexOf(ya);
//                    if (index >= 0)
//                    {
//                        int x = 0;
//                        for (int h = index; x < ya.Length; h++)
//                        {
//                            line[h] = '*';
//                            x++;
//                        }
//                    }

//                }
//                bool o = lines2.Contains(ho);
//                if (o)
//                {
//                    int index = lines2.IndexOf(ho);
//                    if (index >= 0)
//                    {
//                        int x = 0;
//                        for (int h = index; x < ho.Length; h++)
//                        {
//                            line[h] = '*';
//                            x++;
//                        }
//                    }

//                }
//                bool d = lines2.Contains(li);
//                if (d)
//                {
//                    int index = lines2.IndexOf(li);
//                    if (index >= 0)
//                    {
//                        int x = 0;
//                        for (int h = index; x < li.Length; h++)
//                        {
//                            line[h] = '*';
//                            x++;
//                        }
//                    }

//                }
//                bool e = lines2.Contains(ao);
//                if (e)
//                {
//                    int index = lines2.IndexOf(ao);
//                    if (index >= 0)
//                    {
//                        int x = 0;
//                        for (int h = index; x < ao.Length; h++)
//                        {
//                            line[h] = '*';
//                            x++;
//                        }
//                    }

//                }
//                bool g = lines2.Contains(fa);
//                if (g)
//                {
//                    int index = lines2.IndexOf(fa);
//                    if (index >= 0)
//                    {
//                        int x = 0;
//                        for (int h = index; x < fa.Length; h++)
//                        {
//                            line[h] = '*';
//                            x++;
//                        }
//                    }

//                }
//                bool u = lines2.Contains(ro);
//                if (u)
//                {
//                    int index = lines2.IndexOf(ro);
//                    if (index >= 0)
//                    {
//                        int x = 0;
//                        for (int h = index; x < ro.Length; h++)
//                        {
//                            line[h] = '*';
//                            x++;
//                        }
//                    }

//                }
//                bool v = lines2.Contains(zo);
//                if (v)
//                {
//                    int index = lines2.IndexOf(zo);
//                    if (index >= 0)
//                    {
//                        int x = 0;
//                        for (int h = index; x < zo.Length; h++)
//                        {
//                            line[h] = '*';
//                            x++;
//                        }
//                    }

//                }
//                bool z = lines2.Contains(ym);
//                if (z)
//                {
//                    int index = lines2.IndexOf(ym);
//                    if (index >= 0)
//                    {
//                        int x = 0;
//                        for (int h = index; x < ym.Length; h++)
//                        {
//                            line[h] = '*';
//                            x++;
//                        }
//                    }

//                }



//                int cntt = 0, j = 0;
//                for (int i = 0; i < lines.Length; i++)
//                {
//                    if (line[i] == '@')
//                    {
//                        for (j = i; j >= 0; j--)
//                        {
//                            if (line[j] != ' ')
//                            {
//                                line[j] = '*';
//                                cntt++;
//                            }
//                            if (cntt == 10) break;
//                        }
//                    }
//                    if (cntt > 0) break;


//                    if (line[i] == 'A' || line[i] == 'a')
//                    {
//                        while (i < line.Length)
//                        {
//                            if (line[i + 1] == 't' || line[i + 1] == 'T')
//                            {
//                                pos = i + 1;
//                                break;
//                            }
//                            else if (line[i + 1] != ' ') break;
//                            i++;
//                        }
//                    }
//                    if (pos > 0)
//                    {
//                        int c = 0;
//                        for (int p = pos; p >= 0; p--)
//                        {
//                            if (c == 10) break;
//                            if (line[p] != ' ')
//                            {
//                                line[p] = '*';
//                                c++;
//                            }
//                        }

//                    }

//                }
//                for (int k = 0; k < lines.Length; k++)
//                    Console.Write(line[k]);
//                Console.WriteLine();

//            }
//        }
//    }
//}
