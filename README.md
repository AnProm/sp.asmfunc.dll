# sp.asmfunc.dll
Native assembler methods provided by C++

!!!WARNING!!! Set up your C# project build config platform to x86 !!!WARNING!!!

```
//Code for using this DLL in your C# project:
class Program
    {
        [DllImport("C://Users//styra//source//repos//AsmFunc//Debug//AsmFunc.dll")]
        public static extern int multiply(int a, int b);
        [DllImport("C://Users//styra//source//repos//AsmFunc//Debug//AsmFunc.dll")]
        public static extern double divide(double a, double b);
        static void Main(string[] args)
        {

            int c = multiply(1, 2);
            //c = multiply(999999999, 999999999);
            Console.WriteLine(c);
            double d = divide(-0.2, 1.92);
            Console.WriteLine(d);
            

        }
    }
