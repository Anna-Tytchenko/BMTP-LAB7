#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string sentence;

    // Ввід речення в користувача
    std::cout << "Введіть речення, що закінчується '...': ";
    std::getline(std::cin, sentence);

    // Перевірка чи закінчується речення на '...'
    if (sentence.size() >= 3 && sentence.substr(sentence.size() - 3) == "...") {
        // Видалення '...' з кінця речення
        sentence.erase(sentence.size() - 3);

        // Знаходження кількості літер 'з' у реченні
        int count = std::count(sentence.begin(), sentence.end(), 'з');

        if (count == 0) {
            // Якщо літера 'з' відсутня, перетворюємо речення, де всі літери 'з' - заголовкові
            std::transform(sentence.begin(), sentence.end(), sentence.begin(), [](unsigned char c) {
                return (c == 'з' || c == 'З') ? 'З' : c;
            });

            // Виведення результуючого речення
            std::cout << "Речення з літерами 'З' у заголовковому регістрі: " << sentence << std::endl;
        } else {
            // Виведення кількості літер 'з' у введеному реченні
            std::cout << "Кількість літер 'з' у введеному реченні: " << count << std::endl;
        }
    } else {
        std::cout << "Введене речення не закінчується '...'." << std::endl;
    }

    return 0;
}
