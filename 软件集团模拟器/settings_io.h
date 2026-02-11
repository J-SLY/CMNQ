#pragma once
#include<filesystem>
#include<fstream>
#include<map>
namespace fs = std::filesystem;

class settings_io{
public:
	std::map<std::string, std::string> settings;
	void do_read(fs::path read_path=fs::current_path()/"config") {
		setting_read(read_path / "language.setting", "language");
	}
private:
	bool setting_read(fs::path read_path,std::string setting_name) {
		std::string read_setting_value;
		std::ifstream setting_read(read_path);
		if (!setting_read.is_open()) {
			throw std::runtime_error("在读取配置" + setting_name + "时出现错误");
		}
		setting_read >> read_setting_value;
		settings[setting_name] = read_setting_value;
		setting_read.close();
	}
	bool setting_change(fs::path write_path, std::string setting_name) {
		std::ofstream setting_write(write_path);
		if (!setting_write.is_open()) {
			throw std::runtime_error("在修改配置" + setting_name + "时出现错误");
		}
		setting_write << settings[setting_name] << std::endl;
		setting_write.close();
	}
};
