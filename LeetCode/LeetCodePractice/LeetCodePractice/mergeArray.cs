//using System;
//using System.Collections.Generic;
//using System.Text;
//using System.Linq;

//namespace LeetCodePractice
//{
//    public class mergeArray
//    {
//        public static void Merge(int[] nums1, int m, int[] nums2, int n)
//        {
//            for (int i = n - 1; i >= 0; i--)
//            {
//                int j, last = nums1[m - 1];
//                for (j = m - 2; j >= 0 && nums1[j] > nums2[i]; j--)
//                    nums1[j + 1] = nums1[j];

//                if (j != m - 2 || last > nums2[i])
//                {
//                    nums1[j + 1] = nums2[i];
//                    nums2[i] = last;
//                }
//            }
//            int k = 0;
//            for (int i = m; i < m + n; i++)
//                nums1[i] = nums2[k++];

//        }

//        public static void Main()
//        {
//            int[] nums1 = Array.ConvertAll(Console.ReadLine().Split(' '), e => int.Parse(e));
//            int m = int.Parse(Console.ReadLine());
//            int[] nums2 = Array.ConvertAll(Console.ReadLine().Split(' '), e => int.Parse(e));
//            int n = int.Parse(Console.ReadLine());
//            Merge(nums1, m, nums2, n);

//        }
//    }
//}
