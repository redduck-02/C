/*Viết các hàm thực hiện:
- Kiểm tra một xâu s có phải là một chuỗi số.
- Đếm số từ của xâu
- Lấy ra n ký tự bên trái của chuỗi s.
- Lấy ra n ký tự bên phải của chuỗi s.
- Lấy ra n ký tự bắt đầu từ vị trí thứ m của chuỗi s.*/

#include<stdio.h>
#include<string.h>
void KiemTraXau(char s[]) {
	int i,ok;
	for(i=0; i<strlen(s); i++) {
		if(s[i] >= '0' && s[i] <= '9') {
			 ok = 1;
		} else {
			ok = 0;
			break;
            }
    }
		if(ok == 1)
		printf("Xau da nhap toan so.");
		else
		printf("Xau da nhap khong phai toan so.");
} 
int demsotu(char s[], int length){
    int tu = (s[0] != ' ');
    for (int i = 0; i < length - 1; i++){
        if (s[i] == ' ' && s[i + 1] != ' '){
            tu++;
        }
    }
    return tu;
}
int main() {
    char xau[99];
    int length;
    printf("Nhap xau: ");
    fflush(stdin);
    gets(xau);
    KiemTraXau(xau);
    printf("\nChuoi co %d ky tu!",strlen(xau));
    demsotu(xau, length);
    return 0;
}
