#pragma once
#include<filesystem>
#include<vector>
namespace fs = std::filesystem;
class save_name_read {
private:
	fs::path work_path = fs::current_path() / "save";
public:
	std::vector<std::string> do_this() {
		std::vector<std::string> save_list;
		for (const auto& entry : fs::directory_iterator(work_path)) {
			save_list.push_back(entry.path().filename().string());
		}
		return save_list;
	}
};
