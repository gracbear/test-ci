#include "hello/hello.h"

namespace Hello {
	std::ostream& greetings(std::ostream& stream){
		return stream << "Hello, corehard";
	}
}

