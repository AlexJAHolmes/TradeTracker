#pragma once

#include <string>
#include <vector>

// The main class for UI, it will handle all the universal functionality between
// the different types of UI and wrapping the WriteConsoleAt functions so
// they're easier to use.

class UI;

struct option_t {
	std::string name;
	void((*callback)(UI*));
};

class UI {
 public:
	UI();
	UI(std::string name);
	UI(std::string name, std::vector<option_t> options);

	void AddOption(option_t option);
	void AddOption(std::string name, void((*callback)()));
 private:
	std::string name;
	std::vector<option_t> m_options;
};
