// FUNCTION: BF2 0x677a60
#include <string>
#include <vector>

namespace dice { namespace hfe {

extern long fn_407ed8(const char* nptr, char** endptr, int base, int group);

struct KeyValue {
    std::string m_key;
    std::string m_value;
};

class KeyMap {
public:
    KeyValue* findKey(std::string const& key) const;
    std::vector<KeyValue> m_entries;
};

class KeyParser {
public:
    long getNumKeyMaps() const;
    KeyMap* getKeyMap(unsigned int index);
};

class ISearchForPlayer {
public:
    struct Player {
        int m_id;
        std::string m_nick;
        int m_score;
    };
};

class SearchForPlayer {
public:
    char _pad0[0x30];
    KeyParser m_keyParser;

    bool getPlayers(std::vector<ISearchForPlayer::Player>& out);
};

bool SearchForPlayer::getPlayers(std::vector<ISearchForPlayer::Player>& out) {
    KeyParser* parser = &m_keyParser;
    for (unsigned int i = 0; i < (unsigned int)parser->getNumKeyMaps(); ++i) {
        KeyMap* map = parser->getKeyMap(i);
        ISearchForPlayer::Player p;
        p.m_id = (int)fn_407ed8(map->findKey(std::string("pid"))->m_value.c_str(), 0, 10, 0);
        p.m_score = (int)fn_407ed8(map->findKey(std::string("score"))->m_value.c_str(), 0, 10, 0);
        p.m_nick = map->findKey(std::string("nick"))->m_value;
        out.push_back(p);
    }
    return true;
}

} }
