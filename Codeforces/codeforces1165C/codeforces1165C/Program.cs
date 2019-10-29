using System;
using System.Collections.Generic;
namespace codeforces1165C
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            var map = new Dictionary<char,int>();
            string s = Console.ReadLine();
            string s2;
            //char[] charArr =s.ToCharArray();
            for (int i = 0; i < s.Length; i++)
            {
                if (i % 2 == 0)
                    Console.Write(s[i]);
                //if(map[s[i]] == 0)
                //{
                //    map[s[i]] = 1;
                //    s2

                //}
                

            }

        }
    }
}
