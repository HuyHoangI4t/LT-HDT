#include <iostream>
#include <cmath>
using namespace std;

void bai1() {
    cout << "Nguyen Huy Hoang\n" << "MSV: 23103023\n" << "Lop: CNTT-K23";
}

void bai2(int &a, int &b, int &c) {
    cout << "\nNhap 3 so:\n";
    cin >> a >> b >> c;
    cout << "Tong la: " << a + b + c << "\nTich la: " << a * b * c;
}

void bai3(int a, int b) {
    cout << "\nNhap 2 so bat ki: ";
    cin >> a >> b;
    if (a > b) {
        cout << "So lon hon la: " << a << "\nSo nho hon la: " << b;
    } else {
        cout << "So lon hon la: " << b << "\nSo nho hon la: " << a;
    }
}

void bai4() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << "\nTong tu 1 den 100 la: " << sum;
}

void bai5() {
    int sum = 0;
    for (int i = 14; i < 1000; i += 14) {
        sum += i;
    }
    cout << "\nTong cac so chia het cho 2 & 7 la: " << sum;
}

int bai6(unsigned int n) {
    if (n == 1)
        return 1;
    return n * bai6(n - 1);
}

void bai7(int n) {
    cout << "\nnhap n: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Tong cac so tu 1 den n: " << sum;
}

void bai8(int x) {
    cout << "\nnhap x: ";
    cin >> x;
    int sum = 0;
    for (int i = x; i < 1000; i += 10) {
        sum += i;
    }
    cout << "Tong cac so nho hon 1000 co hang don vi la " << x << "= " << sum;
}

void bai9(int n) {
    int count = 0;
    cout << "\n10 so co 4 chu so nho nhat chia het cho 5&7 la:\n";
    for (int i = 1000; count < 10; i++) {
        if (i % 35 == 0) {
            cout << i << "\t";
            count++;
        }
    }
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

void bai10(int n) {
    cout << "\nNhap mot so de kiem tra: ";
    cin >> n;
    if (ngto(n)) {
        cout << n << " la so ngto.";
    } else {
        cout << n << " ko la so ngto.";
    }
}

bool bai11(int n) {
    int root = sqrt(n);
    return (root * root == n);
}

void bai12() {
    cout << "\nso chinh phuong nho hon 1000:\n";
    for (int i = 0; i < 1000; i++) {
        if (bai11(i)) {
            cout << i << "\t";
        }
    }
}

void bai13() {
    int count = 0;
    for (int i = 0; i < 1000; i++) {
        if (bai11(i)) {
            count++;
        }
    }
    cout << "\ndem so chinh phuong nho hon 1000: " << count;
}

void bai14() {
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
    cout << "Nhap chieu dai va chieu rong: ";
    cin >> length >> width;
    float S = length * width;
    float P = 2 * (length + width);
    cout << "Dien tich: " << S << "\n";
    cout << "Chu vi: " << P << "\n";
}

void nhaptoado(float &x, float &y) {
    cout << "nhap toa do x y: ";
    cin >> x >> y;
}

float dodai(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void bai16(float &x1, float &y1, float &x2, float &y2) {
    nhaptoado(x1, y1);
    nhaptoado(x2, y2);
    float x3 = x1, y3 = y2;
    float x4 = x2, y4 = y1;
    cout << "toa do 4 diem hcn: \n";
    cout << "(" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << "), ";
    cout << "(" << x3 << ", " << y3 << "), (" << x4 << ", " << y4 << ")\n";
}

void bai18(float x1, float y1, float x2, float y2) {
    nhaptoado(x1, y1);
    nhaptoado(x2, y2);
    float khoangCach = dodai(x1, y1, x2, y2);
    cout << "Khoang cach A va B: " << khoangCach << "\n";
}

void bai19(float x1, float y1, float x2, float y2, float x3, float y3) {
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

void bai20(float x1, float y1, float x2, float y2, float x3, float y3) {
    float AB = dodai(x1, y1, x2, y2);
    float BC = dodai(x2, y2, x3, y3);
    float CA = dodai(x3, y3, x1, y1);
    if (AB + BC > CA && AB + CA > BC && BC + CA > AB) {
        cout << "tao thanh tam giac.\n";
    } else {
        cout << "khong tao dc tam giac.\n";
    }
}

int main() {
    int a, b, c, n, x;
    float x1, y1, x2, y2, x3, y3, length, width;

    bai1();
    bai2(a, b, c);
    bai3(a, b);
    bai4();
    bai5();

    cout << "\nNhap mot so de tinh giai thua: ";
    cin >> n;
    cout << "Giai thua cua " << n << " la: " << bai6(n) << "\n";

    bai7(n);
    bai8(x);
    bai9(n);
    bai10(n);
    bai12();
    bai13();
    bai14();
    bai15(length, width);
    bai16(x1, y1, x2, y2);
    bai18(x1, y1, x2, y2);
    bai19(x1, y1, x2, y2, x3, y3);
    bai20(x1, y1, x2, y2, x3, y3);
    return 0;
}