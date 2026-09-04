#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <string>
#include <vector>

class FileManager {
public:
    // Đảm bảo file tồn tại (tạo file rỗng nếu chưa có).
    // Trả về false nếu không tạo được (đường dẫn sai, không có quyền ghi...).
    static bool ensureExists(const std::string& filename);

    // Đọc toàn bộ file vào outLines (outLines được xóa trước khi đọc).
    // Nếu file chưa tồn tại thì tạo mới và trả về true với outLines rỗng.
    // Chỉ trả về false khi có lỗi thực sự về I/O.
    static bool readFile(const std::string& filename, std::vector<std::string>& outLines);

    static bool writeFile(const std::string& filename, const std::vector<std::string>& lines);
    static bool appendLine(const std::string& filename, const std::string& line);
    // Có thể thêm các hàm xóa dòng theo ID nếu cần
};

#endif
