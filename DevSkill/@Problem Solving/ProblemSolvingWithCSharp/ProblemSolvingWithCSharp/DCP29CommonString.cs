//using System;
//using System.Collections.Generic;
//using System.Text;

//namespace ProblemSolvingWithCSharp
//{
//	class DCP29CommonString
//	{
//		static int LCSubStr(string X, string Y, int m, int n)
//		{
//			int[,] LCStuff = new int[m + 1, n + 1];

//			int result = 0;
//			for (int i = 0; i <= m; i++)
//			{
//				for (int j = 0; j <= n; j++)
//				{
//					if (i == 0 || j == 0)
//						LCStuff[i, j] = 0;
//					else if (X[i - 1] == Y[j - 1])
//					{
//						LCStuff[i, j] = LCStuff[i - 1, j - 1] + 1;

//						result = Math.Max(result, LCStuff[i, j]);
//					}
//					else
//						LCStuff[i, j] = 0;
//				}
//			}

//			return result;
//		}

//		public static void Main()
//		{
//			int T = int.Parse(Console.ReadLine());
//			for(int t=1;t<=T;t++)
//			{
//				String line = Console.ReadLine();
				
//				bool f = true;
//				string X = "", Y = "";
//				for (int i = 0; i < line.Length; i++)
//				{
//					if (line[i] == ' ')
//						f = false;
//					if (f == true)
//						X += line[i];
//					else
//						Y += line[i];
//				}
//				//Console.WriteLine(X+" "+Y);
//				int m = X.Length;
//				int n = Y.Length;

//				int ans=LCSubStr(X, Y, m, n);
//				Console.WriteLine($"Case {t}: {ans}");
//			}

//		}
//	}

//}

