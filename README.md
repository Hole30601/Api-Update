Phiên Bản Lần Này Update Fix Lỗi Không Bị lỗi đồng bộ sever và mã hoá API
Những Người Học Ida Lên Xem 🐧

HƯỚNG DẪN 
#include hoặc #import API.h vào mm
và include hoặc import mahoa.h hoặc Obfuscate.h
Thêm $(TWEAK_NAME)_LDFLAGS = API.a vào make file

API *api = [[API alloc] init];
        
[api setToken:NSSENCRYPT("##thay token tại đây")];

             [api paid:^{
