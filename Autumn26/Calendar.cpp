#include <iostream>

bool leap_year(int year){
    bool ly;
    if (year % 400 == 0) {
        ly = true;
    }
    else if (year % 100 == 0) {
        ly = false;
    }
    else if (year % 4 == 0) {
        ly = true;
    }
    else {
        ly = false;
    }
    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    int days_in_month;
    if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) {
        days_in_month = 30;
    }
    else if (m1 == 2) {
        if (leap_year(y1)) {
            days_in_month = 29;
        }
        else {
            days_in_month = 28;
        }
    }
    else {
        days_in_month = 31;
    }

    if (d1 < days_in_month) {          // ordinary day
        d2 = d1 + 1;
        m2 = m1;
        y2 = y1;
    }
    else if (m1 < 12) {                // end of month, not December
        d2 = 1;
        m2 = m1 + 1;
        y2 = y1;
    }
    else {                             // 31 December
        d2 = 1;
        m2 = 1;
        y2 = y1 + 1;
    }
}

int main(){
    int d, m, y;
    int nd, nm, ny;

    next_date(14, 3, 2026, nd, nm, ny);
    std::cout << nd << "/" << nm << "/" << ny << std::endl;   // 15/3/2026

    next_date(30, 4, 2026, nd, nm, ny);
    std::cout << nd << "/" << nm << "/" << ny << std::endl;   // 1/5/2026

    next_date(28, 2, 2023, nd, nm, ny);
    std::cout << nd << "/" << nm << "/" << ny << std::endl;   // 1/3/2023

    next_date(28, 2, 2024, nd, nm, ny);
    std::cout << nd << "/" << nm << "/" << ny << std::endl;   // 29/2/2024

    next_date(29, 2, 2024, nd, nm, ny);
    std::cout << nd << "/" << nm << "/" << ny << std::endl;   // 1/3/2024

    next_date(28, 2, 1900, nd, nm, ny);
    std::cout << nd << "/" << nm << "/" << ny << std::endl;   // 1/3/1900

    next_date(31, 12, 2026, nd, nm, ny);
    std::cout << nd << "/" << nm << "/" << ny << std::endl;   // 1/1/2027

    std::cout << "enter a date (d m y)" << std::endl;
    std::cin >> d >> m >> y;
    next_date(d, m, y, nd, nm, ny);
    std::cout << "next day: " << nd << "/" << nm << "/" << ny << std::endl;
}
