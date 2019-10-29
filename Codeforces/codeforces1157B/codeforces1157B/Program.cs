using System;
using System.Collections.Generic;

namespace codeforces1157B
{
    class Program
    {
        static void Main(string[] args)
        {
            long num = long.Parse(Console.ReadLine());
            string n = Console.ReadLine();
            var arr = Array.ConvertAll(Console.ReadLine().Split(), e => (long.Parse(e)));
            var mp = new long[10];
              
            for (int i = 1; i < 10; i++)
             mp[i] = arr[i - 1];

            int f = 0;
            for(int i=0;i<n.Length;i++)
            {
                long val = n[i] - '0';
          
                while(mp[val]>val)
                {
                    Console.Write(mp[val]);
                    i++;
                    val = n[i] - '0';
                    f = 1;
                   
                }
                if(f==1||f==0)
                Console.Write(n[i]);

                //Console.Write(n[i]);

            }
         }
    }
}
