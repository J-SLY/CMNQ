#pragma once
#include<vector>
#include<conio.h>
#include<iostream>
class choose_display{
private:
	int choose_id = 0;
	void display(std::vector<std::string>choices) {
		system("cls");
		for (size_t i = 0; i < choices.size(); i++) {
			std::cout << "[" << ((choose_id == i) ? ">" : " ") << "]" << choices[i] << std::endl;
		}
	}
public:
	int do_this(std::vector<std::string>choices) {
		this->display(choices);
		while (true) {
			bool Key = false;
			if (GetAsyncKeyState(VK_RETURN) & 0x8000) {
				return choose_id;
			}
			if (GetAsyncKeyState(VK_UP) & 0x8000) {
				Key = true;
				if (choose_id - 1 == -1) {
					choose_id = choices.size() - 1;
				}
				else {
					choose_id--;
				}
				Sleep(150);
			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
				Key = true;
				if (choose_id + 1 == choices.size()) {
					choose_id = 0;
				}
				else {
					choose_id++;
				}
				Sleep(150);
			}
			if (Key == true)this->display(choices);
		}
		
	}
};
