//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class Pagination
//    {
//        static void Main(string[] args)
//        {
//            int T = int.Parse(Console.ReadLine());
//            for(int t=1;t<=T;t++)
//            {
//                int p = int.Parse(Console.ReadLine());
//                Console.WriteLine($"Case {t}:");
//                while (true)
//                {
//                    int cp = int.Parse(Console.ReadLine());
//                    if (cp == 0) break;
//                    var list = new SortedSet<int>();
//                    var list1 = new SortedSet<int>();
//                    int mx = cp;
                   
//                    if (p > 5)
//                    {
//                        list.Add(1);
//                        list.Add(cp);

//                        for (int i = 1; ; i++)
//                        {
//                            if (list.Count == 6) break;
//                            if (cp + i <= p)
//                            {
//                                list.Add(cp + i);
//                                mx = Math.Max((cp + i), mx);
//                            }
//                            if (cp - i > 0)
//                            {
//                                list.Add(cp - i);
//                                mx = Math.Max((cp - i), mx);
//                            }

//                        }
//                        int c = 1;
//                        foreach (var item in list)
//                        {
//                            if(c<6)
//                                Console.Write(item+" ");
//                            else
//                                Console.Write(item);
//                            c++;
//                        }
//                        if (p > mx)
//                        {
//                            int cnt = 0;
//                            for (int i = p; i > mx; i--)
//                            {
//                                if (cnt == 5) break;
//                                cnt++;
//                                list1.Add(i);
//                            }
//                            Console.Write(" .....");
//                            foreach (var item in list1)
//                            {
//                                Console.Write(" " + item);
//                            }
//                        }

//                        Console.WriteLine();
//                    }
//                    else
//                    {
//                        for (int i = 1; i < p; i++)
//                            Console.Write(i + " ");
//                        Console.WriteLine(p);
//                    }
//                }
//            }
//        }
//    }
//}
