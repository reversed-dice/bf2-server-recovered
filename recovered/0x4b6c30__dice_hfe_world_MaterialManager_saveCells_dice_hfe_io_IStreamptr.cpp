// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4b6c30
#include <map>
#include <sstream>
#include <string>

namespace dice { namespace hfe { namespace io {

class IStream {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};

} } }

namespace dice { namespace hfe { namespace world {

class IMaterial;

class CellTemplate {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual const std::string& getName();
};

class Cell {
public:
    char _pad0[0x08];
    std::map<unsigned int, CellTemplate*> m_effects;
    std::map<unsigned int, CellTemplate*> m_decals;
    std::map<unsigned int, CellTemplate*> m_sounds;
    float m_damageMod;
};

class MaterialManager {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual void v4(int);
    virtual void v5(int);
    virtual void v6(int);
    virtual void v7(int);
    virtual void v8(int);
    virtual void v9(int);
    virtual void v10(int);
    virtual std::map<int, IMaterial*>& getMaterialMap();
    virtual void v12(int);
    virtual void v13(int);
    virtual void v14(int);
    virtual void v15(int);
    virtual void v16(int);
    virtual void v17(int);
    virtual void v18(int);
    virtual void v19(int);
    virtual Cell* getCell(unsigned int, unsigned int) const;
    bool saveCells(io::IStream* stream);
};

bool MaterialManager::saveCells(io::IStream* stream)
{
    std::ostringstream ss;

    for (std::map<int, IMaterial*>::iterator i = getMaterialMap().begin();
         i != getMaterialMap().end(); ++i) {
        for (std::map<int, IMaterial*>::iterator j = getMaterialMap().begin();
             j != getMaterialMap().end(); ++j) {
            Cell* cell = getCell(i->first, j->first);
            if (cell == 0)
                continue;

            ss << "MaterialManager.createCell " << i->first << " " << j->first << std::endl;

            if (cell->m_damageMod >= 0.0f)
                ss << "MaterialManager.damageMod " << cell->m_damageMod << std::endl;

            for (std::map<unsigned int, CellTemplate*>::iterator t = cell->m_effects.begin();
                 t != cell->m_effects.end(); ++t) {
                if (t->second == 0)
                    continue;
                ss << "MaterialManager.setEffectTemplate " << t->first << " "
                   << t->second->getName() << std::endl;
            }

            for (std::map<unsigned int, CellTemplate*>::iterator t = cell->m_decals.begin();
                 t != cell->m_decals.end(); ++t) {
                if (t->second == 0)
                    continue;
                ss << "MaterialManager.setDecalTemplate " << t->first << " "
                   << t->second->getName() << std::endl;
            }

            for (std::map<unsigned int, CellTemplate*>::iterator t = cell->m_sounds.begin();
                 t != cell->m_sounds.end(); ++t) {
                if (t->second == 0)
                    continue;
                ss << "MaterialManager.setSoundTemplate " << t->first << " "
                   << t->second->getName() << std::endl;
            }
        }
    }

    std::string str = ss.str();
    return stream->write(str.c_str(), str.size()) == str.size();
}

} } }
