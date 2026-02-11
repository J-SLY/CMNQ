#pragma once
#include<vector>
#include<filesystem>
#include<fstream>
namespace fs = std::filesystem;
class lan{
public:
	std::vector<std::string> lan;
	std::vector<std::string> do_this(std::string language_type,fs::path read_path=fs::current_path()/"config"/"lan") {
		std::ifstream text_read(read_path);
		std::string tmp_text;
		if (!text_read.is_open()) {
			throw std::runtime_error("在打开语言文件时出现错误");
		}
		while (text_read >> tmp_text) {
			lan.push_back(tmp_text);
		}
		text_read.close();
	}
};