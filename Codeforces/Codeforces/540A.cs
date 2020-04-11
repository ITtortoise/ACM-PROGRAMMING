//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    class _540A
//    {
//        static void Main()
//        {
//            int n = int.Parse(Console.ReadLine());
//            var line1 = Console.ReadLine();
//            var line2 = Console.ReadLine();
//            int sum = 0;
//            for(int i = 0; i < n; i++)
//            {
//                int x = Convert.ToInt32(line1[i]-'0');
//                int y = Convert.ToInt32(line2[i]-'0');

//                int val=Math.Abs(x-y);
//                int val2 = Math.Abs(9 - Math.Max(x,y) +Math.Min(x, y ) + 1);
//                sum = sum + Math.Min(val, val2);
//            }
//            Console.WriteLine(sum);
//        }
//    }
//}
