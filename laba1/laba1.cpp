
#include <iostream>
#include <locale>

using namespace std;

int main()
{
    float p = 1.2754;
    setlocale(LC_ALL, "RUS");
    float C, S, V;
    cout << "Введите коэффициент аэродинамического сопротивления С:" << endl;
    cin >> C;
    printf("Введите скорость и площадь лобовой проекции :\n");
    scanf_s("%f %f", &V, &S);
    float Volume = C * S * V * V * p / 2;
    printf("Сила сопротивления воздуха движению автомобиля с площадью лобовой проекции %10.3f ", S);
    printf("и скоростью %10.3f ", V);
    printf("при С = % 10.3f ", C);
    printf("составит % 10.3f ", Volume);
    system("pause");
    return 0;
}
