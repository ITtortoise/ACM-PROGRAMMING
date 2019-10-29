using System;
using System.Collections.Generic;
namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            long T = long.Parse(Console.ReadLine());
            for (long t = 1; t <= T; t++)
            {
                var myList = new List<KeyValuePair<long, long>>();

                long n = long.Parse(Console.ReadLine());
                for (long i = 0; i < n; i++)
                {
                    long[] pr = Array.ConvertAll(Console.ReadLine().Split(' '), e => long.Parse(e));
                    long price = pr[0];
                    long repair = pr[1];
                    myList.Add(new KeyValuePair<long, long>(price, repair));


                }
                myList.Sort((x, y) => (y.Value.CompareTo(x.Value)));
                Console.WriteLine("Sorted List...");
                foreach (var val in myList)
                {
                    Console.WriteLine(val);
                }


            }
        }
    }
}