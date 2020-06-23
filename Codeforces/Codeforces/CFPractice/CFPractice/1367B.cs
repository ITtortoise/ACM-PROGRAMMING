//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace CFPractice
//{
//    class _1367B
//    {
//        public static void Main(string[] args)
//        {
//            int T = int.Parse(Console.ReadLine());
//            while(T-->0)
//            {
//                int even = 0, odd = 0,cnt=0;
//                var list = new List<int>();
//                var list2 = new List<int>();
//                int n = int.Parse(Console.ReadLine());
//                var line = Console.ReadLine().Split(' ');
//                for (int i = 0; i < n; i++)
//                {                    
//                    int v = int.Parse(line[i]);
//                    if (v % 2 == 0)
//                    {
//                        list.Add(v % 2);
//                        even++;
//                    }
                        
//                    else
//                    {
//                        list.Add(v % 2);
//                        odd++;
//                    }

//                    list2.Add(i % 2); 
//                }
//                if(n%2==0)
//                {
//                    if (even == odd)
//                    {
//                        for(int i = 0; i < n; i++)
//                        {
//                            if (list[i] != list2[i])
//                                cnt++;
//                        }
//                        Console.WriteLine(cnt/2);
//                    }
//                    else
//                    {
//                        Console.WriteLine(-1);
//                    }
//                }
//                else
//                {
//                    if (even - 1 == odd)
//                    {
//                        for (int i = 0; i < n; i++)
//                        {
//                            if (list[i] != list2[i])
//                                cnt++;
//                        }
//                        Console.WriteLine(cnt/2);
//                    }
//                    else
//                    {
//                        Console.WriteLine(-1);
//                    }

//                }

//            }
//        }
//    }
//}
