#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chuoi[100];
    int nguyenAm = 0, phuAm = 0;

    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin); // Nhập chuỗi có khoảng trắng

    for (int i = 0; i < strlen(chuoi); i++) {
        // Chuyển ký tự về chữ thường để dễ kiểm tra
        char c = tolower(chuoi[i]);

        // Kiểm tra nếu là chữ cái từ a-z
        if (c >= 'a' && c <= 'z') {
            // Kiểm tra các nguyên âm: a, e, i, o, y, u (theo yêu cầu đề bài)
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'y' || c == 'u') {
                nguyenAm++;
            } else {
                phuAm++;
            }
        }
    }

    printf("So luong nguyen am: %d\n", nguyenAm);
    printf("So luong phu am: %d\n", phuAm);

    return 0;
}
