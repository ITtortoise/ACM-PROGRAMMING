using System;
using System.Collections.Generic;
using System.Numerics;
using System.Text;

namespace Codeforces
{
    class _616A
    {
        static void Main(string[] args)
        {
            int one=0, two=0;
            string s1 = Console.ReadLine();
            string s2 = Console.ReadLine();

            string val1 = s1.TrimStart('0');
            string val2 = s2.TrimStart('0');

            if (val1.Length > val2.Length) Console.WriteLine(">");
            else if (val1.Length < val2.Length) Console.WriteLine("<");
            else
            {
               
                for (int i= 0; i < val1.Length; i++)
                {
                    if(Convert.ToInt32(val1[i]) > Convert.ToInt32(val2[i]))
                    {
                        one = 1;
                        break;
                    }
                    if (Convert.ToInt32(val1[i]) > Convert.ToInt32(val2[i]))
                    {
                        two = 1;
                        break;
                    }
                } 
                if(one==1)
                    Console.WriteLine(">");
                else if(two==1)
                    Console.WriteLine("<");
                else
                    Console.WriteLine("=");
            }
           
        }
    }
}
