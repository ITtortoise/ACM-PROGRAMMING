using System;

namespace codeforcses1141A
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] nm = Array.ConvertAll(Console.ReadLine().Split(' '), v => int.Parse(v));
            int m = nm[0];
            int n = nm[1];
            int r = 0;
            int i = n / m;
            // Console.WriteLine(i);
            while (i % 2 == 0)
            {
                //Console.WriteLine(i);
                i = i / 2;
                r++;
            }
            while (i % 3 == 0)
            {
                //Console.WriteLine(i);
                i = i / 3;
                r++;
            }

            if(i==1&&n%m==0)
            Console.WriteLine(r);
            else
                Console.WriteLine(-1);
     
               


        }
    }
}