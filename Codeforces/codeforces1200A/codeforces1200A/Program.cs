using System;

namespace codeforces1200A
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            string s = Console.ReadLine();
            int[] arr = new int[10];

            for(int i=0;i<n;i++)
            {
                if(s[i]=='L')
                {
                    for(int j=0;j<10;j++)
                    {
                        if(arr[j]==0)
                        {
                            arr[j] = 1;
                            break;
                        }
                    }
                }
                else if (s[i] == 'R')
                {
                    for (int j = 9; j>=0; j--)
                    {
                        if (arr[j] == 0)
                        {
                            arr[j] = 1;
                            break;
                        }
                    }
                }
                else
                {
                    int leave = s[i]-'0';
                    arr[leave] = 0;
                }
            }
            for (int i = 0; i < 10; i++)
                Console.Write(arr[i]);


        }
    }
}
