// FUNCTION: BF2 0x4e2690

#include <string>
#include <ctype.h>

namespace dice { namespace hfe { namespace {

void convertToValidFilename(std::string* str)
{
	for (std::string::size_type i = 0; i < str->size(); i++)
	{
		char c = (*str)[i];
		if (!isalnum(c) && c != '_' && c != '.' && c != '/' && c != '\\')
			(*str)[i] = '_';
	}
}

} } }
