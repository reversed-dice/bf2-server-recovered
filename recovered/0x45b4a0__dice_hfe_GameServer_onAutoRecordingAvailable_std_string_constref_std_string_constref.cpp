// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x45b4a0
#include <string>

namespace dice { namespace hfe {

class ServerSettings {
public:
    char _pad0[0xe8];
    std::string m_recordingPath;
};

extern ServerSettings* serverSettings;

class DemoAvailableInfo {
public:
    DemoAvailableInfo();
    ~DemoAvailableInfo();
    void setUrl(std::string const& url);
    void setMapName(std::string const& mapName);
    long getNetBufferSize();
    void* getNetBuffer();
    void updateNetBuffer();

    std::string m_url;
    std::string m_mapName;
    unsigned char m_unk10;
    char _pad10[7];
    char* m_unk18;
    long m_unk20;
    long m_unk28;
};

inline DemoAvailableInfo::~DemoAvailableInfo() {
    if (m_unk18 != 0) delete m_unk18;
}

class GameServer {
public:
    void sendDataBlockToAll(unsigned int type, void const* data, unsigned int size, bool reliable);
    void onAutoRecordingAvailable(std::string const& url, std::string const& mapName);
};

extern GameServer* game;

void GameServer::onAutoRecordingAvailable(std::string const& url, std::string const& mapName) {
    std::string file("{file}");
    std::string path(serverSettings->m_recordingPath);
    std::string::size_type pos = path.find(file.c_str(), 0, file.size());
    if (pos == std::string::npos)
        path.append(url);
    else {
        std::string::size_type n = file.size();
        path.replace(pos, n, url.c_str(), url.size());
    }
    DemoAvailableInfo info;
    info.setUrl(path);
    info.setMapName(mapName);
    long n = info.getNetBufferSize();
    void* p = info.getNetBuffer();
    game->sendDataBlockToAll(9, p, n, true);
}

} }
