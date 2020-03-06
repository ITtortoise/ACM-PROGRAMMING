using System;
using System.Collections.Generic;
using System.Text;
using System.Collections;
using System.Linq;
namespace Codeforces
{
    class _94A
    {
        static void Main(string[] agrs)
        {
            var line = Console.ReadLine();
            var dic = new Dictionary<string, int>();
            int k = 0;
            for(int i=0;i<80;i+=10)
            {
                //Console.WriteLine(i);
                var input = line.Substring(i, 10);
                Console.WriteLine(input+" "+k);
                if (!dic.ContainsKey(input))
                {
                    dic[input] = k;
                    k++;
                }
           
            }
            for (int i = 1; i <= 10; i++)
            {
                var check = Console.ReadLine();
                Console.WriteLine(dic["check"]);

            }
        }
    }
}
