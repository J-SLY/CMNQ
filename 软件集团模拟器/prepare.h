#pragma once
#include "must_files_check.h"
#include "save_name_read.h"
#include "choose_display.h"
#include "lan_read.h"
#include <vector>
#include <iostream>
#include <conio.h>

save_name_read read;
self_check check;
choose_display choose;

fs::path work_path = fs::current_path();