Giải pháp 1 (Legacy – Deeply Nested IF)
Logic lồng nhau: kiểm tra distance_km <= 0, rồi bên trong lại kiểm tra is_surge, rồi bên trong nữa tính tiền.

Nhược điểm:

Đọc khó, nhiều tầng if.

Công thức nhân hệ số surge lặp lại ở nhiều nhánh.

Khi thay đổi giá cước hoặc hệ số surge, phải sửa nhiều chỗ.

Dễ trùng lặp và khó bảo trì.

 Giải pháp 2 (Refactored – Guard Clauses & Step-by-Step)
Guard Clauses: loại bỏ dữ liệu sai ngay từ đầu.

Step-by-Step:

Kiểm tra hợp lệ.

Tính cước cơ bản theo quãng đường.

Áp dụng phụ phí surge nếu có.

Ưu điểm:

Mã nguồn sạch, dễ đọc.

Công thức surge chỉ viết một lần.

Dễ mở rộng khi thay đổi quy tắc.