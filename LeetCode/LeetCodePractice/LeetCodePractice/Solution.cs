using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;

namespace LeetCodePractice
{
    public class Solution
    {

        static IList<bool> KidsWithCandies(int[] candies, int extraCandies)
        {
            var arr = new List<bool>();
            int maxValue = candies.Max();
            //int maxIndex = candies.ToList().IndexOf(maxValue);
            for (int i = 0; i < candies.Length; i++)
            {             
                int expected = extraCandies + candies[i];
                if (expected >= maxValue)
                    arr.Add(true);
                else
                    arr.Add(false);                               
            }
            return (arr);
        }
        public static void Main()
        {
            int[] candies = Array.ConvertAll(Console.ReadLine().Split(' '), e => int.Parse(e));
            int extraCandies = int.Parse(Console.ReadLine());
            KidsWithCandies(candies, extraCandies);
        }
    }
}
