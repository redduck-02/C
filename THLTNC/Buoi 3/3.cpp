/*Làm việc với ma trận thực có cỡ m*n: Viết các hàm sau
làm việc với ma trận thực m*n có sử dụng cấp phát bộ nhớ động
cho mảng hai chiều thông qua toán tử new hoặc hàm calloc hay malloc,
có sử dụng nhập xuất ra file nhị phân và file văn bản.
a. Hàm cấp phát bộ nhớ động
- Mẫu hàm : void CapPhat1(int m, int n, int **&amp;a);
- Hoặc mẫu hàm int **CapPhat2(int n, int m);
- Cấp phát bộ nhớ cho con trỏ hai chiều đối với hàm CapPhat 2
trả về con trỏ đã được cấp phát.
b. Hàm giải phóng bộ nhớ có mẫu hàm void XoaBN(int m, int **a)
c. Nhập ma trận thực từ bàn phím
- Mẫu hàm : void Nhap(int &amp;m, int &amp;n, int **&amp;a);
- Gọi hàm cấp phát để cấp phát động cho con trỏ a
- Nhập dữ liệu từ bàn phím
d. Xuất ma trận ra màn hình dạng bảng có
- Mẫu hàm void Xuat(int m, int n, int **a)
e. Nhập ma trận thực từ file văn bản
- Mẫu hàm : void NhapVB(int &amp;m, int &amp;n, int **&amp;a, char *fname);
- File văn bản dòng đầu lưu 2 số m, n cách nhau bởi khoảng cách
là cỡ ma trận, m dòng tiếp theo mỗi dòng lưu n giá trị thực
tương ứng theo từng hàng
- Trong hàm gọi hàm cấp phát bộ nhớ động
f. Xuất ma trận thực ra file văn bản
- Mẫu hàm : void XuatVB(int m, int n, int **a, char *fname);
- File văn bản dòng đầu lưu 2 số m, n cách nhau bởi khoảng cách là
cỡ ma trận, m dòng tiếp theo mỗi dòng lưu n giá trị thực tương ứng
theo từng hàng
g. Nhập ma trận thực từ file nhị phân
- Mẫu hàm : void NhapNP(int &amp;m, int &amp;n, int **&amp;a, char *fname);
- File nhị phân ghi 2 số nguyên dương m, n sau đó là m*n số thực
đọc file bằng fread.
h. Xuất ma trận thực ra file nhị phân
- Mẫu hàm : void XuatNP(int m, int n, int **a, char *fname);
i. File nhị phân xuất ra 2 số nguyên dương m, n sau đó là m*n số thực
xuất file bằng fwrite
j. Viết hàm menu sau đó là hàm main thực hiện các thao tác
- Mẫu hàm : int Menu();
- Hàm trả về giá trị menu nếu được chọn trong [1…5]
1. Nhập ma trận A từ bàn phím
2. Đọc ma trận B từ file văn bản
3. Đọc ma trận C từ file nhị phân
4. Xuất A+B ra file văn bản nếu cộng được
5. Xuất B*C ra file nhị phân nếu nhân được
6. Thoát */