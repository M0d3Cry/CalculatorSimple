#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void wait_enter() {
    printf("\nНажми Enter для продолжения...");
    while(getchar() != '\n');
    getchar();
}

int get_int(const char *prompt) {
    int value, ok;
    do {
        printf("%s", prompt);
        ok = scanf("%d", &value);
        if (ok == 1) {
            while(getchar() != '\n');
            return value;
        }
        while(getchar() != '\n');
        printf("Введи число\n");
        wait_enter();
    } while (1);
}

double get_double(const char *prompt) {
    double value;
    int ok;
    do {
        printf("%s", prompt);
        ok = scanf("%lf", &value);
        if (ok == 1) {
            while(getchar() != '\n');
            return value;
        }
        while(getchar() != '\n');
        printf("Введи число\n");
        wait_enter();
    } while (1);
}

long long get_llong(const char *prompt) {
    long long value;
    int ok;
    do {
        printf("%s", prompt);
        ok = scanf("%lld", &value);
        if (ok == 1) {
            while(getchar() != '\n');
            return value;
        }
        while(getchar() != '\n');
        printf("Введи число\n");
        wait_enter();
    } while (1);
}

void get_string(const char *prompt, char *buffer, int size) {
    do {
        printf("%s", prompt);
        if (scanf("%s", buffer) == 1) {
            while(getchar() != '\n');
            return;
        }
        while(getchar() != '\n');
        printf("Введи строку\n");
        wait_enter();
    } while (1);
}

int get_base(const char *prompt) {
    int base;
    do {
        base = get_int(prompt);
        if (base >= 2 && base <= 36) return base;
        printf("Не входит в рамки основания\n");
        wait_enter();
    } while (1);
}

long long factorial(long long x) {
    if (x > 20) {
        printf("Результат может быть неточным из-за переполнения\n");
    }
    if (x == 0) return 1;
    long long result = 1;
    for (long long i = 2; i <= x; i++) result *= i;
    return result;
}

void print_binary(unsigned long long n) {
    if (n > 1) print_binary(n / 2);
    putchar('0' + n % 2);
}

int char_to_digit(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'z') return c - 'a' + 10;
    if (c >= 'A' && c <= 'Z') return c - 'A' + 10;
    return -1;
}

unsigned long long horner(const char *num_str, int base) {
    unsigned long long result = 0;
    for (int i = 0; num_str[i] != '\0'; i++) {
        int digit = char_to_digit(num_str[i]);
        if (digit == -1) {
            printf("Недопустимый символ '%c'\n", num_str[i]);
            return (unsigned long long)-1;
        }
        if (digit >= base) {
            printf("%d не подходит для основания %d\n", digit, base);
            return (unsigned long long)-1;
        }
        result = result * base + digit;
    }
    return result;
}

int main(void) {
    int g;
    do {
        printf("Выбери действие:\n 1) Арифметические операции\n 2) Побитовые операции\n 3) Факториал\n 4) Тригонометрия\n 5) Логарифмы\n 6) НОД и НОК\n 7) Конвертация систем счисления\n 8) Площадь правильного n-угольника\n 9) Квадратное уравнение\n10) Выход\n");
        g = get_int("Выбор: ");
        switch (g) {
            case 1: { // Арифметика
                int op;
                do {
                    printf("Выбери операцию:\n 1) Сложение\n 2) Вычитание\n 3) Умножение\n 4) Деление\n 5) Степень\n 0) Назад\n");
                    op = get_int("Ваш выбор: ");
                    if (op == 0) break;
                    double a = get_double("Первое число: ");
                    double b = get_double("Второе число: ");
                    switch (op) {
                        case 1: printf("Ответ: %g + %g = %g\n", a, b, a + b); break;
                        case 2: printf("Ответ: %g - %g = %g\n", a, b, a - b); break;
                        case 3: printf("Ответ: %g * %g = %g\n", a, b, a * b); break;
                        case 4:
                            if (b == 0) printf("На ноль делить нельзя\n");
                            else printf("Ответ: %g / %g = %g\n", a, b, a / b);
                            break;
                        case 5: printf("Ответ: %g ^ %g = %g\n", a, b, pow(a, b)); break;
                        default: printf("Неверный выбор\n");
                    }
                    wait_enter();
                } while (1);
                break;
            }
            case 2: { // Побитовые операции
                int op;
                do {
                    printf("Выбери операцию:\n");
                    printf(" 1) И (&)\n 2) ИЛИ (|)\n 3) Сдвиг влево (<<)\n 4) Сдвиг вправо (>>)\n 0) Назад\n");
                    op = get_int("Выбор: ");
                    if (op == 0) break;
                    int a = get_int("Первое число: ");
                    int b = get_int("Второе число: ");
                    switch (op) {
                        case 1: printf("Ответ: %d & %d = %d\n", a, b, a & b); break;
                        case 2: printf("Ответ: %d | %d = %d\n", a, b, a | b); break;
                        case 3: printf("Ответ: %d << %d = %d\n", a, b, a << b); break;
                        case 4: printf("Ответ: %d >> %d = %d\n", a, b, a >> b); break;
                        default: printf("Неверный выбор\n");
                    }
                    wait_enter();
                } while (1);
                break;
            }
            case 3: { // Факториал
                int op;
                do {
                    printf(" 1) Найти факториал\n 0) Назад\n");
                    op = get_int("Выбор: ");
                    if (op == 0) break;
                    if (op != 1) {
                        printf("Неверный выбор\n");
                        wait_enter();
                        continue;
                    }
                    long long n;
                    do {
                        n = get_llong("Введи неотрицательное число: ");
                        if (n < 0) {
                            printf("Число должно быть неотрицательным\n");
                            wait_enter();
                        } else break;
                    } while (1);
                    printf("Ответ: %lld\n", factorial(n));
                    wait_enter();
                } while (1);
                break;
            }
            case 4: { // Тригонометрия
                int op;
                do {
                    printf("Что найти?\n 1) sin\n 2) cos\n 3) tg\n 4) ctg\n 0) Назад\n");
                    op = get_int("Выбор: ");
                    if (op == 0) break;
                    double x = get_double("Введите число: ");
                    switch (op) {
                        case 1: printf("sin(%g) = %g\n", x, sin(x)); break;
                        case 2: printf("cos(%g) = %g\n", x, cos(x)); break;
                        case 3: printf("tg(%g) = %g\n", x, tan(x)); break;
                        case 4: printf("ctg(%g) = %g\n", x, 1.0 / tan(x)); break;
                        default: printf("Неверный выбор\n");
                    }
                    wait_enter();
                } while (1);
                break;
            }
            case 5: { // Логарифмы
                int op;
                do {
                    printf("Какой логарифм найти?\n 1) Натуральный\n 2) По основанию\n 0) Назад\n");
                    op = get_int("Выбор: ");
                    if (op == 0) break;
                    if (op == 1) {
                        double x = get_double("Введи аргумент: ");
                        if (x <= 0) {
                            printf("Аргумент должен быть положительным\n");
                            wait_enter();
                            continue;
                        }
                        printf("ln(%g) = %g\n", x, log(x));
                        wait_enter();
                    } else if (op == 2) {
                        double base = get_double("Введи основание: ");
                        double arg = get_double("Введи аргумент: ");
                        if (base <= 0 || base == 1 || arg <= 0) {
                            printf("Некорректные значения\n");
                            wait_enter();
                            continue;
                        }
                        printf("log_%g(%g) = %g\n", base, arg, log(arg) / log(base));
                        wait_enter();
                    } else {
                        printf("Неверный выбор\n");
                        wait_enter();
                    }
                } while (1);
                break;
            }
            case 6: { // НОД | НОК
                int op;
                do {
                    printf("Что найти?\n 1) НОД\n 2) НОК\n 0) Назад\n");
                    op = get_int("Выбор: ");
                    if (op == 0) break;
                    int a = get_int("Первое число: ");
                    int b = get_int("Второе число: ");
                    if (a <= 0 || b <= 0) {
                        printf("Числа должны быть положительными\n");
                        wait_enter();
                        continue;
                    }
                    int x = a, y = b;
                    while (y) {
                        int t = x % y;
                        x = y;
                        y = t;
                    }
                    int gcd = x;
                    if (op == 1) {
                        printf("НОД(%d, %d) = %d\n", a, b, gcd);
                    } else if (op == 2) {
                        printf("НОК(%d, %d) = %lld\n", a, b, (long long)a / gcd * b);
                    } else {
                        printf("Неверный выбор\n");
                    }
                    wait_enter();
                } while (1);
                break;
            }
            case 7: { // Системы счисления
                int op;
                do {
                    printf("В какую систему перевести?\n 1) Двоичная\n 2) Восьмеричная\n 3) Десятичная\n 4) Шестнадцатеричная\n 0) Назад\n");
                    op = get_int("Выбор: ");
                    if (op == 0) break;
                    int base_in = get_base("Введи основание: ");
                    char num[256];
                    get_string("Введи число: ", num, sizeof(num));
                    unsigned long long val = horner(num, base_in);
                    if (val == (unsigned long long)-1) {
                        wait_enter();
                        continue;
                    }
                    printf("Ответ: ");
                    switch (op) {
                        case 1: print_binary(val); break;
                        case 2: printf("%llo", val); break;
                        case 3: printf("%llu", val); break;
                        case 4: printf("%llX", val); break;
                        default: printf("Неверный выбор"); break;
                    }
                    printf("\n");
                    wait_enter();
                } while (1);
                break;
            }
            case 8: { // Площадь n-угольника
                int op;
                do {
                    printf(" 1) Вычислить площадь\n 0) Назад\n");
                    op = get_int("Выбор: ");
                    if (op == 0) break;
                    if (op != 1) {
                        printf("Неверный выбор\n");
                        wait_enter();
                        continue;
                    }
                    int n = get_int("Введи количество сторон: ");
                    double s = get_double("Введи длину стороны: ");
                    if (n < 3 || s <= 0) {
                        printf("Некорректные данные.\n");
                        wait_enter();
                        continue;
                    }
                    double area = (n * s * s) / (4 * tan(3.1415926535 / n));
                    printf("Площадь = %g\n", area);
                    wait_enter();
                } while (1);
                break;
            }
            case 9: { // Квадратное уравнение
                int op;
                do {
                    printf(" 1) Найти корни квадратного уравнения\n 0) Назад\n");
                    op = get_int("Выбор: ");
                    if (op == 0) break;
                    if (op != 1) {
                        printf("Неверный выбор\n");
                        wait_enter();
                        continue;
                    }
                    double a = get_double("Введи коэффициент a: ");
                    double b = get_double("Введи коэффициент b: ");
                    double c = get_double("Введи коэффициент c: ");
                    if (a == 0) {
                        if (b == 0) {
                            if (c == 0) printf("Бесконечно много решений\n");
                            else printf("Решений нет\n");
                        } else {
                            printf("x = %g\n", -c / b);
                        }
                    } else {
                        double d = b * b - 4 * a * c;
                        if (d < 0) {
                            printf("Нет действительных корней\n");
                        } else if (d == 0) {
                            printf("x = %g\n", -b / (2 * a));
                        } else {
                            printf("x1 = %g, x2 = %g\n", (-b - sqrt(d)) / (2 * a), (-b + sqrt(d)) / (2 * a));
                        }
                    }
                    wait_enter();
                } while (1);
                break;
            }
            case 10:
                return 0;
            default:
                printf("Неверный выбор\n");
                wait_enter();
        }
    } while (1);
}