using System;

namespace codeforces1203
{
    class Program
    {
        static void Main(string[] args)
        {

            int q = Convert.ToInt32(Console.ReadLine());
            while (q-- > 0)
            {
                int n = Convert.ToInt32(Console.ReadLine());
                var p = Array.ConvertAll(Console.ReadLine().Split(), Convert.ToInt32);
                bool bl1 = true, bl2 = true;
                for (int i = 1; i < n; i++)
                {
                    if (p[i] % n != p[i - 1] - 1) bl1 = false;
                    if (p[i - 1] % n != p[i] - 1) bl2 = false;
                }
                Console.WriteLine((bl1 || bl2) ? "YES" : "NO");


            }
        }
    }
}