//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    public class _96A
//    {
//        static void  Main(string[] args)
//        {
//            string line = Console.ReadLine();
//            int i = 0; bool flag = false;
//            while (i < line.Length)
//            {
//                int zero = 0, one = 0;
//                for( i=i;i<line.Length;i++)
//                {
//                    if(line[i]=='0')
//                    zero++;
                   
//                    else break;
//                }
//               // Console.WriteLine($"zero {zero}");
//                if (zero >= 7)
//                {
//                    flag = true;
//                    break;
//                }
              
//                for (i = i; i < line.Length; i++)
//                {
//                    if (line[i] == '1')
//                        one++;
                    
//                    else break;
//                }
//                //Console.WriteLine($"one {one}");
//                if (one >= 7)
//                {
//                    flag = true;
//                    break;
//                }
               
//            }
//            if (flag == true) 
//                Console.WriteLine("YES");
//            else
//                Console.WriteLine("NO");
//        }
//    }
//}
