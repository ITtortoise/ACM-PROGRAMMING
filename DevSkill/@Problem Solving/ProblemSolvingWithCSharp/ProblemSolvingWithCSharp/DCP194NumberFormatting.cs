//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP194NumberFormatting
//    {
//        static void Main(string[] args)
//        {
//            int T = int.Parse(Console.ReadLine());
//            while (T-- > 0)
//            {
//                var dic = new SortedDictionary<string, string>();
//                dic["011"] = "Citycell";
//                dic["015"] = "Teletalk";
//                dic["016"] = "Airtel";
//                dic["017"] = "Grameenphone";
//                dic["018"] = "Robi";
//                dic["019"] = "Banglalink";

//                string line = Console.ReadLine();
//                var linechar = line.ToCharArray();
//                string Operator= "";
                
//                    if (linechar[0] == '8' && linechar[1] == '8')
//                    {
//                        Operator += linechar[2];
//                        Operator += linechar[3];
//                        Operator += linechar[4];
//                        Console.WriteLine(line + " " + dic[Operator]);
//                    }
//                    else
//                    {
//                        Operator += linechar[0];
//                        Operator += linechar[1];
//                        Operator += linechar[2];
//                        Console.WriteLine("88"+line + " " + dic[Operator]);
//                    }
                

//            }
//        }
//    }
//}
