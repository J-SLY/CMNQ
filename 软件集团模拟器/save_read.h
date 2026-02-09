#pragma once
#include<filesystem>
#include<vector>
namespace fs = std::filesystem;
fs::path work_path = fs::current_path()/"save";
std::vector<std::string> save_list_read() {
	std::vector<std::string> save_list;
	for (const auto& entry : fs::directory_iterator(work_path)) {
		save_list.push_back(entry.path().filename().string());
	}
	return save_list;
}