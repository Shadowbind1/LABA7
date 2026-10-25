#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include<locale.h>

void check_symbol(char c);
void calculator(float x, char op, float y);
void month_name(int month);   

int main(void)
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, ".UTF-8");

    int choice;

    printf("=== Работа 7. Многоальтернативная обработка ===\n");
    printf("1 - Определение: буква или цифра\n");
    printf("2 - Калькулятор (+ - * / ^)\n");
    printf("3 - Название месяца по номеру (индивидуальный)\n");
    printf("Выберите задание: ");
    scanf("%d", &choice);

    while (getchar() != '\n');


    if (choice == 1)
    {
        char c;
        printf("Введите один символ: ");
        scanf("%c", &c);
        check_symbol(c);
    }


    else if (choice == 2)
    {
        float x, y;
        char op;

        printf("Введите выражение (пример: 5.2+3.1 или 2^3): ");

        scanf("%f%c%f", &x, &op, &y);

        calculator(x, op, y);
    }

    else if (choice == 3)
    {
        int month;
        printf("Введите номер месяца (1-12): ");
        scanf("%d", &month);
        month_name(month);
    }

    else
    {
        printf("Неверный номер задания!\n");
    }

    return 0;
}



/* Задание 1: буква или цифра (с использованием switch) */
void check_symbol(char c)
{
    switch (c)
    {
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        printf("Это цифра\n");
        break;

    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
    case 'g': case 'h': case 'i': case 'j': case 'k': case 'l':
    case 'm': case 'n': case 'o': case 'p': case 'q': case 'r':
    case 's': case 't': case 'u': case 'v': case 'w': case 'x':
    case 'y': case 'z':
    case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
    case 'G': case 'H': case 'I': case 'J': case 'K': case 'L':
    case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R':
    case 'S': case 'T': case 'U': case 'V': case 'W': case 'X':
    case 'Y': case 'Z':
        printf("Это буква\n");
        break;

    default:
        printf("Неизвестный символ\n");
    }
}

/* Задание 2: калькулятор + дополнительная операция  */
void calculator(float x, char op, float y)
{
    switch (op)
    {
    case '+':
        printf("= %.2f\n", x + y);
        break;
    case '-':
        printf("= %.2f\n", x - y);
        break;
    case '*':
        printf("= %.2f\n", x * y);
        break;
    case '/':
        if (y != 0.0f)
            printf("= %.2f\n", x / y);
        else
            printf("Ошибка: деление на ноль\n");
        break;
    case '^':  
        printf("= %.2f\n", pow(x, y));
        break;
    default:
        printf("Неизвестная операция\n");
    }
}

/* Задание 3: название месяца по номеру (switch) */
void month_name(int month)
{
    switch (month)
    {
    case 1:  printf("Январь\n");   break;
    case 2:  printf("Февраль\n");  break;
    case 3:  printf("Март\n");     break;
    case 4:  printf("Апрель\n");   break;
    case 5:  printf("Май\n");      break;
    case 6:  printf("Июнь\n");     break;
    case 7:  printf("Июль\n");     break;
    case 8:  printf("Август\n");   break;
    case 9:  printf("Сентябрь\n"); break;
    case 10: printf("Октябрь\n");  break;
    case 11: printf("Ноябрь\n");   break;
    case 12: printf("Декабрь\n");  break;
    default:
        printf("Неверный номер месяца\n");
    }
}