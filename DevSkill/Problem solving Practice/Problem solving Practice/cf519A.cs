//using System;
//using System.Collections.Generic;
//using System.Net.WebSockets;
//using System.Text;

//namespace Problem_solving_Practice
//{
//    class cf519A
//    {
//        public static void Main(string[] args)
//        {
//            int white = 0, black = 0;
//            for (int i = 0; i < 8; i++)
//            {
//                var line = Console.ReadLine();
//                for (int j = 0; j < 8; j++)
//                {
//                    if (line[j] == 'Q') white += 9;
//                    else if (line[j] == 'R') white += 5;
//                    else if (line[j] == 'B') white += 3;
//                    else if (line[j] == 'N') white += 3;
//                    else if (line[j] == 'P') white += 1;
//                    else if (line[j] == 'q') black += 9;
//                    else if (line[j] == 'r') black += 5;
//                    else if (line[j] == 'b') black += 3;
//                    else if (line[j] == 'n') black += 3;
//                    else if (line[j] == 'p') black += 1;
//                }
//                //Console.WriteLine($"{white} { black}");
//            }
//            if(white>black)
//                Console.WriteLine("White");
//            else if(black>white)
//                Console.WriteLine("Black");
//            else
//                Console.WriteLine("Draw");
//        }
//    }
//}
