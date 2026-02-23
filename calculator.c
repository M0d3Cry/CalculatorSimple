#include "stdio.h"
#include "math.h"
#include <stdlib.h>

double multiply_func(double x, double y) 
{
    return x * y;
}

double plus_func(double x, double y) 
{
    return x + y;
}

double minus_func(double x, double y) 
{
    return x - y;
}

double devide_func(double x, double y) 
{
    return x / y;
}

int and_bite_func(int x, int y)
{
    return x & y;
}

int or_bite_func(int x, int y)
{
    return x | y;
}

int left_bite_func(int x, int y)
{
    return x << y;
}

int right_bite_func(int x, int y)
{
    return x >> y;
}

long long factorial(long long x)
{
    if (x > 20) {
        printf("Предупреждение: результат может быть неточным из-за переполнения.\n");
    }
    if (x == 0) {
        return 1;
    } else {
        long long result = 1;
        long long i = 1;
        while(i <= x) {
            result *= i;
            i += 1;
    }
    return result;
    }
}

void print_binary(unsigned int n) {
    if (n > 1) print_binary(n / 2);
    putchar('0' + n % 2);
}

#ifdef _WIN32
    #define CLEAR "cls"
#else
    #define CLEAR "clear"
#endif

void pause() {
    printf("\nНажмите Enter для продолжения...");
    while(getchar() != '\n');
    getchar();
}

int main(void) {
    while(1) {
        system(CLEAR);
        int g;
        int l;
        int check;
        while (1) {
            system(CLEAR);
            printf("Выберите функцию, которую хотите выполнить: \n");
            printf(" 1) Арифметические Операции \n 2) Побитовые операции \n 3) Факториал \n 4) Тригонометрия \n 5) Логарифмы \n 6) Найти НОК и НОД двух чисел \n 7) Конвертация числа в другие системы \n 8) Площадь правильного n-угольника по стороне \n 9) Корень квадратного уравнения по заданным коэффициэнтам (ax^2+bx+c=0) \n 10) Закончить вычисления \n");
            check = scanf("%d", &g);
            if (check == 1) {
                break;
            }
            system(CLEAR);
            while (getchar() != '\n');
            printf("Введите число.\n");
            printf("Нажмите Enter для продолжения...");
            getchar();
            system(CLEAR);
            printf("Выберите функцию, которую хотите выполнить: \n");
            printf(" 1) Арифметические Операции \n 2) Побитовые операции \n 3) Факториал \n 4) Тригонометрия \n 5) Логарифмы \n 6) Найти НОК и НОД двух чисел \n 7) Конвертация числа в другие системы \n 8) Площадь правильного n-угольника по стороне \n 9) Корень квадратного уравнения по заданным коэффициэнтам (ax^2+bx+c=0) \n 10) Закончить вычисления \n");
        }
        switch (g) {
            case 1: {
                l = -7777777;
                while(l != 0) {
                    system(CLEAR);
                    double a, b;
                    while (1) {
                        system(CLEAR);
                        printf("Выберите операцию, которую хотите выполнить: \n");
                        printf(" 1) Сложение \n 2) Вычитание \n 3) Умножение \n 4) Деление \n 5) Степень \n 0) Закончить \n");
                        printf("Введите число: ");
                        check = scanf("%d", &l);
                        if (check == 1) {
                            break;
                        }
                        system(CLEAR);
                        while (getchar() != '\n');
                        printf("Введите число.\n");
                        printf("Нажмите Enter для продолжения...");
                        getchar();
                        system(CLEAR);
                        printf("Выберите операцию, которую хотите выполнить: \n");
                        printf(" 1) Сложение \n 2) Вычитание \n 3) Умножение \n 4) Деление \n 5) Степень \n 0) Закончить \n");
                        printf("Введите число: ");
                    }
                    if(l == 0) break;
                    switch (l) {
                        case 1:
                            while (1) {
                                system(CLEAR);
                                printf("Введите первое число: ");
                                check = scanf("%lf", &a);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите первое число: \n ");
                            }
                            while (1) {
                                system(CLEAR);
                                printf("Введите второе число: ");
                                check = scanf("%lf", &b);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите второе число: \n ");
                            }
                            system(CLEAR);
                            printf("Ответ: %lf+%lf=%g \n", a, b, plus_func(a, b));    
                            pause();
                            break;
                        case 2:
                            while (1) {
                                system(CLEAR);
                                printf("Введите первое число: ");
                                check = scanf("%lf", &a);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите первое число: \n ");
                            }
                            while (1) {
                                system(CLEAR);
                                printf("Введите второе число: ");
                                check = scanf("%lf", &b);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите второе число: \n ");
                            }
                            system(CLEAR);
                            printf("Ответ: %lf-%lf=%g \n", a, b, minus_func(a, b));
                            pause();
                            break;
                        case 3:
                            while (1) {
                                system(CLEAR);
                                printf("Введите первое число: ");
                                check = scanf("%lf", &a);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите первое число: \n ");
                            }
                            while (1) {
                                system(CLEAR);
                                printf("Введите второе число: ");
                                check = scanf("%lf", &b);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите второе число: \n ");
                            }
                            system(CLEAR);
                            printf("Ответ: %lf*%lf=%g \n", a, b, multiply_func(a, b));
                            pause();
                            break;
                        case 4:
                            while (1) {
                                system(CLEAR);
                                printf("Введите первое число: ");
                                check = scanf("%lf", &a);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите первое число: \n ");
                            }
                            while (1) {
                                system(CLEAR);
                                printf("Введите второе число: ");
                                check = scanf("%lf", &b);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите второе число: \n ");
                            }
                            if(b == 0) {
                                system(CLEAR);
                                printf("На ноль делить нельзя.");
                                pause();
                                break;
                            } else {
                                system(CLEAR);
                                printf("Ответ: %lf/%lf=%g \n", a, b, devide_func(a, b));
                                pause();
                                break;
                            }
                        case 5:
                            while (1) {
                                system(CLEAR);
                                printf("Введите первое число: ");
                                check = scanf("%lf", &a);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите первое число: \n ");
                            }
                            while (1) {
                                system(CLEAR);
                                printf("Введите второе число: ");
                                check = scanf("%lf", &b);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите второе число: \n ");
                            }
                            system(CLEAR);
                            printf("Ответ: %g \n", pow(a, b));
                            pause();
                            break;
                        default:
                            if(l != 0) {
                                system(CLEAR);
                                printf("Введите верное число. \n");
                                pause();
                                break;    
                            }
                            break;
                        }
                    }
                if(l == 0) break;
            } break;
            case 2: {
                int c, d;
                l = -7777777;
                while(l != 0) {
                    system(CLEAR);
                    while (1) {
                        system(CLEAR);
                        printf("Выберите операцию: \n ");
                        printf("1) Побитовое И \n 2) Побитовое ИЛИ \n 3) Побитовый сдвиг влево \n 4) Побитовый сдвиг вправо \n 0) Закончить \n");
                        printf("Введите число: ");
                        check = scanf("%d", &l);
                        if (check == 1) {
                            break;
                        }
                        system(CLEAR);
                        while (getchar() != '\n');
                        printf("Введите число.\n");
                        printf("Нажмите Enter для продолжения...");
                        getchar();
                        system(CLEAR);
                        printf("Выберите операцию: \n ");
                        printf("1) Побитовое И \n 2) Побитовое ИЛИ \n 3) Побитовый сдвиг влево \n 4) Побитовый сдвиг вправо \n 0) Закончить \n");
                        printf("Введите число: ");
                    }
                    if(l == 0) break;
                    switch (l) {
                        case 1:
                            while (1) {
                                system(CLEAR);
                                printf("Введите первое число: ");
                                check = scanf("%d", &c);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите первое число: \n ");
                            }
                            while (1) {
                                system(CLEAR);
                                printf("Введите второе число: ");
                                check = scanf("%d", &d);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите второе число: \n ");
                            }
                            system(CLEAR);
                            printf("Ответ: %d&%d=%d \n", c, d, and_bite_func(c, d));
                            pause();
                            break;
                        case 2:
                            while (1) {
                                system(CLEAR);
                                printf("Введите первое число: ");
                                check = scanf("%d", &c);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите первое число: \n ");
                            }
                            while (1) {
                                system(CLEAR);
                                printf("Введите второе число: ");
                                check = scanf("%d", &d);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите второе число: \n ");
                            }
                            system(CLEAR);
                            printf("Ответ: %d|%d=%d \n", c, d, or_bite_func(c, d));
                            pause();
                            break;
                        case 3:
                            while (1) {
                                system(CLEAR);
                                printf("Введите первое число: ");
                                check = scanf("%d", &c);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите первое число: \n ");
                            }
                            while (1) {
                                system(CLEAR);
                                printf("Введите второе число: ");
                                check = scanf("%d", &d);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите второе число: \n ");
                            }
                            system(CLEAR);
                            printf("Ответ: %d<<%d=%d \n", c, d, left_bite_func(c, d));
                            pause();
                            break;
                        case 4:
                            while (1) {
                                system(CLEAR);
                                printf("Введите первое число: ");
                                check = scanf("%d", &c);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите первое число: \n ");
                            }
                            while (1) {
                                system(CLEAR);
                                printf("Введите второе число: ");
                                check = scanf("%d", &d);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите второе число: \n ");
                            }
                            system(CLEAR);
                            printf("Ответ: %d>>%d=%d \n", c, d, right_bite_func(c, d));
                            pause();
                            break;
                        default:
                            if(l != 0) {
                                system(CLEAR);
                                printf("Введите верное число. \n");
                                pause();
                                break;    
                            }
                            break;
                        }
                    }
                if(l == 0) break;
            } break;
            case 3: {
                long long e;
                l = -7777777;
                while(l != 0) {
                    system(CLEAR);
                    while (1) {
                        system(CLEAR);
                        printf("Выберите действие: \n");
                        printf("1) Найти факториал числа \n0) Завершить \n");
                        printf("Введите число: ");
                        check = scanf("%d", &l);
                        if (check == 1) {
                            break;
                        }
                        system(CLEAR);
                        while (getchar() != '\n');
                        printf("Введите число.\n");
                        printf("Нажмите Enter для продолжения...");
                        getchar();
                        system(CLEAR);
                        printf("Выберите действие: \n");
                        printf(" 1) Найти факториал числа \n 0) Завершить \n");
                        printf("Введите число: ");
                    }
                    if(l == 0) break;
                    else if(l == 1) {
                        while(1) {
                            while (1) {
                                system(CLEAR);
                                printf("Введите число: \n");
                                check = scanf("%lld", &e);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения...");
                                getchar();
                                system(CLEAR);
                                printf("Введите число: \n");
                            }
                            if(e < 0) {
                                system(CLEAR);
                                printf("Введите неотрицательное число. \n");
                                pause();
                            } else {
                                system(CLEAR);
                                printf("Ответ: %lld \n", factorial(e));
                                pause();
                                break;
                            }
                        }
                    } else {
                        system(CLEAR);
                        printf("Введите верное число.\n");
                        pause();
                    }
                    }
                if(l == 0) break;
            } break;
            case 4: {
                double q;
                l = -7777777;
                while(l != 0) {
                    system(CLEAR);
                    while (1) {
                        system(CLEAR);
                        printf("Что вы хотите найти? Введите число в радианах. \n 1) sin \n 2) cos \n 3) tg \n 4) ctg \n 0) Закончить \n");
                        printf("Введите число: ");
                        check = scanf("%d", &l);
                        if (check == 1) {
                            break;
                        }
                        system(CLEAR);
                        while (getchar() != '\n');
                        printf("Введите число.\n");
                        printf("Нажмите Enter для продолжения...");
                        getchar();
                        system(CLEAR);
                        printf("Что вы хотите найти? Введите число в радианах. \n 1) sin \n 2) cos \n 3) tg \n 4) ctg \n 0) Закончить \n");
                        printf("Введите число: ");
                    }
                    if(l == 0) break;
                    switch (l) {
                        case 1:
                            while (1) {
                                system(CLEAR);
                                printf("Введите число: ");
                                check = scanf("%lf", &q);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите число: \n ");
                            }
                            system(CLEAR);
                            printf("Ответ: %g \n", sin(q));
                            pause();
                            break;
                        case 2:
                            while (1) {
                                system(CLEAR);
                                printf("Введите число: ");
                                check = scanf("%lf", &q);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите число: \n ");
                            }
                            system(CLEAR);
                            printf("Ответ: %g \n", cos(q));
                            pause();
                            break;
                        case 3:
                            while (1) {
                                system(CLEAR);
                                printf("Введите число: ");
                                check = scanf("%lf", &q);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите число: \n ");
                            }
                            system(CLEAR);
                            printf("Ответ: %g \n", tan(q));
                            pause();
                            break;
                        case 4:
                            while (1) {
                                system(CLEAR);
                                printf("Введите число: ");
                                check = scanf("%lf", &q);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите число: \n ");
                            }
                            system(CLEAR);
                            printf("Ответ: %g \n", 1/tan(q));
                            pause();
                            break;
                        default:
                            system(CLEAR);
                            printf("Введите число, относящееся к какому-то из чисел по выбору. \n");
                            pause();
                            break;
                    }
                }
                if(l == 0) break;
            } break;
            case 5: {
                l = -7777777;
                while(l != 0) {
                    system(CLEAR);
                    while (1) {
                        system(CLEAR);
                        printf("Какой логарифм вы хотите найти? \n 1) Натуральный \n 2) По основанию \n 0) Завершить \n");
                        printf("Введите число: ");
                        check = scanf("%d", &l);
                        if (check == 1) {
                            break;
                        }
                        system(CLEAR);
                        while (getchar() != '\n');
                        printf("Введите число.\n");
                        printf("Нажмите Enter для продолжения...");
                        getchar();
                        system(CLEAR);
                        printf("Какой логарифм вы хотите найти? \n 1) Натуральный \n 2) По основанию \n 0) Завершить \n");
                        printf("Введите число: ");
                    }
                    if(l == 0) break;
                    if(l == 1) {
                        double p;
                        while (1) {
                            system(CLEAR);
                            printf("Введите число: ");
                            check = scanf("%lf", &p);
                            if (check == 1) {
                                break;
                            }
                            system(CLEAR);
                            while (getchar() != '\n');
                            printf("Введите число.\n");
                            printf("Нажмите Enter для продолжения... \n");
                            getchar();
                            system(CLEAR);
                            printf("Введите число: \n ");
                        }
                        if (p<=0) {
                            system(CLEAR);
                            printf("Аргумент должен быть положительным. \n");
                            pause();
                        } else {
                            system(CLEAR);
                            printf("Ответ: %g \n", log(p));
                            pause();
                        }
                    } else if (l == 2) {
                        double p, o;
                        while (1) {
                            system(CLEAR);
                            printf("Введите основание логарифма: ");
                            check = scanf("%lf", &p);
                            if (check == 1) {
                                break;
                            }
                            system(CLEAR);
                            while (getchar() != '\n');
                            printf("Введите число.\n");
                            printf("Нажмите Enter для продолжения... \n");
                            getchar();
                            system(CLEAR);
                            printf("Введите основание логарифма: \n");
                        }
                        while (1) {
                            system(CLEAR);
                            printf("Введите аргумент: ");
                            check = scanf("%lf", &o);
                            if (check == 1) {
                                break;
                            }
                            system(CLEAR);
                            while (getchar() != '\n');
                            printf("Введите число.\n");
                            printf("Нажмите Enter для продолжения... \n");
                            getchar();
                            system(CLEAR);
                            printf("Введите аргумент: \n");
                        }
                        if(p != 1 && p>0 && o > 0) {
                            system(CLEAR);
                            printf("Ответ: %g \n", log(o)/log(p));
                            pause();
                        } else {
                            system(CLEAR);
                            printf("Ошибка, введите верные значения. \n");
                            pause();
                        }
                    } else {
                        system(CLEAR);
                        printf("Введите верное число. \n");
                        pause();
                    }
                }
                if(l == 0) break;
            } break;
            case 6: {
                int c, d;
                l = -7777777;
                while(l != 0) {
                    system(CLEAR);
                    while (1) {
                        system(CLEAR);
                        printf("Что вы хотите найти? \n 1) НОД \n 2) НОК \n 0) Завершить \n");
                        printf("Введите число: ");
                        check = scanf("%d", &l);
                        if (check == 1) {
                            break;
                        }
                        system(CLEAR);
                        while (getchar() != '\n');
                        printf("Введите число.\n");
                        printf("Нажмите Enter для продолжения...");
                        getchar();
                        system(CLEAR);
                        printf("Что вы хотите найти? \n 1) НОД \n 2) НОК \n 0) Завершить \n");
                        printf("Введите число: ");
                    }
                    if(l == 0) break;
                    else if (l == 1){
                        while (1) {
                            system(CLEAR);
                            printf("Введите первое число: ");
                            check = scanf("%d", &c);
                            if (check == 1) {
                                break;
                            }
                            system(CLEAR);
                            while (getchar() != '\n');
                            printf("Введите число.\n");
                            printf("Нажмите Enter для продолжения... \n");
                            getchar();
                            system(CLEAR);
                            printf("Введите первое число: \n ");
                        }
                        while (1) {
                            system(CLEAR);
                            printf("Введите второе число: ");
                            check = scanf("%d", &d);
                            if (check == 1) {
                                break;
                            }
                            system(CLEAR);
                            while (getchar() != '\n');
                            printf("Введите число.\n");
                            printf("Нажмите Enter для продолжения... \n");
                            getchar();
                            system(CLEAR);
                            printf("Введите второе число: \n ");
                        }
                        if (c <= 0 || d <= 0) {
                            system(CLEAR);
                            printf("Введите положительные числа.\n");
                            pause();
                            continue;
                        }
                        int k = c, m = d;
                        while (m != 0) {
                            k %= m;
                            int temp = k;
                            k = m;
                            m = temp;
                        }
                        system(CLEAR);
                        printf("Ответ: %d \n", k);
                        pause();
                    } else if (l == 2) {
                        while (1) {
                            system(CLEAR);
                            printf("Введите первое число: ");
                            check = scanf("%d", &c);
                            if (check == 1) {
                                break;
                            }
                            system(CLEAR);
                            while (getchar() != '\n');
                            printf("Введите число.\n");
                            printf("Нажмите Enter для продолжения... \n");
                            getchar();
                            system(CLEAR);
                            printf("Введите первое число: \n ");
                        }
                        while (1) {
                            system(CLEAR);
                            printf("Введите второе число: ");
                            check = scanf("%d", &d);
                            if (check == 1) {
                                break;
                            }
                            system(CLEAR);
                            while (getchar() != '\n');
                            printf("Введите число.\n");
                            printf("Нажмите Enter для продолжения... \n");
                            getchar();
                            system(CLEAR);
                            printf("Введите второе число: \n ");
                        }
                        if (c <= 0 || d <= 0) {
                            system(CLEAR);
                            printf("Введите положительные числа.\n");
                            pause();
                            continue;
                        }
                        int k = c, m = d;
                        while (m != 0) {
                            k %= m;
                            int temp = k;
                            k = m;
                            m = temp;
                        }
                        int nod = k;
                        system(CLEAR);
                        printf("Ответ: %lld \n", (long long)(c / nod) * d);
                        pause();
                    } else {
                        system(CLEAR);
                        printf("Введите верное число.\n");
                        pause();
                    }
                }
                if(l == 0) break;
            } break;
            case 7: {
                int c;
                l = -7777777;
                while(l != 0) {
                    system(CLEAR);
                    while (1) {
                        system(CLEAR);
                        printf("В какую систему вы хотите перевести: \n 1) 2 \n 2) 8 \n 3) 10 \n 4) 16 \n 0) Завершить \n");
                        printf("Введите число: ");
                        check = scanf("%d", &l);
                        if (check == 1) {
                            break;
                        }
                        system(CLEAR);
                        while (getchar() != '\n');
                        printf("Введите число.\n");
                        printf("Нажмите Enter для продолжения...");
                        getchar();
                        system(CLEAR);
                        printf("В какую систему вы хотите перевести: \n 1) 2 \n 2) 8 \n 3) 10 \n 4) 16 \n 0) Завершить \n");
                        printf("Введите число: ");
                    }
                    if(l == 0) break;
                    switch (l) {
                        case 1:
                            while (1) {
                                system(CLEAR);
                                printf("Введите число: ");
                                check = scanf("%d", &c);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите число: \n ");
                            }
                            system(CLEAR);
                            printf("Ответ: ");
                            print_binary(c);
                            pause();
                            break;
                        case 2:
                            while (1) {
                                system(CLEAR);
                                printf("Введите число: ");
                                check = scanf("%d", &c);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите число: \n ");
                            }
                            system(CLEAR);
                            printf("Ответ: %o \n", c);
                            pause();
                            break;
                        case 3:
                            while (1) {
                                system(CLEAR);
                                printf("Введите число: ");
                                check = scanf("%d", &c);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите число: \n ");
                            }
                            system(CLEAR);
                            printf("Ответ: %d \n", c);
                            pause();
                            break;
                        case 4:
                            while (1) {
                                system(CLEAR);
                                printf("Введите число: ");
                                check = scanf("%d", &c);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите число: \n ");
                            }
                            system(CLEAR);
                            printf("Ответ: %x \n", c);
                            pause();
                            break;
                        case 0:
                            break;
                        default:
                            system(CLEAR);
                            printf("Введите корректное число \n");
                            pause();
                            break;
                    }
                }
                if(l == 0) break;
            } break;
            case 8: {
                int a;
                double b;
                l = -7777777;
                while(l != 0) {
                    system(CLEAR);
                    while (1) {
                        system(CLEAR);
                        printf("Выберите действие: \n");
                        printf(" 1) Вычислить площадь \n 0) Завершить \n");
                        printf("Введите число: ");
                        check = scanf("%d", &l);
                        if (check == 1) {
                            break;
                        }
                        system(CLEAR);
                        while (getchar() != '\n');
                        printf("Введите число.\n");
                        printf("Нажмите Enter для продолжения...");
                        getchar();
                        system(CLEAR);
                        printf("Выберите действие: \n");
                        printf(" 1) Вычислить площадь \n 0) Завершить \n");
                        printf("Введите число: ");
                    }
                    if(l==0) break;
                    else if(l == 1) {
                        while (1) {
                                system(CLEAR);
                                printf("Введите количество сторон: ");
                                check = scanf("%d", &a);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите количество сторон: \n ");
                            }
                            while (1) {
                                system(CLEAR);
                                printf("Введите длинну стороны: ");
                                check = scanf("%lf", &b);
                                if (check == 1) {
                                    break;
                                }
                                system(CLEAR);
                                while (getchar() != '\n');
                                printf("Введите число.\n");
                                printf("Нажмите Enter для продолжения... \n");
                                getchar();
                                system(CLEAR);
                                printf("Введите длинну стороны: \n ");
                            }
                        if(a<3) {
                            system(CLEAR);
                            printf("Количество сторон должно быть не меньше 3. \n");
                            pause();
                        } else {
                            if (b<=0) {
                                system(CLEAR);
                                printf("Сторона должна иметь положительно значение. \n");
                                pause();
                            } else {
                                system(CLEAR);
                                printf("%g \n", ((double)a*b*b)/(4*tan(3.1415926535897932384626433/a)));
                                pause();
                            }
                        }
                    } else {
                        system(CLEAR);
                        printf("Введите верное значение. \n");
                        pause();
                    }
                }
                if(l == 0) break;
            } break;
            case 9: {
                double a, b, c;
                l = -7777777;
                while(l != 0) {
                    system(CLEAR);
                    while (1) {
                        system(CLEAR);
                        printf("Выберите действие: \n");
                        printf(" 1) Найти корни квадратного уравнения \n 0) Завершить \n");
                        printf("Введите число: ");
                        check = scanf("%d", &l);
                        if (check == 1) {
                            break;
                        }
                        system(CLEAR);
                        while (getchar() != '\n');
                        printf("Введите число.\n");
                        printf("Нажмите Enter для продолжения...");
                        getchar();
                        system(CLEAR);
                        printf("Выберите действие: \n");
                        printf(" 1) Найти корни квадратного уравнения \n 0) Завершить \n");
                        printf("Введите число: ");
                    }
                    if(l == 0) break;
                    else if (l == 1) {
                        double d;
                        while (1) {
                            system(CLEAR);
                            printf("Введите подряд коэффициенты a, b, c: ax^2+bx+c=0 \n");
                            printf("Коэффициент a: \n");
                            check = scanf("%lf", &a);
                            if (check == 1) {
                                break;
                            }
                            system(CLEAR);
                            while (getchar() != '\n');
                            printf("Введите число.\n");
                            printf("Нажмите Enter для продолжения...");
                            getchar();
                            system(CLEAR);
                            printf("Введите подряд коэффициенты a, b, c: ax^2+bx+c=0 \n");
                            printf("Коэффициент a: \n");
                        }
                        while (1) {
                            system(CLEAR);
                            printf("Введите подряд коэффициенты a, b, c: ax^2+bx+c=0 \n");
                            printf("Коэффициент b: \n");
                            check = scanf("%lf", &b);
                            if (check == 1) {
                                break;
                            }
                            system(CLEAR);
                            while (getchar() != '\n');
                            printf("Введите число.\n");
                            printf("Нажмите Enter для продолжения...");
                            getchar();
                            system(CLEAR);
                            printf("Введите подряд коэффициенты a, b, c: ax^2+bx+c=0 \n");
                            printf("Коэффициент b: \n");
                        }
                        while (1) {
                            system(CLEAR);
                            printf("Введите подряд коэффициенты a, b, c: ax^2+bx+c=0 \n");
                            printf("Коэффициент c: \n");
                            check = scanf("%lf", &c);
                            if (check == 1) {
                                break;
                            }
                            system(CLEAR);
                            while (getchar() != '\n');
                            printf("Введите число.\n");
                            printf("Нажмите Enter для продолжения...");
                            getchar();
                            system(CLEAR);
                            printf("Введите подряд коэффициенты a, b, c: ax^2+bx+c=0 \n");
                            printf("Коэффициент c: \n");
                        }
                        d = b*b-4*a*c;
                        if(a == 0) {
                            if(b == 0) {
                                if(c == 0) {
                                    system(CLEAR);
                                    printf("Бесконечно много решений. \n");
                                    pause();
                                } else {
                                    system(CLEAR);
                                    printf("Решений нет. \n");
                                    pause();
                                }
                            } else {
                                system(CLEAR);
                                printf("Ответ: %g", -c/b);
                                pause();
                            }
                        } else {
                            if(d<0) {
                                system(CLEAR);
                                printf("Решений нет. \n");
                                pause();
                            } else if(d == 0) {
                                system(CLEAR);
                                printf("Ответ: %g \n", (-b) / (2*a));
                                pause();
                            } else {
                                system(CLEAR);
                                printf("%g %g \n", (-b-sqrt(d))/(2*a), (-b+sqrt(d))/(2*a));
                                pause();
                            }
                        }
                    } else {
                        system(CLEAR);
                        printf("Введите верное значение. \n");
                        pause();
                    }
                }
                if(l==0) break;
            } break;
            case 10:
                system(CLEAR);
                return 0;
            
            default:
                system(CLEAR);
                printf("Введите верное число. \n");
                pause();
                break;
        }
    }
    return 0;
}