#include <iostream>

class Data {
public:
    // ��ȡָ����ݺ��·ݵ�����
    int GetMonthDay(int year, int month) {
        int monthDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        // �Ƕ����������꣬����29��
        if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) {
            return 29;
        }
        return monthDays[month];
    }

    // ���캯��
    Data(int year = 0, int month = 1, int day = 1) {
        if (year >= 0 && month >= 1 && month <= 12 && day >= 1 && day <= GetMonthDay(year, month)) {
            _year = year;
            _month = month;
            _day = day; // �������� day ��ֵ�� _day
        } else {
            std::cout << "�Ƿ�����" << std::endl;
            _year = 0;
            _month = 1;
            _day = 1;
        }
    }

    // �������캯��
    Data(const Data &d) { // ʹ�� const �����Ա����޸�ԭ����
        _year = d._year;
        _month = d._month;
        _day = d._day;
    }

    //d1 < d2
    //d1.operator<(&d1,d2)
    bool operator<(const Data &d) const {
        if (_year < d._year) {
            return true;
        } else if (_year == d._year && _month < d._month) {
            return true;
        } else if (_year == d._year && _month == d._month && _day < d._day) {
            return true;
        }
        return false;
    }

    bool operator==(const Data &d) const {
        return _year == d._year && _month == d._month && _day == d._day;
    }

    bool operator<=(const Data &d) const {
        return *this < d || *this == d;
    }

    bool operator>(const Data &d){
        return !(*this <= d);
    }

    void Print() {
        std::cout << _year << "-" << _month << "-" << _day << std::endl;
    }

private:
    int _year;
    int _month;
    int _day;
};

int main() {
    Data d1;
    d1.Print();
    Data d2(2021, 2, 29); // ����һ���Ƿ�����
    d2.Print();
}
//һ�깫תһȦ��������ת365�죬ÿ��365�죬��Ŷ��5h
//ÿ�����꣬����ӽ�24Сʱ