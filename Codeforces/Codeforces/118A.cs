//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    class _118A
//    {
//        static void Main(string[] args)
//        {
//            var line = Console.ReadLine();
//             line = line.ToLower();
//            var linearray = line.ToCharArray();
//            for (int i = 0; i < line.Length; i++)
//            {
//                if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u'||line[i]=='y')
//                {
//                    linearray[i] = '@';
//                }
//            }
//            for (int i = 0; i < line.Length; i++)
//            {
//                if (linearray[i] != '@')
//                    Console.Write("." + line[i]);
//            }

//        }

        
//    }
//}
