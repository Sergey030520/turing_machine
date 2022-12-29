#turing_machine
<h3 align="left">Languages and Tools:</h3>
<p align="left"> 
<a href="https://www.w3schools.com/cpp/" target="_blank" rel="noreferrer"><img src="https://github.com/Sergey030520/turing_machine/blob/master/icons-c-programming" alt="cplusplus" width="40" height="40"/> </a> 
<a href="https://git-scm.com/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/git-scm/git-scm-icon.svg" alt="git" width="40" height="40"/> </a>
<a href="https://cmake.org/" rel="noreferrer"><img src="https://www.vectorlogo.zone/logos/cmake/cmake-icon.svg" alt="Cmake" width="40" height="40"/></a>
</p>

# search_engine

## Оглавление
1. [<p style='font-size: 20px'>Описание проекта</p>](#description_project)
2. [<p style='font-size: 20px'>Инструкция по подключению библиотек</p>](#description_project)
3. [<p style='font-size: 20px'>Сборка проекта и тестирование</p>](#build_and_testing_project)
4. [<p style='font-size: 20px'>Инструкция по сборке проекта</p>](#manual_build_project)
## Описание программы<a name="description_project"></a>

Описать алгоритм машины Тьюринга в [табличном виде](https://github.com/Sergey030520/turing_machine/blob/master/table_turing_machine.png) и реализовать получившийся
автомат на языке Си.<br>
Алгоритм:
+ Дана десятичная запись натурального числа n > 1. Разработать машину Тьюринга,
которая уменьшала бы заданное число n на 1. Автомат в состоянии q1 обозревает правую
цифру числа.

## Инструкция по подключению библиотек <a name="manual_connect_library"></a>

В проекте уже сгенерирован файл конфигурации:
1.  [CMakeLists.txt](https://github.com/Sergey030520/turing_machine/blob/master/CMakeLists.txt) — основной файл конфигурации;

## Сборка проекта и тестирование <a name="build_and_testing_project"></a>
Данный проект был собран и протестирован с помощью таких компилятора [MSVC 2019](https://learn.microsoft.com/en-us/visualstudio/releases/2019/release-notes).
Программа разработана на языке C 90 стандарта и
поддерживает следующие операционные системы:
+ Windows 10
+ Windows 11

## Инструкция по сборке проекта <a name="manual_build_project"></a>

Сборка проекта производится с помощью инструмента [CMake](https://cmake.org/). В терминале компьютера необходимо прописать следующие команды:

```
cmake --build . --config Release --target main
```
