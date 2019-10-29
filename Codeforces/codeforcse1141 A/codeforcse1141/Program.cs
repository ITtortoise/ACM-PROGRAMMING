using System;

namespace codeforcse1141
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] nm = Array.ConvertAll(Console.ReadLine().Split(' '), e => int.Parse(e));
            int n = nm[0];
            int m = nm[1];
            int cnt = 0;
            int f = 0;

            

               while (true)
               {
                if (m % (n * 2) == 0)
                {
                    m = m / 2;
                    cnt++;
                }
                else if (m % (n * 3) == 0)
                {
                    m = m / 3;
                    cnt++;
                }
                else
                    break;
                    
               }
            if (cnt>0)
                Console.WriteLine(cnt);
            else if(n==m)
                Console.WriteLine(0);
            else
                Console.WriteLine(-1);

        }
    }
}
