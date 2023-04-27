using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Laba7
{
    internal class Program
    {
        static void Main(string[] args)
        {
             -1-             
int a1 = 1, a2 = 2, a3 = 3, a4 = 4;
            int start = -4, end = 4;
            double step = 0.2;
            double x = start;
            Console.WriteLine($"\t\tA = {a1}\n");
            Y_to_console(start, end, step, a1);
            Console.WriteLine($"\n\t\tA = {a2}\n");
            Y_to_console(start, end, step, a2);
            Console.WriteLine($"\n\t\tA = {a3}\n");
            Y_to_console(start, end, step, a3);
            Console.WriteLine($"\n\t\tA = {a4}\n");
            Y_to_console(start, end, step, a4);
            
        }
        static public double Func(double x, int a)
        {
            double h1 = 0, h2 = 0;
            if (x + a < 0) { h1 = Math.Pow(-(x + a), 2.0 / 3); h1 *= -1; }
            else h1 = Math.Pow(x + a, 2.0 / 3);
            if (x - a < 0) { h2 = Math.Pow(-(x - a), 2.0 / 3); h2 *= -1; }
            else h2 = Math.Pow(x - a, 2.0 / 3);
            return (h1 - h2) / a;
        }
        static public void Y_to_console(int start, int end, double step, int a)
        {
            double x = start;
            for (; x < end + step; x += step, x = Math.Round(x, 1))
                Console.WriteLine($"x = {x}\t\t{Func(x, a)}");
        }
    }
}
2) using System;  namespace Laba7 {     internal class Program     {         static void Main(string[] args)         {             double x = Convert.ToDouble(Console.ReadLine());             double sum = CalculateSeries(x);             Console.WriteLine($"Sum = {sum}");         }          static double CalculateSeries(double x)         {             if (x > 1)             {                 return double.PositiveInfinity;             }              double sum = 0;             double term = x;             int n = 1;             double stop = Math.Pow(10, -6);              while (Math.Abs(term) > stop)             {                 sum += term;                 n += 2;                 term = -Math.Pow(x, n) / n;             }              return sum;         }     } } 


	
