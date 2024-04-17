#include <iostream>


/*
В рамках организации благотворительного марафона, необходимо 
создать программу для регистрации участников, которая строго 
проверяет возрастные ограничения. Марафон открыт для участников 
в возрасте от 18 до 60 лет включительно. Программа должна запросить 
у пользователя его возраст и выбранную дистанцию, а затем проверить, 
удовлетворяет ли возраст условиям участия в марафоне. 
Если условия нарушены, программа должна сгенерировать исключение.

Задачи:
Определить класс исключения AgeRestrictionException, 
который должен содержать сообщение об ошибке, указывающее на
 то, что возраст участника не соответствует требованиям.
Создать функцию registerParticipant, которая принимает возраст
 участника и выбранную дистанцию. Функция должна проверять, 
 соответствует ли возраст ограничениям. Если нет, функция должна 
 бросить исключение AgeRestrictionException.
В функции main реализовать запрос на ввод возраста и дистанции
 от пользователя, вызов функции registerParticipant и обработку
 возможного исключения, выводящую сообщение об ошибке, если возраст
  участника не попадает в допустимый диапазон.
Требования:
Использовать механизм исключений C++ для обработки ошибок, 
связанных с возрастными ограничениями.
Предусмотреть корректную обработку пользовательского ввода, включая
 ввод нечисловых значений.
Вывести подтверждение успешной регистрации, если возраст участника 
соответствует требованиям.

Введите ваш возраст: 25
Выберите дистанцию (5km, 10km, 21km): 10km
Регистрация успешно завершена!

Введите ваш возраст: 17
Выберите дистанцию (5km, 10km, 21km): 5km
Ошибка: Ваш возраст не соответствует требованиям для участия в
 марафоне.

*/

#include <iostream>
#include <exception>



int main() {
  try {
    registerParticipant(17);
  } catch (AgeRestrictionException& e) {
    std::cout << "Ошибка: " << e.what() << std::endl;
  }

  try {
    registerParticipant(50);
  } catch (AgeRestrictionException& e) {
    std::cout << "Ошибка: " << e.what() << std::endl;
  }

  return 0;
}