//using System;
//using System.Collections.Generic;

//namespace ProblemSolvingWithCSharp
//{
//    class Getnumber
//    {
//      static void Main(string[] args)
//        {
//            int T=int.Parse(Console.ReadLine());
//            int test;
//            for ( test = 1; test <= T; test++)
//            {
//                var s = new List<string>();
//                var S = new List<string>();
//                var SSS = new List<string>();
//                var F = new List<string>();
//                var FFF = new List<string>();
//                var SS = new List<int>();
//                var FF = new List<int>();

//                int n = int.Parse(Console.ReadLine());

//                for (int i = 0; i < n; i++)
//                {
//                    s.Add(Console.ReadLine());
//                }

//                for (int i = 0; i < n; i++)
//                {
//                    string a = Console.ReadLine();
//                    string b = "";
//                    string name = "";
//                    string ans = "";
//                    string res = "";
//                    for (int l = 0; l < a.Length; l++)
//                    {
//                        if (a[l] == ',')
//                        {
//                            for (int x = l + 1; x < a.Length; x++)
//                                name += a[x];
//                            l = a.Length;
//                        }
//                        else b += a[l];
//                    }

//                    int count = 0;

//                    for (int j = 0; j < n; j++)
//                    {
//                        string m = s[j];
//                        bool flag = false;
//                        for (int k = 0; k < m.Length; k++)
//                        {
//                            if (k >= 3 && k <= 6) continue;
//                            else
//                            {
//                                if (b[k] == m[k])
//                                    continue;
//                                else
//                                {
//                                    flag = true;
//                                    break;
//                                }
//                            }
//                        }

//                        if (!flag)
//                        {
//                            ++count;
//                            ans = b;
//                            res = m;

//                        }
//                    }
//                    if (name == "Success")
//                    {
//                        if (count > 1)
//                        {
//                            SS.Add(0);
//                            S.Add(ans);
//                            SSS.Add(res);
//                        }
//                        else
//                        {
//                            SS.Add(1);
//                            S.Add(ans);
//                            SSS.Add(res);
//                        }
//                    }
//                    else
//                    {
//                        if (count > 1)
//                        {
//                            FF.Add(0);
//                            F.Add(ans);
//                            FFF.Add(res);
//                        }
//                        else
//                        {
//                            FF.Add(1);
//                            F.Add(ans);
//                            FFF.Add(res);
//                        }

//                    }
//                }

//                Console.WriteLine($"Case: {test}");
//                Console.WriteLine("Success list");
//                for (int i = 0; i < S.Count; i++)
//                {
//                    if (SS[i]==1)                    
//                      Console.WriteLine($"{S[i]} : {SSS[i]}");                    
//                    else
//                       Console.WriteLine($"{S[i]} : Confused");
//                }
//                Console.WriteLine("Failed list");
//                for (int i = 0; i < F.Count; i++)
//                {
//                    if (FF[i] == 1)
//                        Console.WriteLine($"{F[i]} : {FFF[i]}");
//                    else
//                        Console.WriteLine($"{F[i]} : Confused");
//                }
//                string useless;
//                if(test<T)
//                    useless = Console.ReadLine();

//            }
//        }


//        }
//    }

