/*Tạo cấu trúc Sach gồm: Tên Sách, Tác giả, Năm Xuất Bản.
Viết các hàm sau làm việc với danh sách có n quyển sách
có sử dụng cấp phát bộ nhớ động cho mảng cấu trúc thông qua
toán tử new hoặc hàm calloc hay malloc
a. Hàm nhập vào một dãy n cuốn sách thỏa mãn:
- Mẫu hàm : void Nhap(int *n, Sach *&amp;A);
- Nhập số cuốn sách n trả ra truyền qua tham biến con trỏ n
- Thân hàm cấp phát bộ nhớ cho con trỏ Sach (Vd: A = new Sach[n+1];)
b. Xuất ra màn hình thông tin n cuốn sách với đủ các trường
- Mẫu hàm : void Xuat(int n, Sach A[]);
c. Nhập vào tên một tác giả đếm xem tác giả của bao nhiêu cuốn
- Mẫu hàm : int DemSach(int n, Sach *a);

- Hàm trả về số cuốn đếm được
d. Thống kê theo năm xuất bản
- Mẫu hàm : void Thongke(int n, Sach *a);
- Thống kê từng năm có bao nhiêu cuốn theo mẫu
1. 2001 : 2 cuon
2. 2005 : 1 cuon
3. 1998 : 3 cuon
e. Viết hàm menu sau đó là hàm main thực hiện các thao tác
- Mẫu hàm : int Menu();
- Hàm trả về giá trị menu nếu được chọn trong [1…5]
1. Nhập n cuốn sách
2. Xuất n cuốn sách
3. Đếm theo tác giả
4. Thống kê
5. Thoát*/