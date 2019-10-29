using System;
using System.Collections.Generic;
namespace codeforces988B
{
    class Program
    {
        static void Main(string[] args)
        {
            var myList = new List<KeyValuePair<long,string>>();
            int n = int.Parse(Console.ReadLine());

            for(int i=0;i<n;i++)
            {
                string s = Console.ReadLine();
                long l = s.Length;
                myList.Add(new KeyValuePair<long,string>(l,s));
            }
            myList.Sort((x, y) => x.Value.Length.CompareTo(y.Value.Length));
            bool f =true;
            for(int i=1;i<n;i++)
            {
                f=myList[i].Value.Contains(myList[i-1].Value);
                if (f == false)
                    break;

            }
            if (!f)
                Console.WriteLine("NO");
            else
            {
                Console.WriteLine("YES");
                for (int i = 0; i < n; i++)
                    Console.WriteLine(myList[i].Value);
            }

        }
    }
}
