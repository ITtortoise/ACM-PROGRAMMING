using System;

namespace codefoces999A.cpp
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = 0, k = 0,cnt=0;

          int[] nk = Array.ConvertAll(Console.ReadLine().Split(' '), e => int.Parse(e));
            n = nk[0];
            k = nk[1];
          int[] ar = Array.ConvertAll(Console.ReadLine().Split(' '), e => int.Parse(e));

            for (int i = 0; i < n; i++)
            {
                if (ar[i] <= k)
                {
                    cnt++;
                    ar[i] = 0;
                }
                else
                    break;
            }


            for (int j = n - 1; j > 0; j--)
            {
                if (ar[j] <= k && ar[j] > 0)
                {
                cnt++;
                ar[j] = 0;
                }
                else
                    break;
            }
           
            Console.WriteLine(cnt);

        }
    }
}
