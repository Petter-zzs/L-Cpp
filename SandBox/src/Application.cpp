#include "Hazel.h"

class SandBox:public LPP::Application
{
public:
	SandBox() {}
	~SandBox() {}
};

LPP::Application* LPP::createApplication() {

	return new SandBox();
}




