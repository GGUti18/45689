// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;
struct Employee 
   
{
	



	string surname;
	string position;
	string degree;
	int byear;
    double salary;
}
;
void out(Employee arr[],const int size)
{
     
   for (int i = 0; i < size; i++) {
        cout << "Surname: " << arr[i].surname<< endl;
        cout << "position: " << arr[i].position << endl;
        cout << "degree: " << arr[i].degree << endl;
        cout << "byear: " << arr[i].byear << endl;
        cout << "salary: " << arr[i].salary << endl;
   }
}

double Salary(double& min, double& max, Employee arr[], const int size) {
    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i].salary < min) min = arr[i].salary;
        if (arr[i].salary > max) max = arr[i].salary;
        sum += arr[i].salary;

    }
    return sum;
    
       
    
}

int main()
{
   const  int size = 2;
   Employee arr[size]{  };
   arr[0].surname="Brown";
   arr[0].degree = "Higher";
        arr[0].position="programmer";
        arr[0].byear = 1997;
        arr[0].salary = 1212;

        arr[1].surname = "Sugar";
        arr[1].degree = "Higher";
        arr[1].position = "programmer";
        arr[1].byear = 1998;
        arr[1].salary = 1289;
        out(arr,size);
        double min, max;
        min = max = arr[0].salary;
       double sum= Salary(min, max, arr, size);
       cout << "sum" << sum << endl;
       cout << "min" << min << "max" << max <<endl;
           return 0;
}
