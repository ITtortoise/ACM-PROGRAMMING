//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//    class DCP46HallOfFramesOfJUProgrammingSociety
//    {
//        static void Main(string[] args)
//        {
//            int T = int.Parse(Console.ReadLine());
//            while (T-- > 0)
//            {
//                string[] line = Console.ReadLine().Split(' ');
//                string a = line[0];
//                string b = line[1];
//                string temp = "", reva = "", revb = "";
//                int l1 = a.Length; int l2 = b.Length;

//                if (l1 < l2)
//                {
//                    temp = a;
//                    a = b;
//                    b = temp;
//                }
//                for (int i = a.Length - 1; i >= 0; i--) { reva += a[i]; }
//                for (int i = b.Length - 1; i >= 0; i--) { revb += b[i]; }

//                while (revb.Length < reva.Length) revb += '0';
//               //Console.WriteLine(reva+ " " + revb);
//                int carry = 0;
//                int sum = 0;
//                string result = "";
//                for (int i = 0; i < revb.Length; i++)
//                {
//                    sum = (int)(reva[i] - '0') + (int)(revb[i] - '0') + carry;
//                    int s = (sum % 10);
//                    result += (char)(s + '0');
//                    carry = sum / 10;

//                }
//                if (carry > 0)
//                    result += (char)(carry + '0');
//                string ans = "";
//                for (int i = result.Length - 1; i >= 0; i--) ans += result[i];
//                //Console.WriteLine(ans);
               
//                string div = ""; string final = "", reminder = ""; int rem = 0;
//                for (int i = 0; i < ans.Length; i++)
//                {
//                    div += ans[i];
//                    if (rem > 0)
//                    {
//                        div = "";
//                        div += reminder;
//                        div += ans[i];
//                    }

//                    int divisor = int.Parse(div);
//                    rem = divisor % 2;
//                    reminder = rem.ToString();
                  
//                    final += (divisor / 2).ToString();
//                    div = "";
//                }

//                var fi = final.ToCharArray();
//                int k = 0;
//                if (fi[0] == '0')  k = 1;
//                for(int i = k; i < final.Length; i++)  Console.Write(fi[i]);                
//                Console.WriteLine();

//            }
//        }
//    }
//}
