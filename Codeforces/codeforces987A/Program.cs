using System;
using System.Collections.Generic;

namespace codeforces987A
{
    class Program
    {
        static void Main(string[] args)
        {
            SortedDictionary < string,string> map =new SortedDictionary<string,string>();
            SortedDictionary<string,int> map2 = new SortedDictionary<string,int>();
            map.Add("purple", "Power");
            map.Add("green", "Time");
            map.Add("blue", "Space");
            map.Add("orange", "Soul");
            map.Add("red", "Reality");
            map.Add("yellow", "Mind");
            int n = int.Parse(Console.ReadLine());
            for(int i=0;i<n;i++)
            {
                string s = Console.ReadLine();
                map2.Add(s,1);
            }
            Console.WriteLine(6 - n);
            foreach (KeyValuePair<string,string> item in map)
            {
                string  s1=item.Key;
                //Console.WriteLine(s1);
                if (map2.ContainsKey(s1) == false)
                    Console.WriteLine(map[s1]);

            }
        }
    }
}
