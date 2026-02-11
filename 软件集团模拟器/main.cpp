#include "prepare.h"

int main(){
    try {
        check.do_this();
        std::vector<std::string> save_name_list = read.do_this();

        _getch();
    }
    catch (const std::runtime_error& error) {
        std::cerr << "错误：" << error.what() << std::endl;
        
        _getch();
    }
    catch (const std::exception& error) {
        std::cerr << "错误：" << error.what() << std::endl;
        _getch();
    }
}