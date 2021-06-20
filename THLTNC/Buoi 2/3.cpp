/*Làm việc với ma trận vuông: Viết các hàm sau làm việc với ma trận nguyên vuông có
sử dụng cấp phát bộ nhớ động cho mảng hai chiều thông qua toán tử new hoặc hàm calloc
hay malloc
a. Hàm cấp phát bộ nhớ động
- Mẫu hàm : void CapPhat1(int n, int **&amp;a);
- Hoặc mẫu hàm int **CapPhat2(int n);
- Cấp phát bộ nhớ cho con trỏ hai chiều đối với hàm CapPhat 2 trả về con trỏ đã được cấp
phát.
b. Hàm giải phóng bộ nhớ có mẫu hàm void XoaBN(int n, int **a)
c. Nhập ma trận vuông từ bàn phím
- Mẫu hàm : void Nhap(int &amp;n, int **&amp;a);
- Gọi hàm cấp phát để cấp phát động cho con trỏ a
- Nhập dữ liệu từ bàn phím
d. Xuất ma trận ra màn hình dạng bảng có
- Mẫu hàm void Xuat(int n, int **a)
e. Kiểm tra ma trận có đối xứng qua đường chéo phụ không?
- Mẫu hàm : int DoiXungPhu(int n, int **a);
- Hàm trả về 0 nếu không đối xứng và 1 nếu ngược lại

f. Liệt kê các hàng có tổng max
- Mẫu hàm : void LietKe(int n, int **a);
g. Viết hàm menu sau đó là hàm main thực hiện các thao tác
- Mẫu hàm : int Menu();
- Hàm trả về giá trị menu nếu được chọn trong [1…5]
1. Nhập ma trận
2. Xuất ma trận
3. Kiểm tra đối xứng
4. Liệt kê các hàng có tổng max
5. Thoát*/