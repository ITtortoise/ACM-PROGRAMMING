//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    class _746B
//    {
//        static void Main(string[] args)
//        {
//            int n = int.Parse(Console.ReadLine());
//            var lines = Console.ReadLine();
//            var line = lines.ToCharArray();
//            int length = line.Length;
//            var ans = new char[10000];
//            int x, y;
//            int mid = 0;
//            if (length % 2 == 0)
//                mid = length / 2 - 1;
//           else
//                mid = length / 2;

//            ans[mid] = line[0];
//            lines = lines.Remove(0, 1);
//            line = lines.ToCharArray();
//            x = mid;
//            y = mid;
           
//            while (lines.Length > 0)
//            {
//                if (lines.Length % 2 == 0)
//                {
//                    x--;
//                    ans[x] = line[0];
//                    lines=lines.Remove(0, 1);
//                    line = lines.ToCharArray();
                    
//                }
//                else
//                {
//                    y++;
//                    ans[y] = line[0];
//                    lines = lines.Remove(0, 1);
//                    line = lines.ToCharArray();
                   
//                }
                
//                //Console.WriteLine(lines +" "+lines.Length);
//            }
//            for(int i=0;i<n;i++)
//              ////Console.Write(ans[i]);

//        }
//    }
//}
