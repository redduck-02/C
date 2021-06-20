/*Ước chung lớn nhất (GCD – Greatest Common Divisor) của 2 số nguyên
a và b là số nguyên lớn nhất d thỏa mãn tính chất cả a và b đều chia hết cho d.*/

#include<stdio.h>
#include<algorithm>
#include<math.h>

//Tìm UCLN dùng phép trừ
int UCLN1(int a, int b){
	// Nếu a = 0 => ucln(a,b) = b
    // Nếu b = 0 => ucln(a,b) = a
	if(a == 0 || b == 0){
		return a+b;
	}
	while(a != b){
		if(a > b){
			a -= b;
		} else{
			b -= a;
		}
	}
	return a;
}

//Tìm UCLN bằng phép chia dư
int UCLN2(int a, int b){
	//Lặp tới khi một trong 2 số bằng 0
	a = abs(a);
	b = abs(b);
	while(a*b != 0){
		if(a > b){
			a %= b;
		} else{
			b %= a;
		}
	}
	return a+b;
}

//Tìm UCLN sử dụng giải thuật Euclid
int UCLN31(int a, int b){
/*Để tìm ước chung lớn nhất của hai số a và b ta cần thực hiện
chia a cho b được thương q và số dư r (r ≥ 0) tức là a = b*q + r 
UCLN(a,b)={     b     nếu r = 0
		  {	UCLN(b,r) nếu r != 0 */
//Sử dụng đệ quy
	if(b == 0) return a;
	return UCLN31(b,a % b);
	}

int UCLN32(int a, int b){
	//Khử đệ quy
	int temp;
	if(b != 0){
		temp = a % b;
		a = b;
		b = temp;
		}
		return a;
	}

//Dùng hàm có sẵn trong thư viện algorithm
void UCLN4(){
	int a = 5, b = 9;
	printf("Cach 4: Uoc chung lon nhat cua %d va %d: %d", a, b, std::__gcd(a,b));
}

int main(){
	int a = 5, b = 7;
	printf("Cach 1: Uoc chung lon nhat cua %d va %d: %d\n", a, b, UCLN1(a,b));
	printf("Cach 2: Uoc chung lon nhat cua %d va %d: %d\n", a, b, UCLN2(a,b));
	printf("Cach 3.1: Uoc chung lon nhat cua %d va %d: %d\n", a, b, UCLN31(a,b));
	printf("Cach 3.2: Uoc chung lon nhat cua %d va %d: %d\n", a, b, UCLN32(a,b));
	UCLN4();
	return 0;
}