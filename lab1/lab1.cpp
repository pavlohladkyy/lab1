#include <iostream>
#include <cmath>
using namespace std;

class Calculator {
public:
    // Оголошення публічних змінних класу
    float x, y, z;

    // Конструктор класу, приймає вхідні параметри і ініціалізує змінні класу
    Calculator(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    // Метод для обчислення змінної a
    double calculateA() {
       
        double a = pow(y, 2) + ((z / pow(x, 2)) + (pow(sin(x), 2))) / (fabs((pow(x, 2) + y) / ((z + pow(x, 3) / 3)) - fabs(log(pow(x, 2) + z))));
        return a;
    }

    // Метод для обчислення змінної b
    double calculateB() {
       
        
        double b = (pow(fabs(x + y / fabs(pow(z, 0.6)) + (x + pow(z, 2) / (2 * x + y))), 1 / 3) - (z * exp((pow(x, 2) - y) / (1 + x))));
        return b;
    }

private:
    // Приватний метод, який викликає метод calculateB
    double b() {
        return calculateB();
    }
};

int main() {
    // Вхідні дані
    float x = 0.48 * 14;
    float y = 0.47 * 14;
    float z = -1.32 * 14;
    int factorial = 2;

    // Створення об'єкта класу Calculator 
    Calculator calc(x, y, z);

    // Обчислення 'a' і 'b' за допомогою методів класу Calculator
    double a = calc.calculateA();
    double b = calc.calculateB();

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}