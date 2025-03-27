#include "Include/UI.h"

UI::UI() {
	this->name = "Empty Screen";

	option_t backOpt = {
		"Go back",
		[](UI* container) {
			// Make a default function to return to the prev screen
		}
	};
	
	this->m_options.push_back(backOpt);
}
