# Лабораторная работа 2 - Циклы и условия

## Теория

В C++ существует два оператора ветвления кода:
- `if`
- `switch`

### Оператор `if`
Операторы ветвления позволяют программе менять поведение
в зависимости от какого - либо условия, заданного программистом

Вспомним(или узнаем) логические операторы

| Оператор С++ | Условие | Смысл условия        |
|--------------|---------|----------------------|
| ==           | a == b  | a равно b            |
| !=           | a != b  | a не равно b         |
| \>           | a > b   | а больше b           |
| <            | a < b   | a меньше b           |
| \>=          | a >= b  | a больше или равно b |
| <=           | a <= b  | a меньше или равно b |
 
Рассмотрим пример

```c++
#include <iostream> 

int main() {
    int value;
    std::cout << "Enter value: ";
    std::cin >> value;
    
    if ( a > 10) {
        std::cout << "Value is higher than 10";
    } else {
        std::cout << "Value is less or equal to 10";
    }
    std::cout << "\n";
    return 0;
}
```

Таким образом, если пользователь введёт число больше 10, он получит одну строчку, а если меньшее или равное, другую.

### Оператор `if-else if-else`

Расширим этот пример конструкцией `if-else if-else`

```c++
#include <iostream>

int main() {
    int value;
    std::cout << "Enter value: ";
    std::cin >> value;
    
    if (a > 10) {
        std::cout << "Value is higher than 10";
    } else if ( a == 10 ) {
        std::cout << "Value is equal to 10";
    } else {
        std::cout << "Value is less than 10";
    }
    std::cout << '\n';
    return 0;
}
```

Теперь, если число равно 10, на консоль будет выведена строка `Value is equal to 10`

### Использование логических операторов

Также в блоках условий можно использовать [логические операторы](https://ravesli.com/urok-43-logicheskie-operatory-i-ili-ne/) (тут нужен впн)

```c++

#include <iostream>
 
int main()
{
    std::cout << "Enter an integer: ";
    int a;
    std::cin >> a;
 
    std::cout << "Enter another integer: ";
    int b;
    std::cin >> b;
 
    if (a > 0 && b > 0) { // && - это логическое И. Проверяем, являются ли оба условия истинными
        std::cout << "Both numbers are positive\n";
    } else if (a > 0 || b > 0) { // || - это логическое ИЛИ. Проверяем, является ли истинным хоть одно из условий
        std::cout << "One of the numbers is positive\n";
    } else {
        std::cout << "Neither number is positive\n";
    }
    return 0;
```

### Оператор `switch`

Рано или поздно у программиста возникает вопрос: "а зачем использовать что - то кроме `if-else`"?

Рассмотрим пример:

```c++
#include <iostream>
 
enum Colours
{
    COLOUR_GRAY,
    COLOUR_PINK,
    COLOUR_BLUE,
    COLOUR_PURPLE,
    COLOUR_RED
};
 
void print_colour(Colours colour)
{
    if (colour == COLOUR_GRAY)
        std::cout << "Gray";
    else if (colour == COLOUR_PINK)
        std::cout << "Pink";
    else if (colour == COLOUR_BLUE)
        std::cout << "Blue";
    else if (colour == COLOUR_PURPLE)
        std::cout << "Purple";
    else if (colour == COLOUR_RED)
        std::cout << "Red";
    else
        std::cout << "Unknown";
}
 
int main()
{
    print_colour(COLOUR_BLUE);
 
    return 0;
}
```

Неказисто, некрасиво, можно было бы лучше и лаконичнее. Тут и приходит на помощь оператор `switch`

```c++
#include <iostream>

enum Colours
{
  COLOUR_GRAY,
  COLOUR_PINK,
  COLOUR_BLUE,
  COLOUR_PURPLE,
  COLOUR_RED
};

void print_colour(Colours colour)
{
  std::cout << "The colour is: ";
  switch (colour) {
    case COLOUR_GRAY:
      std::cout << "gray";
      break;
    case COLOUR_PINK:
      std::cout << "pink";
    case COLOUR_BLUE:
      std::cout << "blue";
      break;
    case COLOUR_PURPLE:
      std::cout << "purple";
      break;
    case COLOUR_RED:
      std::cout << "red";
      break;
    default:
      std::cout << "unknown";
      break;
  }
  std::cout << "\n";
}
 
int main()
{
  print_colour(COLOUR_BLUE);
  return 0;
}

```


## Дальнейшее чтение
[Оператор ветвления ч.1](http://cppstudio.com/post/286/) <br/>
[Оператор ветвления ч.2](http://cppstudio.com/post/291/) <br/>
[Логические операции](http://cppstudio.com/post/297/) <br/>
[Оператор switch](http://cppstudio.com/post/306/) <br/>

## Задание 1
С клавиатуры вводятся числа X, Y, Z. Необходимо записать условие, которое является истинным, когда:
* каждое из чисел X и Y нечетное;
* только одно из чисел X и Y меньше 20;
* хотя бы одно из чисел X и Y равно нулю;
* каждое из чисел X, Y, Z отрицательное;
* только одно из чисел X, Y и Z кратно пяти;
* хотя бы одно из чисел X, Y, Z больше 100.
* существует ли треугольник с такими сторонами

В случае, если условие выполняется вывести на экран - `condition is true`, иначе `condition is false`.


## Задание 2
Клетка на шахматной доски определяется парой натуральных чисел, каждое из которых не превосходит 8:
первое число — номер вертикали (при счете слева направо), второе — номер горизонтали (при счете снизу вверх).

Даны две координаты шахматных фигур. Числа x1, y1, x2, y2 не превосходят 8. (Кстати тут было бы здорово использовать структуры)

**Требуется:**
* На поле A(x1, y1) расположена ладья. Записать условие, при котором она угрожает полю B(x2, y2).
* На поле A(x1, y1) расположен слон. Записать условие, при котором он угрожает полю B(x2, y2).
* На поле A(x1, y1) расположен король. Записать условие, при котором он может одним ходом попасть на поле B(x2, y2).
* На поле A(x1, y1) расположен ферзь. Записать условие, при котором он угрожает полю B(x2, y2).
* На поле A(x1, y1) расположена белая пешка. Записать условие, при котором она может одним ходом попасть на поле B(x2, y2):
    * при обычном ходе;
    * когда она "бьет" фигуру или пешку соперника.


## Задание 3
* Составить расписание на неделю. Пользователь вводит порядковый номер дня недели, программа должна вывести то, что запланировано на этот день.
* Пользователь вводит число (необязательно от 1 до 12). Программа должна вывести название месяца.
