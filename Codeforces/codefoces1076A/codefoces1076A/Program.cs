using System;

namespace codefoces1076A
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            string s = Console.ReadLine();
            bool flag = false;

            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] > s[i + 1])
                {

                    s.Remove(i, 1);
                    flag = true;
                    break;
                }

            }
            if (flag == false)
                s.Remove(n - 1, 1);

            Console.WriteLine(s);
        }
    }
}
