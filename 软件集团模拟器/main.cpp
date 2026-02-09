#include <iostream>
#include <conio.h>
#include <vector>
#include "must_files_check.h"
#include "save_read.h"


int main(){
    try {
        self_check();
        std::vector<std::string> save_list = save_list_read();
        
        _getch();
    }
    catch (const std::runtime_error& error) {
        std::cerr << "启动失败，错误码：" << error.what() << " 请打开安装目录下的 help 文件夹查看错误原因" << std::endl;
        _getch();
    }
    catch (const std::exception& error) {
        _getch();
    }
}