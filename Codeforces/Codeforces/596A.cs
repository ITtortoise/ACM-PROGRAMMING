//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace Codeforces
//{
//    class _596A
//    {
//        static void Main(string[] args)
//        {
//            int n = int.Parse(Console.ReadLine());
//            int[] x = new int[100];
//            int[] y = new int[100];
//            for(int i = 0; i < n; i++)
//            {
//                var line = Console.ReadLine().Split(' ');
//                x[i] = int.Parse(line[0]);
//                y[i] = int.Parse(line[1]);

//            }
//            if(n==1)
//                Console.WriteLine(-1);

//            else if (n == 2)
//            {
//                int dis=0;
//                    int dis1 = Math.Abs(x[0] - x[1]);
//                    int dis2 = Math.Abs(y[0] - y[1]);
//                    dis = dis1 * dis2;
//                if(dis==0)
//                   Console.WriteLine(-1);
//                else
//                    Console.WriteLine(dis);
//            }
//            else
//            {
//                int l1 = 0, l2 = 0;
//                for(int i = 0; i < n; i++)
//                {
//                     for(int j = i+1; j < n; j++)
//                    {
//                        if (x[i] == x[j])
//                        {
//                            l1 =Math.Abs(y[i] -y[j]);
//                        }
//                        if (y[i] == y[j])
//                        {
//                            l2 =Math.Abs(x[i] -x[j]);
//                        }
//                    }

//                }
//                Console.WriteLine(l1*l2);
//            }
            
//        }
//    }
//}
