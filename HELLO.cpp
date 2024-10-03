#include <iostream>
#include <cmath>
using namespace std;

void bai1() {
    cout << "=== BAI 1 ===\n";
    cout << "Nguyen Huy Hoang\n" << "MSV: 23103023\n" << "Lop: CNTT-K23\n";
}

void bai2(int &a, int &b, int &c) {
    cout << "=== BAI 2 ===\n";
    cout << "\nNhap 3 so:\n";
    cin >> a >> b >> c;
    cout << "Tong la: " << a + b + c << "\nTich la: " << a * b * c << "\n";
}

void bai3() {
    int a, b;
    cout << "=== BAI 3 ===\n";
    cout << "\nNhap 2 so bat ky: ";
    cin >> a >> b;
    if (a > b) {
        cout << "So lon hon la: " << a << "\nSo nho hon la: " << b << "\n";
    } else {
        cout << "So lon hon la: " << b << "\nSo nho hon la: " << a << "\n";
    }
}

void bai4() {
    cout << "=== BAI 4 ===\n";
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << "Tong tu 1 den 100 la: " << sum << "\n";
}

void bai5() {
    cout << "=== BAI 5 ===\n";
    int sum = 0;
    for (int i = 14; i < 1000; i += 14) {
        sum += i;
    }
    cout << "Tong cac so chia het cho 2 & 7 la: " << sum << "\n";
}

int bai6(unsigned int n) {
    if (n == 1)
        return 1;
    return n * bai6(n - 1);
}

void bai7() {
    int n;
    cout << "=== BAI 7 ===\n";
    cout << "Nhap n: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Tong cac so tu 1 den n: " << sum << "\n";
}

void bai8() {
    int x;
    cout << "=== BAI 8 ===\n";
    cout << "Nhap x: ";
    cin >> x;
    int sum = 0;
    for (int i = x; i < 1000; i += 10) {
        sum += i;
    }
    cout << "Tong cac so nho hon 1000 co hang don vi la " << x << " = " << sum << "\n";
}

void bai9() {
    cout << "=== BAI 9 ===\n";
    int count = 0;
    cout << "10 so co 4 chu so nho nhat chia het cho 5&7 la:\n";
    for (int i = 1000; count < 10; i++) {
        if (i % 35 == 0) {
            cout << i << "\t";
            count++;
        }
    }
    cout << "\n";
}

bool ngto(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void bai10() {
    int n;
    cout << "=== BAI 10 ===\n";
    cout << "Nhap mot so de kiem tra: ";
    cin >> n;
    if (ngto(n)) {
        cout << n << " la so nguyen to.\n";
    } else {
        cout << n << " khong phai la so nguyen to.\n";
    }
}

bool bai11(int n) {
    int root = sqrt(n);
    return (root * root == n);
}

void bai12() {
    cout << "=== BAI 12 ===\n";
    cout << "So chinh phuong nho hon 1000:\n";
    for (int i = 0; i < 1000; i++) {
        if (bai11(i)) {
            cout << i << "\t";
        }
    }
    cout << "\n";
}

void bai13() {
    cout << "=== BAI 13 ===\n";
    int count = 0;
    for (int i = 0; i < 1000; i++) {
        if (bai11(i)) {
            count++;
        }
    }
    cout << "Dem so chinh phuong nho hon 1000: " << count << "\n";
}

void bai14() {
    cout << "=== BAI 14 ===\n";
    int count = 0;
    cout << "10 so chinh phuong dau tien:\n";
    for (int i = 0; count < 10; i++) {
        if (bai11(i)) {
            cout << i << "\t";
            count++;
        }
    }
    cout << "\n";
}

void bai15(float &length, float &width) {
    cout << "=== BAI 15 ===\n";
    cout << "Nhap chieu dai va chieu rong: ";
    cin >> length >> width;
    float S = length * width;
    float P = 2 * (length + width);
    cout << "Dien tich: " << S << "\n";
    cout << "Chu vi: " << P << "\n";
}

void nhaptoado(float &x, float &y) {
    cout << "Nhap toa do x y: ";
    cin >> x >> y;
}

float dodai(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void bai16() {
    float x1, y1, x2, y2;
    cout << "=== BAI 16 ===\n";
    nhaptoado(x1, y1);
    nhaptoado(x2, y2);
    cout << "Toa do 4 diem hinh chu nhat:\n";
    cout << "(" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << "), ";
    cout << "(" << x1 << ", " << y2 << "), (" << x2 << ", " << y1 << ")\n";
}

void bai18() {
    float x1, y1, x2, y2;
    cout << "=== BAI 18 ===\n";
    nhaptoado(x1, y1);
    nhaptoado(x2, y2);
    float khoangCach = dodai(x1, y1, x2, y2);
    cout << "Khoang cach A va B: " << khoangCach << "\n";
}

void bai19() {
    float x1, y1, x2, y2, x3, y3;
    cout << "=== BAI 19 ===\n";
    nhaptoado(x1, y1);
    nhaptoado(x2, y2);
    nhaptoado(x3, y3);
    float AB = dodai(x1, y1, x2, y2);
    float BC = dodai(x2, y2, x3, y3);
    float CA = dodai(x3, y3, x1, y1);
    float P = AB + BC + CA;
    float nuaP = P / 2;
    float S = sqrt(nuaP * (nuaP - AB) * (nuaP - BC) * (nuaP - CA));
    cout << "P: " << P << "\n";
    cout << "S: " << S << "\n";
}

void bai20() {
    float x1, y1, x2, y2, x3, y3;
    cout << "=== BAI 20 ===\n";
    nhaptoado(x1, y1);
    nhaptoado(x2, y2);
    nhaptoado(x3, y3);
    float AB = dodai(x1, y1, x2, y2);
    float BC = dodai(x2, y2, x3, y3);
    float CA = dodai(x3, y3, x1, y1);
    if (AB + BC > CA && AB + CA > BC && BC + CA > AB) {
        cout << "Tao thanh tam giac.\n";
    } else {
        cout << "Khong tao duoc tam giac.\n";
    }
}

int main() {
    int choice;

    do {
        cout << "\n=== MENU ===\n";
        cout << "1. BAI 1\n";
        cout << "2. BAI 2\n";
        cout << "3. BAI 3\n";
        cout << "4. BAI 4\n";
        cout << "5. BAI 5\n";
        cout << "6. BAI 6\n";
        cout << "7. BAI 7\n";
        cout << "8. BAI 8\n";
        cout << "9. BAI 9\n";
        cout << "10. BAI 10\n";
        cout << "11. BAI 11\n";
        cout << "12. BAI 12\n";
        cout << "13. BAI 13\n";
        cout << "14. BAI 14\n";
        cout << "15. BAI 15\n";
        cout << "16. BAI 16\n";
        cout << "17. BAI 18\n";
        cout << "18. BAI 19\n";
        cout << "19. BAI 20\n";
        cout << "0. Thoat\n";
        cout << "Nhap lua chon: ";
        cin >> choice;

        switch (choice) {
            case 1: bai1(); break;
            case 2: {
                int a, b, c;
                bai2(a, b, c);
                break;
            }
            case 3: bai3(); break;
            case 4: bai4(); break;
            case 5: bai5(); break;
            case 6: {
                unsigned int n;
                cout << "Nhap n de tinh giai thua: ";
                cin >> n;
                cout << n << "! = " << bai6(n) << "\n";
                break;
            }
            case 7: bai7(); break;
            case 8: bai8(); break;
            case 9: bai9(); break;
            case 10: bai10(); break;
            // case 11: bai11(1); break; 
            case 12: bai12(); break;
            case 13: bai13(); break;
            case 14: bai14(); break;
            case 15: {
                float length, width;
                bai15(length, width);
                break;
            }
            case 16: bai16(); break;
            case 17: bai18(); break;
            case 18: bai19(); break;
            case 19: bai20(); break;
            case 0: cout << "Thoat chuong trinh.\n"; break;
            default: cout << "Lua chon khong hop le! Vui long thu lai.\n"; break;
        }
    } while (choice != 0);
    return 0;
}
