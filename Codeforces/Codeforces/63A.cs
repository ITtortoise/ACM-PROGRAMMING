//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    class _63A
//    {
//        static void Main(string[] args)
//        {
//            var rat = new List<string>(); var womenchild = new List<string>();
//            var men = new List<string>(); var others = new List<string>();
//            string captainName="";
//            int n = int.Parse(Console.ReadLine());
//            while (n-->0)
//            {
//                var line = Console.ReadLine().Split(' ');
//                var name = line[0]; var type = line[1];

//                if (type == "rat") 
//                    rat.Add(name);
//                else if (type == "woman" || type == "child")
//                    womenchild.Add(name);
//                else if (type == "man")
//                    men.Add(name);
//                else if (type == "captain")
//                    captainName = name;
//                else
//                    others.Add(name);
//            }
//            if (rat.Count > 0)
//            {
//                for(int i=0;i<rat.Count;i++)
//                    Console.WriteLine(rat[i]);
//            }
//            if (womenchild.Count > 0)
//            {
//                for (int i = 0; i < womenchild.Count; i++)
//                    Console.WriteLine(womenchild[i]);
//            }
//            if (men.Count > 0)
//            {
//                for (int i = 0; i < men.Count; i++)
//                    Console.WriteLine(men[i]);
//            }
//            if (others.Count > 0)
//            {
//                for (int i = 0; i < others.Count; i++)
//                    Console.WriteLine(others[i]);
//            }
            
//            Console.WriteLine(captainName);
//        }
//    }
//}
