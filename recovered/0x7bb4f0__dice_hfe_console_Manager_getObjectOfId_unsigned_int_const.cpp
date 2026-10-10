// FUNCTION: BF2 0x7bb4f0
// BF2_COMPILER: gcc-4.0
#include <vector>

namespace dice { namespace hfe { namespace console {

class Object;

struct ObjectInfo {
    char _pad[0x10];
    std::vector<Object*>* m_objects;
};

class Manager {
public:
    std::vector<ObjectInfo*> m_infos;

    Object* getObjectOfId(unsigned int id) const;
};

Object* Manager::getObjectOfId(unsigned int id) const {
    unsigned int sub = (unsigned short)id;
    id <<= 16;
    if (id < m_infos.size()) {
        const ObjectInfo* info = m_infos[id];
        if (sub < info->m_objects->size()) {
            return (*info->m_objects)[sub];
        }
    }
    return 0;
}

} } }
