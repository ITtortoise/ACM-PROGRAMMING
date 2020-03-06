//using System;

//namespace Codeforces
//{
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            int z = 0, e = 0, r = 0, o = 0, n = 0, one = 0, zero = 0;
//            int N = int.Parse(Console.ReadLine());
//            var s = Console.ReadLine();
//            for (int i = 0; i < s.Length; i++)
//            {
//                if (s[i] == 'z') z++;
//                else if (s[i] == 'e') e++;
//                else if (s[i] == 'r') r++;
//                else if (s[i] == 'o') o++;
//                else if (s[i] == 'n') n++;
//            }
//            one = (Math.Min(Math.Min(o, n), e));
//            if (one > 0)
//            {
//                o = o - one;
//                n = n - one;
//                e = e - one;
//            }

//            zero = Math.Min((Math.Min(Math.Min(z, e), r)), o);
//            if (one > 0)
//            {
//                for (int i = 0; i < one-1; i++)
//                    Console.Write("1 ");
//                Console.WriteLine("1");
//            }
//            if (zero > 0)
//            { 
//                for (int i = 0; i <zero-1;i++)
//                Console.WriteLine("0 ");
//                Console.WriteLine("0");
//            }
            

//        }
//    }
//}
