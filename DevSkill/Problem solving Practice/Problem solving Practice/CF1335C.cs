using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.IO.Pipes;
using System.Linq;
using System.Text;

namespace Problem_solving_Practice
{
    class CF1335C
    {
        public static void Main(string[] args)
        {
            int test = int.Parse(Console.ReadLine());
            while (test-- > 0)
            {
                int n = int.Parse(Console.ReadLine());
                var line = Console.ReadLine().Split(' ');
                var map = new Dictionary<int, int>();
                for(int i = 0; i < n; i++)
                {
                    int val = int.Parse(line[i]);
                    if (map.ContainsKey(val))
                    {
                        map[val]++;
                    }
                    else
                        map[val] = 1;
                }
                int uniq = map.Count-1;
                int maxoccur = -1;
                //Console.WriteLine(uniq);
                foreach (var item in map)
                {
                     maxoccur = Math.Max(maxoccur,item.Value);
                    //Console.WriteLine($"{item.Key} ");
                }
                 
                if (Math.Abs(uniq - maxoccur) > 1) uniq += 1;
                int ans = Math.Min(uniq, maxoccur);
                Console.WriteLine(ans);
            }
        }
    }
}
