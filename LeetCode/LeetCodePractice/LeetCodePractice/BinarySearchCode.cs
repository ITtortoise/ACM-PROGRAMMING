//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace LeetCodePractice
//{
//    public class BinarySearchCode
//    {
//        private static bool BinarySearch(int[] arr, int l, int u, int x)
//        {          
//            while (l <= u)
//            {
//                int mid =(l + u) / 2;
//                if (arr[mid] == x)
//                    return true;
//                else if (x > arr[mid])
//                    l = mid+1;
//                else
//                    u = mid-1;
//            }
//            return false;
            
//        }
//        public static void Main()
//        {
//            int[] arr = Array.ConvertAll(Console.ReadLine().Split(' '), e => int.Parse(e));
//            int x = int.Parse(Console.ReadLine());
//            int l = 0, u = arr.Length -1;
//            bool ans = BinarySearch(arr,l,u, x);
//        }        
//    }
//}
