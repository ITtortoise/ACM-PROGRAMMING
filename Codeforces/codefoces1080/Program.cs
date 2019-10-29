using System;

namespace codefoces1080
{
    class Program
    {
        static void Main(string[] args)
        {

        long[] fp = Array.ConvertAll(Console.ReadLine().Split(), e => long.Parse(e));
        long f = fp[0];
        long p = fp[1];
        long red = 0, green = 0, blue = 0;
        red = (2 * f);
        green = (5 * f);
        blue = (8 * f);
        long r, g, b;
        r = red / p;
        g = green / p;
        b = blue / p;
        if (red % p != 0) r++;
        if (green % p != 0) g++;
        if (blue % p != 0) b++;
        Console.WriteLine( r + g + b);

        }

    }
}

