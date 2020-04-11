//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    class _711A
//    {
//        static void Main()
//        {
//            int n = int.Parse(Console.ReadLine());
//            var accepted = "OO";
//            var list = new List<string>();
//            int f = 0;
//            for(int i = 0; i < n; i++)
//            {
//                var line = Console.ReadLine();
//                var option1 = line.Substring(0, 2);
//                var option2 = line.Substring(3, 2);
//                if ( (option1 == accepted || option2 == accepted) && f==0)
//                {
//                    if (option1 == accepted)
//                        list.Add("++|" + option2);
//                    else 
//                        list.Add(option1 + "|++");
//                    f = 1;
//                }
//                else
//                    list.Add(line);

//            }
//            if(f==1)
//            {
//                Console.WriteLine("YES");    
//                for (int i = 0; i < n; i++)
//                    Console.WriteLine(list[i]);
//            }
//            else
//                Console.WriteLine("NO");
            
            
//        }
//    }
//}
