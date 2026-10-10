// FUNCTION: BF2 0x6af8e0
#include <string>

namespace dice { namespace hfe { namespace tool {

class ObjectTemplateAdm {
public:
    bool saveAllSpawners();
    void saveAllObjects(const std::string& path, bool a, bool b, bool c);
    void saveAllSpawnTemplates(const std::string& path, bool a, bool b, bool c);
};

bool ObjectTemplateAdm::saveAllSpawners() {
    saveAllObjects(std::string("temp/SoldierSpawns.con"), true, false, false);
    saveAllObjects(std::string("temp/ObjectSpawns.con"), false, true, false);
    saveAllObjects(std::string("temp/ControlPoints.con"), false, false, true);
    saveAllSpawnTemplates(std::string("temp/SoldierSpawnTemplates.con"), true, false, false);
    saveAllSpawnTemplates(std::string("temp/ObjectSpawnTemplates.con"), false, true, false);
    saveAllSpawnTemplates(std::string("temp/ControlPointTemplates.con"), false, false, true);
    return true;
}

} } }
