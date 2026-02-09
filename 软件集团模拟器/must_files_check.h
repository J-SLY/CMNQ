#pragma once
#include<Windows.h>
#include<filesystem>
namespace fs = std::filesystem;
void self_check() {

        if (!fs::exists("config")) {
            throw std::runtime_error("NF0001");
        }
        if (!fs::is_directory("config")) {
            throw std::runtime_error("ND0001");
        }
        if (!fs::exists("save")) {
            throw std::runtime_error("NF0002");
        }
        if (!fs::is_directory("save")) {
            throw std::runtime_error("ND0002");
        }
        /*
        if (!fs::exists("Language")) {
            throw std::runtime_error("自检失败: 语言文件夹不存在");
        }
        if (!fs::is_directory("Language")) {
            throw std::runtime_error("自检失败: Language 不是一个文件夹");
        }
        */
        // 检查文件夹内的必要文件
        if (!fs::exists("config/lan.setting")) {
            throw std::runtime_error("NF0001.1");
        }
        /*
        if (!fs::exists("Language/Lan.txt")) {
            throw std::runtime_error("自检失败: 语言文件 Lan.txt 不存在");
        }
        */
    }
