#include<iostream.h>
#include<conio.h>
#include<process.h>

class date {
public:
    int flag, dd, mm, yy;

    date(int d, int m, int y) {
        dd = d;
        mm = m;
        yy = y;
        if ((y % 4) == 0)
            flag = 1;
        else {
            flag = 0;
            if (m == 2 && d > 28) {
                cout << "Error since not a leap year";
                getch();
                exit(0);
            }
        }
    }

    int return_date(date d);
    int operator - (date d2);
    date operator + (int n);
    friend ostream & operator << (ostream & out, date d1);
};

int a[20] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int b[20] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int date::operator - (date d2) {
    int a1, a2, x = 0;
    date d1(dd, mm, yy);
    if (d1.dd == d2.dd && d1.mm == d2.mm && d1.yy == d2.yy)
        return x;
    if (d1.dd < d2.dd && d1.mm == d2.mm && d1.yy == d2.yy) {
        cout << "Error since 2nd date is greater than 1st date";
        getch();
        exit(0);
    }
    if (d1.mm < d2.mm && d1.yy == d2.yy) {
        cout << "Error since 2nd date is greater than 1st date";
        getch();
        exit(0);
    }
    if (d1.yy < d2.yy) {
        cout << "Error since 2nd date is greater than 1st date";
        getch();
        exit(0);
    }
    a1 = return_date(d1);
    a2 = return_date(d2);
    for (int i = d1.yy - 1; i > d2.yy; i--) {
        if (i % yy == 0)
            x = x + 366;
        else
            x = x + 365;
    }
    if (d1.yy == d2.yy)
        x = x + a1 - a2;
    else {
        x = x + a1;
        if (d2.yy % 4 == 0)
            x = x + (366 - a2);
        else
            x = x + (365 - a2);
    }
    return x;
}

int date::return_date(date d) {
    int int_val = d.dd;
    if ((d.flag == 1) && (d.mm > 2)) {
        for (int i = 0; i < d.mm; i++)
            int_val = int_val + a[i];
        int_val++;
    } else {
        for (int i = 0; i < d.mm; i++)
            int_val = int_val + a[i];
    }
    return int_val;
}

date date::operator + (int n) {
    date d(dd, mm, yy);
    for (int i = 0; i < n; i++) {
        d.dd++;
        if (d.yy % 4 == 0) {
            d.flag = 1;
            if (d.dd > b[d.mm]) {
                d.dd = 1;
                d.mm++;
            }
        } else {
            d.flag = 0;
            if (d.dd > a[d.mm]) {
                d.dd = 1;
                d.mm++;
            }
        }
        if (d.mm > 12) {
            d.mm = 1;
            d.yy++;
        }
    }
    return d;
}

ostream & operator << (ostream & out, date d1) {
    out << d1.dd << "-" << d1.mm << "-" << d1.yy;
    return out;
}

int main() {
    clrscr();
    int d, m, y, no_of_days;
    cout << "Enter a valid date(dd mm yyyy): ";
    cin >> d >> m >> y;
    if (d > b[m] || m > 12) {
        cout << "Error";
        getch();
        exit(0);
    }
    date d1(d, m, y);
    cout << "Enter a valid date which is lesser than the first date: ";
    cin >> d >> m >> y;
    if (d > b[m] || m > 12) {
        cout << "Error";
        getch();
        exit(0);
    }
    date d2(d, m, y);
    no_of_days = d1 - d2;
    cout << "Difference b/w two dates in days :" << no_of_days << endl;
    cout << "Enter a no of days to be added to first date: ";
    cin >> no_of_days;
    d1 = d1 + no_of_days;
    cout << "The new date is:" << d1 << endl;
    getch();
    return 0;
}
