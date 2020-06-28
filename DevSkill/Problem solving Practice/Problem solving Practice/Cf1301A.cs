//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Problem_solving_Practice
//{
//    class Cf1301A
//    {
//        public static void Main(string[] args)
//        {
//            int t = int.Parse(Console.ReadLine());
//            while (t-- > 0)
//            {
//                var a = Console.ReadLine();
//                var b = Console.ReadLine();
//                var c = Console.ReadLine();
//                int flag = 0;
//                for(int i = 0; i < a.Length; i++)
//                {
//                    if (a[i] == c[i] || b[i] == c[i]) continue;
//                    else
//                    {
//                        flag = 1;
//                        break;
//                    }
                    
//                }
//                if (flag == 1) Console.WriteLine("NO");
//                else Console.WriteLine("YES");

//            }
//        }
//    }
//}
