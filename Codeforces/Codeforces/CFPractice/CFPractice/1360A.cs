using System;
using System.Collections.Generic;
using System.Text;

namespace CFPractice
{
    class _1360A
    {
        static void Main(string[] args)
        {
            var map = new Dictionary<int, int>();
            for (int i = 1; i <= 200; i++)
                map[i] = 0;
            for (int i = 2; i <= 200; i++)
                Console.WriteLine($"{i}:{ i*i}");
                //map[i * i] = 1;
           
            int T = int.Parse(Console.ReadLine());
            while (T-- > 0)
            {
                var line = Console.ReadLine().Split(' ');
                var a = int.Parse(line[0]);
                var b = int.Parse(line[1]);
                int s = 1;
                s = (a * b) + (a * b);
                while (map[s] != 1)
                {
                    s++;
                }
                Console.WriteLine(s);

            }

        }
    }
}
