// FUNCTION: BF2 0x6af600
#include <string>

namespace dice { namespace hfe { namespace tool {

class ObjectTemplateAdm {
public:
    void saveSpawners(bool soldiers, bool objects, bool controlPoints);
    void saveAllObjects(const std::string& path, bool a, bool b, bool c);
    void saveAllSpawnTemplates(const std::string& path, bool a, bool b, bool c);
};

void ObjectTemplateAdm::saveSpawners(bool soldiers, bool objects, bool controlPoints) {
    if (soldiers) {
        saveAllObjects(std::string("temp/SoldierSpawns.con"), true, false, false);
        saveAllSpawnTemplates(std::string("temp/SoldierSpawnTemplates.con"), true, false, false);
    }
    if (objects) {
        saveAllObjects(std::string("temp/ObjectSpawns.con"), false, true, false);
        saveAllSpawnTemplates(std::string("temp/ObjectSpawnTemplates.con"), false, true, false);
    }
    if (controlPoints) {
        saveAllObjects(std::string("temp/ControlPoints.con"), false, false, true);
        saveAllSpawnTemplates(std::string("temp/ControlPointTemplates.con"), false, false, true);
    }
}

} } }
