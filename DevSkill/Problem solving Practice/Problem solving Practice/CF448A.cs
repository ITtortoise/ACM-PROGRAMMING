//using System;
//using System.IO.Pipes;

//namespace Problem_solving_Practice
//{
//    class CF448A
//    {
//        static void Main(string[] args)
//        {
//            var cup = Console.ReadLine().Split(' ');
//            var madel = Console.ReadLine().Split(' ');
//            var n = int.Parse(Console.ReadLine());
//            int csum = 0, msum = 0;
//            for(int i = 0; i < 3; i++)
//            {
//                 csum += int.Parse(cup[i]);
//                 msum += int.Parse(madel[i]);
//            }
//            int ans = csum / 5;
//            if (csum % 5 != 0)
//                ans++;
//            ans += msum / 10;
//            if (msum % 10 != 0)
//                ans++;
//            if(ans <=n)
//                Console.WriteLine("YES");
//            else
//                Console.WriteLine("NO");
            
            
//        }
//    }
//}
