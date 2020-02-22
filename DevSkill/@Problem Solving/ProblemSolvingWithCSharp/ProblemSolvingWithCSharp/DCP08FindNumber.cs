//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class FindNumber
//    {
//        static void Main(string[] args)
//        {
//            int T = int.Parse(Console.ReadLine());
//            for (int test = 1; test <=T; test++)
//            {
//                int n = int.Parse(Console.ReadLine());

//                var List1 = new List<Tuple<string, string, string>>();
//                for (int i = 0; i < n; i++)
//                {
//                    string a = "", b = "";
//                    string num = Console.ReadLine();
//                    for (int j = 0; j < 11; j++)
//                    {
//                        if (j >= 0 && j <= 2) a += num[j];
//                        else if (j >= 7) b += num[j];
//                    }
//                    List1.Add(new Tuple<string, string, string>(a, b, num));
//                }
//                var List2 = new List<Tuple<string, string, string>>();
//                for (int i = 0; i < n; i++)
//                {
//                    string s1 = "", s2 = "", s3 = "";
//                    string numberwithverdict = Console.ReadLine();
//                    for (int t = 0; t < numberwithverdict.Length; t++)
//                    {
//                        if (t >= 0 && t <= 2) s1 += numberwithverdict[t];
//                        else if (t >= 7 && t <= 10) s2 += numberwithverdict[t];
//                        else if (t >= 12) s3 += numberwithverdict[t];
//                    }
//                    List2.Add(new Tuple<string, string, string>(s1, s2, s3));
//                }
//                //foreach (var item in List1)
//                //{
//                //    Console.WriteLine(item);
//                //}
//                //foreach (var item in List2)
//                //{
//                //    Console.WriteLine(item);
//                //}
//                var successList = new List<Tuple<string, string, string>>();
//                var FailList = new List<Tuple<string, string, string>>();
//                foreach (var val2 in List2)
//                {
//                    int cnt = 0;
//                    string originalnum = "", verdict = "Confushed";
//                    foreach (var val1 in List1)
//                    {
//                        if (val2.Item1 == val1.Item1 && val2.Item2 == val1.Item2)
//                        {
//                            originalnum = val1.Item3;
//                            cnt++;
//                        }

//                    }
//                    if (val2.Item3 == "Success")
//                    {
//                        if (cnt == 1)
//                            successList.Add(new Tuple<string, string, string>(val2.Item1, val2.Item2, originalnum));
//                        else
//                            successList.Add(new Tuple<string, string, string>(val2.Item1, val2.Item2, verdict));
//                    }

//                    else if (val2.Item3 == "Failed")
//                    {
//                        if (cnt == 1)
//                            FailList.Add(new Tuple<string, string, string>(val2.Item1, val2.Item2, originalnum));
//                        else
//                            FailList.Add(new Tuple<string, string, string>(val2.Item1, val2.Item2, verdict));
//                    }
//                }
//                Console.WriteLine($"Case: {test}");
//                Console.WriteLine("Success list");
//                foreach (var item in successList)
//                {
//                    Console.WriteLine(item.Item1 + "****" + item.Item2 + " : " + item.Item3);
//                }
//                Console.WriteLine("Failed list");
//                foreach (var item in FailList)
//                {
//                    Console.WriteLine(item.Item1 + "****" + item.Item2 + " : " + item.Item3);
//                }
//                string useless;
//                if (test < T)
//                    useless = Console.ReadLine();

//            }
//        }
//    }
//}
