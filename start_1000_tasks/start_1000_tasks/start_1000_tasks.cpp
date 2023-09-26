#include <iostream>
int square_perimeter(int side)///1
{
    side = side * 4;
    return side;
}
int area_square(int side)///2
{
    side = pow(side, 2);
    return side;
}
int area_of_rectangle(int width,int height)///3
{
    int square, perimeter;
    square = width * height;
    perimeter = (width + height) * 2;
    std::cout << "Площадь:" << square << std::endl << "Периметр:" << perimeter;
    return 0;
}
int diameter_of_curcle(int diameter)///4
{
    diameter = diameter * 3.14;
    return diameter;
}
int volume_and_surface(int side)///5
{
    int V = pow(side, 3);
    int S = 6 * pow(side, 2);
    std::cout << "объем:" << V << std::endl << "площадь:" << S;
    return 0;
}
int volume_of_parallelepiped(int width, int height ,int length)///6
{
    int V = (width * height * length);
    int S = 2 * ((width * height) + (width * length) + (width * length));
    std::cout << "обьем:" << V << std::endl << "площадь:" << S;
    return 0;
}
int area_circumference_length(int radius)///7
{
    int S = 3.14 * pow(radius, 2);
    int L = (2 * 3.14) * radius;
    std::cout << "длина окружности:" << L << std::endl << "площадь круга:" << S << std::endl;
    return 0;
}
int average(int first, int second)///8
{
    int result = (first + second) / 2;
    return result;
}
int average(int first, int second)///9
{
    int res = sqrt(first * second);
    return res;
}
int main(int first, int second)///10
{
    int res = first + second;
    std::cout << "Сумма:" << res << std::endl;
    res = first - second;
    std::cout << "Разность:" << res << std::endl;
    res = pow(first, 2) / pow(second, 2);
    std::cout << "частное квадратов:"  ;
    return res;
}
int main()///11
{
    setlocale(LC_ALL, "ru");
    double a = 0, b = 0;
    cout << "Введите первое число:" << endl;
    cin >> a;
    cout << "Введите второе число:" << endl;
    cin >> b;



    if (a != 0 && b != 0) {

        double res1 = fabs(a) + fabs(b);
        cout << "сложение = " << res1 << endl;
        double res2 = fabs(a) - fabs(b);
        cout << "разность = " << res2 << endl;
        double res3 = fabs(a) * fabs(b);
        cout << "произведение = " << res3 << endl;
        double res4 = fabs(a) / fabs(b);;
        cout << "сложение = " << res4 << endl;

    }
    else
    {
        cout << "Введите другие числа" << endl;

    }


}
int main()///12
{
    setlocale(LC_ALL, "ru");
    int a, b;
    double c, P;
    cout << "Введите a:" << endl;
    cin >> a;
    cout << "Введите b:" << endl;
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "Гипотенуза:" << c << endl;

    P = a + b + c;
    cout << "Периметр:" << P << endl;
}
int main()///13
{
    setlocale(LC_ALL, "ru");
    double r1, r2, pi = 3.14;
    std::cout << "Введите r1:" << std::endl;
    std::cin >> r1;
    std::cout << "Введите r2:" << std::endl;
    std::cin >> r2;

    if (r1 > r2) {
        //std::swap(r2, r1);
        double S1 = (pi * pow(r1, 2));
        std::cout << "Площадь S2= " << S1 << std::endl;

        double S2 = (pi * pow(r2, 2));
        std::cout << "Площадь S2= " << S2 << std::endl;

        double S3 = S1 - S2;
        std::cout << "Площадь S3= " << S3 << std::endl;
    }
    else {
        std::cout << "первый радиус меньше r2 или ини равны введите другие числа" << std::endl;
    }

}
int main()///14
{
    setlocale(LC_ALL, "ru");
    double pi = 3.14, r, s;
    int l;


    cout << "Введите l:" << endl;
    cin >> l;
    r = l / (2 * pi);
    s = pi * pow(r, 2);
    cout << "Площадь =" << s << endl;
}
int main() ///15
{


    setlocale(LC_ALL, "ru");


    double s, pi = 3.14;

    std::cout << "Введите площадь круга: ";
    std::cin >> s;


    double r = sqrt(s / pi);
    double d = r * 2;
    double l = pi * d;




    std::cout << "диаметр = " << d << std::endl;
    std::cout << "длина окружности = " << l << std::endl;
}
int main() ///16
{
    setlocale(LC_ALL, "ru");
    double x1, x2;
    cout << "Введите  первую каординату x1: ";
    cin >> x1;
    cout << "Введите  вторую каординату x2: ";
    cin >> x2;
    double d = fabs(x1 - x2);
    cout << "растояние между 2 точками = " << d;

}

int main()///17
{
    setlocale(LC_ALL, "ru");
    double A, B, C;
    cout << "Введите координату точки A: ";
    cin >> A;
    cout << "Введите координату точки B: ";
    cin >> B;
    cout << "Введите координату точки C: ";
    cin >> C;
    double AC = fabs(A - C);
    cout << "отрезок AC = " << AC << endl;
    double BC = fabs(B - C);
    cout << "отрезок BC = " << BC << endl;
    double result = AC + BC;
    cout << "сумма отрезков = " << result;

}
int main()///18
{
    setlocale(LC_ALL, "ru");
    double A, B, C;
    cout << "Введите координату точки A: ";
    cin >> A;
    cout << "Введите координату точки B: ";
    cin >> B;
    cout << "Введите координату точки C, чтобы она находилась между точками A и B: ";
    cin >> C;
    double AC = fabs(A - C);
    cout << "отрезок AC = " << AC << endl;
    double BC = fabs(B - C);
    cout << "отрезок BC = " << BC << endl;
    double result = AC * BC;
    cout << "Произведение отрезков AC*BC = " << result;

}
int main()///19
{
    setlocale(LC_ALL, "ru");
    double x1, y1, x2, y2;
    std::cout << "Введите координаты первой точки:" << std::endl;
    std::cin >> x1;
    std::cin >> y1;
    std::cout << "Введите координаты второй  точки:" << std::endl;
    std::cin >> x2;
    std::cin >> y2;

    double a = abs(x1 - x2);
    double b = abs(y1 - y2);
    double p = (a + b) * 2;
    double s = a * b;
    std::cout << "Периметр: " << p << std::endl;
    std::cout << "Площадь: " << s;


}
int main()///20
{
    setlocale(LC_ALL, "ru");
    double x1, x2, y1, y2;
    cout << "Введите\nx1: ";
    cin >> x1;
    cout << "y1: ";
    cin >> y1;
    cout << "x2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;
    double result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Расстояние = " << result;
}
int main()///21
{
    setlocale(LC_ALL, "ru");
    double x1, x2, y1, y2, x3, y3;
    cout << "Введите\nx1: ";
    cin >> x1;
    cout << "y1: ";
    cin >> y1;
    cout << "x2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;
    cout << "x3: ";
    cin >> x3;
    cout << "y3: ";
    cin >> y3;
    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    double P = a + b + c;
    double S = sqrt(P * (P - a) * (P - b) * (P - c));


    cout << "Периметр = " << P;
    cout << "Площадь = " << S;
}
int main()///22
{
    setlocale(LC_ALL, "ru");
    double a, b;
    std::cin >> a;
    std::cin >> b;
    std::cout << "начальные данные:" << a << " " << b << std::endl;

    /*double res = a;
    a = b;
    res = a;
    std::cout << "конечные данные:" << a<<b << std::endl;*/
    std::swap(a, b);
    std::cout << "конечные данные:" << a << " " << b << std::endl;
}

int main()///23
{
    setlocale(LC_ALL, "ru");
    double a, b, c;
    std::cout << "Введите первое число:" << std::endl;
    std::cin >> a;
    std::cout << "Введите второе число:" << std::endl;
    std::cin >> b;
    std::cout << "Введите третье число:" << std::endl;
    std::cin >> c;
    std::cout << "начальные переменые:" << "a= " << a << " " << "b= " << b << " " << "c= " << c << " " << std::endl;
    std::swap(a, b);
    std::swap(b, c);
    std::swap(c, a);
    //std::cout << "Изменетые переменые:" <<a<<b<<c<< std::endl;
    std::cout << "начальные переменые:" << "a= " << a << " " << "b= " << b << " " << "c= " << c << " " << std::endl;

}
int main()///24
{
    setlocale(LC_ALL, "ru");
    double a, b, c;
    std::cout << "Введите первое число:" << std::endl;
    std::cin >> a;
    std::cout << "Введите второе число:" << std::endl;
    std::cin >> b;
    std::cout << "Введите третье число:" << std::endl;
    std::cin >> c;
    std::cout << "начальные переменые:" << "a= " << a << " " << "b= " << b << " " << "c= " << c << " " << std::endl;
    std::swap(a, c);
    std::swap(c, b);
    std::swap(b, a);
    //std::cout << "Изменетые переменые:" <<a<<b<<c<< std::endl;
    std::cout << "начальные переменые:" << "a= " << a << " " << "b= " << b << " " << "c= " << c << " " << std::endl;

}
int main()///25
{
    setlocale(LC_ALL, "ru");
    double x;
    std::cout << "Введите x: ";
    std::cin >> x;
    double y = (3 * pow(x, 6)) - (6 * pow(x, 2)) - 7;
    std::cout << "Значение функции y = " << y;
}

int main()///26
{
    setlocale(LC_ALL, "ru");
    double x;
    std::cout << "Введите x: ";
    std::cin >> x;
    double y = (4 * pow(x - 3, 6)) - (7 * pow(x - 3, 3)) + 2;
    std::cout << "Значение функции y = " << y;
}

int main()///29
{
    setlocale(LC_ALL, "ru");
    const double pi = 3.14;
    double a, res;
    cout << "Введите градусы числом в этом промежутке 0 < a < 360    ";
    std::cin >> a;



    res = a * pi / 180;


    cout << "в радианах: " << res << "." << endl;

}
int main()///30
{
    setlocale(LC_ALL, "ru");
    const double pi = 3.14;
    double a, res;
    cout << "Ввидеите величу=ину градусов числом в этом промежутке  (0 <a <2 *pi): ";
    cin >> a;

    res = a * 180 / pi;
    cout << "значение в радианах: " << res << "." << endl;

}

int main()///31
{
    setlocale(LC_ALL, "ru");
    double tf;
    std::cout << "Введите температуру в Фаренгейтах: ";
    std::cin >> tf;
    double tc = (tf - 32) * (5.0 / 9.0);
    std::cout << "Температура в градусах цельсия = " << tc;
}
int main()///32
{
    setlocale(LC_ALL, "ru");
    double tc;
    std::cout << "Введите температуру в градусах цельсия: ";
    std::cin >> tc;
    double tf = tc
        * 9.0 / 5.0
        + 32;
    std::cout << "Температура в Фаренгейтах = " << tf;
}
int main()///33
{
    setlocale(LC_ALL, "ru");
    double x, a, y;
    std::cout << "Введите сколько кг конфет(X): ";
    std::cin >> x;
    std::cout << "Введите сколько стоит " << x << "кг конфет(A): ";
    std::cin >> a;
    double kg = x / a;
    std::cout << "1 кг конфет стоит: " << kg << std::endl;
    std::cout << "Введите сколько-то килограмм конфет(Y): ";
    std::cin >> y;
    double kg2 = x * y;
    std::cout << y << "кг конфет стоило бы: " << kg2;

}
int main()///34
{
    setlocale(LC_ALL, "ru");
    double x, a, y, b;
    std::cout << "Введите сколько кг шоколадных конфет(X): ";
    std::cin >> x;
    std::cout << "Введите сколько стоит " << x << "кг шоколадных конфет(A): ";
    std::cin >> a;
    std::cout << "Введите сколько кг ирисок(Y): ";
    std::cin >> y;
    std::cout << "Введите сколько стоит " << y << "кг ирисок(B): ";
    std::cin >> b;
    double kg = x / a;
    double kg2 = y / b;
    std::cout << "1 кг шоколадных конфет стоит: " << kg << std::endl;
    std::cout << "1 кг ирисок стоит: " << kg2 << std::endl;

    double result = kg / kg2;
    std::cout << "Шоколадные конфеты дороже ирисок в " << result << " раз" << std::endl;

}
int main()///37
{
    setlocale(LC_ALL, "ru");
    double v1, v2, s, t;
repeat:
    std::cout << "Введите скорость 1 машины (км): ";
    std::cin >> v1;
    std::cout << "Введите скорость 2 машины (км): ";
    std::cin >> v2;
    std::cout << "Введите расстояние между машинами S (км): ";
    std::cin >> s;
    std::cout << "Введите время t (ч): ";
    std::cin >> t;
    double dist = fabs(s - ((v1 + v2) * t));
    std::cout << "Расстояние междуавтомобилями через t = " << t << ", = " << dist << "км";

}
int main()///38
{
    setlocale(LC_ALL, "ru");
    double A, B;
    std::cout << "Введите коэффициент A: ";
    std::cin >> A;
    std::cout << "Введите коэффициент B: ";
    std::cin >> B;
    if (A != 0) {
        double x = (-B) / A;
        std::cout << "x = " << x;
    }
    else {
        std::cout << "Коэффициент A не может быть равен нулю " << std::endl;
    }

}
int main() {
    std::cout<<square_perimeter(4);
    std::cout << area_square(4);    
}