#include "math.h"

//DivideByZeroException
int division(int a, int b);

//DataTooLongExeption 	std::overflow_error	Tràn bộ nhớ do dữ liệu quá lớn so với kích thước bộ nhớ dùng để chứa nó
int add(int x, int y);

int sum_element_array(int array[]);

//nếu nhập x nhỏ hơn 0 thì sqrt(x) không tính được (không có căn bậc 2 của số âm)
// Tính căn bậc 2 của y biết y = x ^ 2 - 3x + 2
// Xảy ra exception khi 1<x<2
double sqrt_for_y(double x) {
    double y = x * x - 3*x + 2;
    double result = sqrt(y);
    return result;
}

//while(true)//vòng lặp vô tận
int sum_to_n(int n) {
    int sum = 0;
    int i = 1;
    while(i <= n) {
        sum += i;
    }
    return sum;
}

// lỗi con trỏ
