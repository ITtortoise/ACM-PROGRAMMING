using System;

namespace DCP_35_Square_Number
{
    class Program
    {
        static void Main(string[] args)
        {
            int tc = int.Parse(Console.ReadLine());

            for (int i = 1; i <= tc; i++)
            {
                var line = Console.ReadLine().Split(' ');
                int n = int.Parse(line[0]);

                int r = Convert.ToInt32(Math.Sqrt(n+0.00001));


                Console.Write("Case {0}: ", i);

                if (r * r == n)
                   Console.WriteLine("YES"); 
                else
                    Console.WriteLine("NO");


            }
        }
    }
}
