#include "prepare.h"

int main(){
    try {
        check.do_this();
        std::vector<std::string> save_name_list = read.do_this();
        std::cout << choose.do_this(save_name_list);

        _getch();
    }
    catch (const std::runtime_error& error) {
        std::cerr << "启动失败，错误码：" << error.what() << " 请打开安装目录下的 help 文件夹查看错误原因" << std::endl;
        
        _getch();
    }
    catch (const std::exception& error) {
        std::cerr << "遇到未知异常，错误码：" << error.what() << " 请打开安装目录下的 help 文件夹查看错误原因" << std::endl;
        _getch();
    }
}