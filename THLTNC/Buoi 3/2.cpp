/*Tạo cấu trúc NhanSu gồm: HoTen, HeSoLuong, ChucVu.
Viết các hàm sau làm việc với danh sách có n nhân sự
có sử dụng cấp phát bộ nhớ động cho mảng cấu trúc thông qua
toán tử new hoặc hàm calloc hay malloc.
Có sử dụng các thao tác đọc ghi tệp
g. Hàm nhập vào một dãy n nhân sự từ bàn phím thỏa mãn:
- Mẫu hàm : void Nhap(int &amp;n, NhanSu *&amp;DS);
- Nhập n, cấp phát bộ nhớ cho con trỏ (VD: DS = new NhanSu [n+1];)
- Truyền giá trị của n và a ra thông qua tham chiếu con trỏ
h. Hàm nhập vào một n nhân sự từ file văn bản thỏa mãn:
- Mẫu hàm : void NhapFileVB(int &amp;n, NhanSu *&amp;a, char *fname);
- File văn bản có tên fname cho trước gồm dòng thứ 1 ghi n sau đó
là n thông tin từng trường của mỗi nhân sự cách nhau bởi các dấu xuống dòng.
- Đọc n, cấp phát bộ nhớ cho con trỏ (VD: a = new NhanSu [n+1];)
- Truyền giá trị của n và a ra thông qua tham chiếu con trỏ
i. Hàm nhập vào một dãy n nhân sự từ file nhị phân thỏa mãn:
- Mẫu hàm : void NhapFileNP(int &amp;n, NhanSu *&amp;a, char *fname);
- File nhị phân cho trước gồm dữ liệu liên tục của số nhân sự n
là số nguyên và n nhân sự đã lưu bằng cấu trúc (đọc bằng fread)
- Đọc n, cấp phát bộ nhớ cho con trỏ (VD: a = new NhanSu[n+1];)
- Truyền giá trị của n và a ra thông qua tham chiếu con trỏ
j. Hàm xuất vào dãy n số thực ra màn hình thỏa mãn:
- Mẫu hàm : void XuatMH(int n, NhanSu *a);
k. Hàm xuất dãy n số thực vào file văn bản thỏa mãn:
- Mẫu hàm : void XuatFileVB(int n, NhanSu *a, char *fname);
- Ghi ra file văn bản có tên fname dòng thứ 1 ghi n sau đó là
n nhân sự từng trường sẽ ghi trên từng dòng.
l. Hàm xuất vào dãy n số thực ra file nhị phân thỏa mãn:
- Mẫu hàm : void XuatFileNP(int n, NhanSu *a, char *fname);
- Ghi ra file nhị phân gồm dữ liệu liên tục của số nhân sự n
là số nguyên và n bản ghi ghi nhị phân (ghi bằng fwrite)
b. Viết hàm menu sau đó là hàm main thực hiện các thao tác
- Mẫu hàm : int Menu();
- Hàm trả về giá trị menu nếu được chọn trong [1…6]
1. Nhập dãy NhanSu a từ bàn phím
2. Xuất dãy NhanSu a ra file văn bản
3. Xuất dãy NhanSu a ra file nhị phân
4. Đọc dãy từ file văn bản xuất ra màn hình
5. Đọc dãy từ file nhị phân xuất ra màn hình
6. Thoát */