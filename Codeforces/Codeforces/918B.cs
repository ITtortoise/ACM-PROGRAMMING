//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    class _918B
//    {
//        static void Main(string[] args)
//        {
//            var mydic = new Dictionary<string, string>();
//            var nm = Console.ReadLine().Split(' ');
//            var n = int.Parse(nm[0]);
//            var m = int.Parse(nm[1]);
//            for (int i = 0; i < n; i++)
//            {
//                var line = Console.ReadLine().Split(' ');
//                var name = line[0];
//                var ip = line[1];
//                ip += ';';

//                if (!mydic.ContainsKey(ip))
//                    mydic.Add(ip, name);
                
//            }
//            for(int i = 0; i < m; i++)
//            {
//                var Line = Console.ReadLine().Split(' ');
//                Console.WriteLine(Line[0] + " " + Line[1] + " " + " #" + mydic[Line[1]]);
//            }

//        }
//    }
//}
