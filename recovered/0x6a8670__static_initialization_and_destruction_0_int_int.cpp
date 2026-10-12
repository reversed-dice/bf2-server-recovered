// FUNCTION: BF2 0x6a8670
#include <iostream>
#include <string>

namespace dice { namespace hfe { namespace tool {

class ObjectTemplateAdm
{
public:
	ObjectTemplateAdm();
	~ObjectTemplateAdm();
	static std::string mActiveLayer;
	static std::string mDefaultSaveObjectFile;
	static std::string mDefaultSaveObjectTemplateFile;
};

ObjectTemplateAdm objectTemplateAdm;
std::string ObjectTemplateAdm::mActiveLayer("None");
std::string ObjectTemplateAdm::mDefaultSaveObjectFile("level/Objects.con");
std::string ObjectTemplateAdm::mDefaultSaveObjectTemplateFile("object/ObjectTemplates.con");

} } }
