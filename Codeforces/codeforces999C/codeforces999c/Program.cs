using System;
using System.Collections.Generic;
namespace codeforces999c
{
    class Program
    {
        static void Main(string[] args)
        {

            int[] fr1 = new int[1000001];
            var list = new List<int>();
            int[] nk = Array.ConvertAll(Console.ReadLine().Split(), e => int.Parse(e));
            int n = nk[0];
            int k = nk[1];
            string s1 = Console.ReadLine();
            char[] s = s1.ToCharArray();
            for (int i = 0; i < n; i++)
                fr1[i] = -1;


            for (int i = 0; i < n; i++)
            {
                int ctr = 1;
                for (int j = i + 1; j < n; j++)
                {
                    if (s[i] == s[j])
                    {
                        ctr++;
                        fr1[j] = 0;
                    }
                }

                if (fr1[i] != 0)
                {
                    fr1[i] = ctr;
                }
            }
            SortedDictionary<char, int> map = new SortedDictionary<char, int>
            {
            };


            for (int i = 0; i < n; i++)
            {
                if (fr1[i] > 0)
                {
                    map.Add(s[i], fr1[i]);
                }
            }
            int k1 = 0;
            int f = 0;
            foreach (var pair in map)
            {
                int cnt = 0;
                char key = pair.Key;
                int value = pair.Value;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == key)
                    {
                        if (k1 == k)
                        {
                            f = 1;
                            break;
                        }
                        //list.Add(i);
                        // s = s.Replace('*',key);
                        //Console.WriteLine("{0}-->{1}", key, i);
                        s[i] = '*';
                        ////Console.WriteLine(s);
                        cnt++; k1++;
                        if (cnt == value) break;
                    }

                }
                if (f == 1) break;

            }
            for (int i = 0; i < n; i++)
            {
                if (s[i] != '*')
                    Console.Write(s[i]);
            }




        }
    }
}