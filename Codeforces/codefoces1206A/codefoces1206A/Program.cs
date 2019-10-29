using System;

namespace codefoces1206A
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int[] arr1 = Array.ConvertAll(Console.ReadLine().Split(), e => int.Parse(e));
            int m =int.Parse(Console.ReadLine());
            int[] arr2 = Array.ConvertAll(Console.ReadLine().Split(), e =>int.Parse(e));
            Array.Sort(arr1);
            Array.Sort(arr2);
            Console.WriteLine("{0} {1}",arr1[n-1],arr2[m- 1]);
        }
    }
}
