using System;

namespace The_Work_Is_Done
{
    class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                int cnt = 0;
                int[] match1 = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                int[] match2 = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                //for (int i = 0; i < 4; i++)
                //    Console.WriteLine(match1[i]);

                if (match1[0] + match1[1] > match1[2] + match1[3])
                    cnt++;
                if (match2[0] + match2[1] > match2[2] + match2[3])
                    cnt++;
                if (cnt == 2)
                    Console.WriteLine("Whitewash");
                if (cnt < 2)
                    Console.WriteLine("miss");
            }


        }
        
    }
}
