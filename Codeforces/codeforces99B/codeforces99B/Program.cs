using System;

namespace codeforces99B
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string s = Console.ReadLine();
            for(int i=2;i<=n;i++)
            {
                if(n%i==0)
                {
                    s= Reverse(s.Substring(0, i)) + s.Substring(i);
                }
            }
            Console.WriteLine(s);
        }
        private static string Reverse(string str)
        {
            string res = "";
            for (int i = 0; i < str.Length; i++)
                res = str[i] + res;
           // Console.WriteLine(res);
            return res;
        }
    }
}
