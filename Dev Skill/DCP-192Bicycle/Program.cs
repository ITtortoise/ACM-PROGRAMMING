using System;
using System.Collections.Generic;
namespace DCP_192Bicycle
{
    class Program
    {
        static void Main(string[] args)
        {
            long T =long.Parse( Console.ReadLine());
            for(long t=1;t<=T;t++)
            {
                var myList = new List<KeyValuePair<long,long>>();
                long n = long.Parse(Console.ReadLine());
                for(long j=0;j<n;j++)
                {
                    long[] pr = Array.ConvertAll(Console.ReadLine().Split(' '), e => long.Parse(e));
                    long p = pr[0];
                    long r = pr[1];
                    myList.Add(new KeyValuePair<long,long>(p,r));
                }
                myList.Sort((x, y) => (x.Value.CompareTo(y.Value)));
               
               Console.WriteLine("Case {0}: {1} {2}",t,myList[0].Key,myList[0].Value);

                myList.Clear();
            }
        }
    }
}
