/*Khai báo cấu trúc tự trỏ Node gồm hai thành phần int Item và Node *Next
để tạo danh sách liên kết đơn. Viết các hàm thực hiện các công việc sau:
a. Hàm tạo ra Node mới
- Mẫu hàm : Node *TaoMoi(int x = 0);
- Tạo ra một Node mới thông qua cấp phát bộ nhớ cho con trỏ
Node *p = new Node; và gán giá trị x
- Hàm trả về con trỏ p đã được cấp phát và gán giá trị.
b. Hàm thêm mới vào đầu danh sách
- Mẫu hàm : Node *ThemDau(Node *H,int x);
- Tạo ra một Node mới nhờ hàm TaoMoi ở mục a,
nối vào đầu danh sách H (chú ý trường hợp H=NULL)
- Hàm trả về con trỏ H đã được bổ sung vào đầu.
c. Hàm thêm mới vào cuối danh sách
- Mẫu hàm : void ThemCuoi(Node *&amp;H,int x);
- Tạo ra một Node mới nhờ hàm TaoMoi ở mục a,
nối vào cuối danh sách H (chú ý trường hợp H=NULL)
- Hàm truyền tham biến con trỏ H đã được bổ sung vào đầu.
d. Hàm tạo danh sách liên kết đơn kiểu LIFO bằng cách cứ nhập
liên tục dữ liệu tới khi số 0 thì dừng và không bổ sung số 0
- Mẫu hàm : void LIFO(Node *&amp;H);
e. Hàm tạo danh sách liên kết đơn kiểu FIFO bằng cách nhập
trước số phần tử n và bổ sung vào cuối danh sách
- Mẫu hàm : void FIFO(Node *&amp;H);
f. Hàm tạo xuất danh sách ra màn hình
- Mẫu hàm : void Xuat(Node *H);
g. Xóa một giá trị x ra khỏi danh sách liên kết nếu có
- Mẫu hàm : void Xoa(Node *&amp;H, int x);
- Tìm vị trí x xuất hiện đầu tiên để xóa (có thể viết hàm đệ quy)
h. Viết hàm menu sau đó là hàm main thực hiện các thao tác
- Mẫu hàm : int Menu();
- Hàm trả về giá trị menu nếu được chọn trong [1…7]
1. Tạo DS LIFO a
2. Tạo DS FIFO b
3. Xuất a
4. Xuất b
5. Nhập x và xóa 1 x ra khỏi a
6. Nối lần lượt từng phần tử của b vào cuối dãy a
7. Thoát*/