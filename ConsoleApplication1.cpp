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
2) 

static double SumSeries(double x, double epsilon = 1e-6)
        {
            double sum = 0;
            double term;
            int n = 0;

            do
            {
                term = Math.Pow(-1, n) * (Math.Pow(x, 2 * n + 1) / (2 * n + 1));
                sum += term;
                n++;
            } while (Math.Abs(term) >= epsilon);

            return sum;
        }

        static void Main(string[] args)
        {
            double[] x_values = { 1 / Math.Sqrt(3), -1 / Math.Sqrt(3), 1 };

            Console.WriteLine("Результаты вычислений:");
            foreach (double x in x_values)
            {
                double sum = SumSeries(x);
                double y = Math.Atan(x);

                Console.WriteLine($"\nЗначение x = {x}");
                Console.WriteLine($"Вычисленная сумма ряда S(x) = {sum}");
                Console.WriteLine($"Значение функции y(x) = arctg(x) = {y}");
            }
        }
    }

