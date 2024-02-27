#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string sentence;

    // ��� ������� � �����������
    std::cout << "������ �������, �� ���������� '...': ";
    std::getline(std::cin, sentence);

    // �������� �� ���������� ������� �� '...'
    if (sentence.size() >= 3 && sentence.substr(sentence.size() - 3) == "...") {
        // ��������� '...' � ���� �������
        sentence.erase(sentence.size() - 3);

        // ����������� ������� ���� '�' � ������
        int count = std::count(sentence.begin(), sentence.end(), '�');

        if (count == 0) {
            // ���� ����� '�' �������, ������������ �������, �� �� ����� '�' - ����������
            std::transform(sentence.begin(), sentence.end(), sentence.begin(), [](unsigned char c) {
                return (c == '�' || c == '�') ? '�' : c;
            });

            // ��������� ������������� �������
            std::cout << "������� � ������� '�' � ������������� ������: " << sentence << std::endl;
        } else {
            // ��������� ������� ���� '�' � ��������� ������
            std::cout << "ʳ������ ���� '�' � ��������� ������: " << count << std::endl;
        }
    } else {
        std::cout << "������� ������� �� ���������� '...'." << std::endl;
    }

    return 0;
}
