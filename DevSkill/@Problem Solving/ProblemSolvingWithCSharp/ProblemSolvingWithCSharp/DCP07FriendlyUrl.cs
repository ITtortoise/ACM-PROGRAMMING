//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class FriendlyURL
//    {
//        static void Main(String[] args)
//        {
//            int T = int.Parse(Console.ReadLine());
//            while (T-- > 0)
//            {
//                string ans = "";
//                int n = int.Parse(Console.ReadLine());
//                string s = Console.ReadLine();
//                s = s.ToLower();
//                int f=0;
//                for(int i = 0; i < s.Length; i++)
//                {
//                    if( (s[i] >= 48 && s[i] <= 57)|| (s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
//                    {
//                        ans += s[i];
//                        f =0;
//                    }
//                    else if(f==0)
//                    {
//                      ans += "-";
//                      f = 1;
//                    }
                        
//                }
               
//                if (ans[0] == '-') ans = ans.Remove(0, 1); 
//                string final = "";
//                for (int i = 0; i < ans.Length; i++)
//                { 
//                    final += ans[i];
//                    if (i == n - 1) break;
//                }
               
//                if (final[final.Length-1] == '-') final = final.Remove(final.Length-1, 1); Console.WriteLine(final);
                
            


//            }
//        }
//    }
//}
