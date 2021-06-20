/*Khai báo cấu trúc tự trỏ Node gồm hai thành phần float Item
và Node *Next để tạo danh sách liên kết đơn.
Viết các hàm thực hiện các công việc sau:
a. Hàm tạo ra Node mới
- Mẫu hàm : Node *TaoMoi(float x = 0);
- Tạo ra một Node mới thông qua cấp phát bộ nhớ cho
con trỏ Node *p = new Node; và gán giá trị x
- Hàm trả về con trỏ p đã được cấp phát và gán giá trị.
b. Hàm thêm mới vào đầu danh sách
- Mẫu hàm : Node *ThemDau(Node *H,float x);
- Tạo ra một Node mới nhờ hàm TaoMoi ở mục a,
nối vào đầu danh sách H (chú ý trường hợp H=NULL)
- Hàm trả về con trỏ H đã được bổ sung vào đầu.
c. Hàm thêm mới vào cuối danh sách
- Mẫu hàm : void ThemCuoi(Node *&amp;H,float x);
- Tạo ra một Node mới nhờ hàm TaoMoi ở mục a,
nối vào cuối danh sách H (chú ý trường hợp H=NULL)
- Hàm truyền tham biến con trỏ H đã được bổ sung vào đầu.
d. Hàm tạo danh sách liên kết đơn kiểu FIFO bằng cách nhập
trước số phần tử n và bổ sung vào cuối danh sách
- Mẫu hàm : void FIFO(Node *&amp;H);
e. Đọc danh sách đơn từ file văn bản
- Mẫu hàm : void NhapVB(Node *&amp;H, char *fname);
- File văn bản lưu các số thực mỗi số một dòng, dùng vòng lặp
không xác định đọc tới khi hết file.
f. Đọc danh sách đơn từ file nhị phân
- Mẫu hàm : void NhapNP(Node *&amp;H, char *fname);
- File nhị phân lưu các số thực, dùng vòng lặp không xác định
đọc tới khi hết file.
g. Ghi danh sách đơn ra file văn bản
- Mẫu hàm : void XuatVB(Node *H, char *fname);
- File văn bản lưu các số thực mỗi số một dòng,
dùng vòng lặp không xác định đọc tới khi hết file.
h. Ghi danh sách đơn ra file nhị phân
- Mẫu hàm : void XuatNP(Node *H, char *fname);
- File nhị phân lưu các số thực, dùng vòng lặp không xác định
đọc tới khi hết file.
i. Hàm tạo xuất danh sách ra màn hình
- Mẫu hàm : void Xuat(Node *H);
k. Viết hàm menu sau đó là hàm main thực hiện các thao tác
- Mẫu hàm : int Menu();
- Hàm trả về giá trị menu nếu được chọn trong [1…7]
1. Đọc danh sách A từ file văn bản
2. Đọc danh sách B từ file nhị phân
3. Nối từng phần tử của B vào A được danh sách C lưu ra file văn bản
4. Tìm những phần tử vừa nằm trong A vừa nằm trong B tạo ra danh sách
D lưu ra file nhị phân
5. Xuất A, B, C, D ra màn hình
6. Thoát*/