#include<Windows.h>
#include<filesystem>
namespace fs = std::filesystem;
void Self_Check() {

        if (!fs::exists("ConfigurationFile")) {
            throw std::runtime_error("自检失败: 配置文件夹不存在");
        }
        if (!fs::is_directory("ConfigurationFile")) {
            throw std::runtime_error("自检失败: ConfigurationFile 不是一个文件夹");
        }
        if (!fs::exists("Language")) {
            throw std::runtime_error("自检失败: 语言文件夹不存在");
        }
        if (!fs::is_directory("Language")) {
            throw std::runtime_error("自检失败: Language 不是一个文件夹");
        }

        // 检查文件夹内的必要文件
        if (!fs::exists("ConfigurationFile/ConFig_data")) {
            throw std::runtime_error("自检失败: 配置文件 ConFig_data 不存在");
        }
        if (!fs::exists("Language/Lan.txt")) {
            throw std::runtime_error("自检失败: 语言文件 Lan.txt 不存在");
        }
        Sleep(1000);
    }
