// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4d5680
#include <stdlib.h>
#include <list>
#include <map>
#include <string>

extern "C" int Py_VerboseFlag;
extern "C" long __strtol_internal(const char*, char**, int, int);

namespace dice { namespace hfe {

class ISettings {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void setInt(const std::string& name, const int& v);      // slot 5, +0x28
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual const std::string& getString(const std::string& name, const std::string& def); // slot 16, +0x80
    virtual void setString(const std::string& name, const std::string& v);                  // slot 17, +0x88
    virtual void v18(); virtual void v19();
    virtual const bool* getBool(const std::string& name, const bool& def);                  // slot 20, +0xa0
    virtual void setBool(const std::string& name, const bool& v);                           // slot 21, +0xa8
};

extern ISettings* settings;

class SimpleParser {
public:
    void add(int id, const std::string& name, const std::string& desc);
    bool parseString(const std::string& line, std::list<std::pair<int, std::string> >& out);
    void showHelp(const std::string& exe);
    SimpleParser() : m_prefix('+') {}
    void setPrefix(char c) { m_prefix = c; }
    std::map<int, std::string> m_names;
    std::map<int, std::string> m_descs;
    char m_prefix;
};

class Vars {
public:
    static void set(std::string name, std::string value);
    static void setValue(const char* name, const char* value);
};

class ReservedSlots {
public:
    void setConfigFile(const std::string& f);
    const std::string& getConfigFile() const;
};

class BF2Log {
public:
    void setDebugCallbackDisabled(bool b);
};

namespace memory { void set_max_alloc_size(unsigned long n); }

extern std::string* serverSettings;
extern std::string* mapList;
extern ReservedSlots* reservedSlots;

class BF2Engine {
public:
    bool parseParameters(const std::string& cmd);
    void setMenuActive(bool b);
    char pad[0x88];
    std::string m_playerName;   // 0x88
    std::string m_cmdLine;      // 0x90
    char pad2[0x8];
    BF2Log* m_log;              // 0xa0
};

bool BF2Engine::parseParameters(const std::string& cmd)
{
    std::string joinAddress;
    bool isServer = true;
    bool dedicated = true;
    std::string aidll("AIDLL_w32ded.dll");
    aidll.assign("aidll.so", 8);
    bool useAI = false;
    std::string loadLevel;
    bool useAtlas = true;
    std::string line(cmd);
    m_cmdLine.assign(cmd);
    int iRen = 3;
    int iDev = 1;
    int iBeh = 0x50;
    int deviceBehavior = 0x50;
    int renderPath = 3;
    int deviceType = 1;
    if (!line.empty()) {
        iBeh = 0x50;
        iDev = 1;
        iRen = 3;
        SimpleParser parser;
    parser.add(0x39, std::string("help"), std::string("Displays this help"));
    parser.add(0x3a, std::string("?"), std::string("Same as +help"));
    parser.add(0x0, std::string("dedicated"), std::string("Start in dedicated server mode"));
    parser.add(0x1, std::string("multi"), std::string("Allow starting multiple BF2 instances"));
    parser.add(0x8, std::string("config"), std::string("Sets path to the ServerSettings.con file to use"));
    parser.add(0x47, std::string("rsconfig"), std::string("Sets path to the ReservedSlots.con file to use"));
    parser.add(0x9, std::string("mapList"), std::string("Sets the path to the MapList.con file to use"));
    parser.add(0x43, std::string("pbPath"), std::string("Set the path to use for PunkBuster on multi-instance configurations (defaults to {install_dir}/pb"));
    parser.add(0x2, std::string("joinServer"), std::string("Join a server by ip address or hostname"));
    parser.add(0x42, std::string("port"), std::string("specifies the network port to be used"));
    parser.add(0x5, std::string("password"), std::string("Set the server password when joining a server"));
    parser.add(0x2e, std::string("modPath"), std::string("Set the mod path (default mods/bf2)"));
    parser.add(0x6, std::string("checkForAvailablePatch"), std::string(""));
    parser.add(0x7, std::string("checkForPatch"), std::string(""));
    parser.add(0xd, std::string("ai"), std::string(""));
    parser.add(0x14, std::string("fullscreen"), std::string("Start game in full screen mode"));
    parser.add(0xe, std::string("wx"), std::string("Position game window on the screen at certain x-position"));
    parser.add(0xf, std::string("wy"), std::string("Position game window on the screen at certain y-position"));
    parser.add(0x10, std::string("szx"), std::string("Set resolution witdth"));
    parser.add(0x11, std::string("szy"), std::string("Set resolution height"));
    parser.add(0x15, std::string("noSound"), std::string("Start game without sound"));
    parser.add(0x46, std::string("restart"), std::string("Used when restarting executable."));
    parser.add(0x48, std::string("skipDXCheck"), std::string("Skips DirectX version check. Use with caution."));
    parser.add(0x30, std::string("noStatusMonitor"), std::string("Start game without status monitor screen"));
    parser.add(0x27, std::string("demo"), std::string("Sets the con-file with demo options"));
    parser.add(0xb, std::string("loadLevel"), std::string("Set the level to load"));
    parser.add(0x4, std::string("playerName"), std::string("Set the player name"));
    parser.add(0x3d, std::string("playerPassword"), std::string("Set the player password"));
    parser.add(0x41, std::string("playNow"), std::string("use playnow functionality"));
    parser.add(0x3, std::string("hostServer"), std::string(""));
    parser.add(0xa, std::string("lowPriority"), std::string("Run the game with slightly lower priority"));
    parser.add(0x2d, std::string("gameMode"), std::string("Sets the game mode."));
    parser.add(0x2c, std::string("maxPlayers"), std::string("Sets max players."));
    parser.add(0x3b, std::string("ranked"), std::string("Allows gamespy snapshot sending"));
    parser.add(0x49, std::string("dropDynamicSpawns"), std::string("Don't re-add dynamic spawn groups as round (re)starts."));
        std::list<std::pair<int, std::string> > opts;
        parser.setPrefix('+');
        if (parser.parseString(line, opts)) {
            for (std::list<std::pair<int, std::string> >::iterator it = opts.begin(); it != opts.end(); ++it) {
                std::string& v = it->second;
                switch (it->first) {
                case 0: dedicated = true; break;
                case 1: settings->setBool(std::string("GSAllowMultipleInstances"), (int)__strtol_internal(v.c_str(), 0, 10, 0) != 0); break;
                case 2: isServer = false; joinAddress.assign(v); break;
                case 3: if (v.compare("1") == 0) isServer = true; break;
                case 4: m_playerName.assign(v); break;
                case 0x42: settings->setInt(std::string("GSPort"), (int)__strtol_internal(v.c_str(), 0, 10, 0)); break;
                case 0x3d: settings->setString(std::string("GSPlayerPassword"), v); break;
                case 5: settings->setString(std::string("GSPassword"), v); break;
                case 8: serverSettings->assign(v); break;
                case 9: mapList->assign(v); break;
                case 0xb: if (v.compare("") != 0) loadLevel.assign(v); break;
                case 0x43: settings->setString(std::string("GSPunkBusterPath"), v); break;
                case 0x2e: settings->setString(std::string("GSModDirectory"), v); break;
                case 0x2f: if (v.compare("0") == 0) setMenuActive(false); break;
                case 0xe: Vars::set(std::string("opt-window-x"), std::string(v)); break;
                case 0xf: Vars::set(std::string("opt-window-y"), std::string(v)); break;
                case 0x10: settings->setInt(std::string("GSWindowSizeX"), (int)__strtol_internal(v.c_str(), 0, 10, 0)); break;
                case 0x11: settings->setInt(std::string("GSWindowSizeY"), (int)__strtol_internal(v.c_str(), 0, 10, 0)); break;
                case 0x12: settings->setInt(std::string("GSRefresh"), (int)__strtol_internal(v.c_str(), 0, 10, 0)); break;
                case 0x14: settings->setBool(std::string("GSFullScreen"), (int)__strtol_internal(v.c_str(), 0, 10, 0) != 0); break;
                case 0x13: settings->setBool(std::string("GSLoadObfuscated"), (int)__strtol_internal(v.c_str(), 0, 10, 0) != 0); break;
                case 0x15: Vars::set(std::string("opt-nosound"), std::string(v.c_str())); break;
                case 0x30: settings->setBool(std::string("GSStatusMonitor"), (int)__strtol_internal(v.c_str(), 0, 10, 0) == 0); break;
                case 0x31: Vars::setValue("hack-ignore-asserts", v.c_str()); break;
                case 0x16: Vars::set(std::string("opt-late-loading"), std::string(v.c_str())); break;
                case 0x17: Vars::set(std::string("opt-render-mode"), std::string(v)); break;
                case 0x18: if (v.compare("2") == 0) iRen = 2; else if (v.compare("3") == 0) iRen = 3; break;
                case 0x19: if (v.compare("1") == 0) iDev = 1; else if (v.compare("2") == 0) iDev = 2; break;
                case 0x1a: if (v.compare("32") == 0) iBeh = 0x20; else if (v.compare("64") == 0) iBeh = 0x40; else if (v.compare("80") == 0) iBeh = 0x50; break;
                case 0x1b: settings->setInt(std::string("GSSkipMipLevels"), (int)__strtol_internal(v.c_str(), 0, 10, 0)); break;
                case 0x1c: settings->setInt(std::string("GSSkipMeshLods"), (int)__strtol_internal(v.c_str(), 0, 10, 0)); break;
                case 0x1d: settings->setBool(std::string("GSMergeMaterials"), (int)__strtol_internal(v.c_str(), 0, 10, 0) != 0); break;
                case 0x1e: if (v.compare("1") == 0) settings->setBool(std::string("GSKeepTemplates"), true); break;
                case 0xc: if (v.compare("") != 0) aidll.assign(v); break;
                case 0xd: if (v.compare("1") == 0) useAI = true; break;
                case 0x1f:
                    if (v.compare("0") == 0) settings->setBool(std::string("GSManagedTextures"), false);
                    if (v.compare("1") == 0) settings->setBool(std::string("GSManagedTextures"), true);
                    break;
                case 0x20: settings->setBool(std::string("GSLoadedTextureDetailedInfo"), true); break;
                case 0x21: Vars::set(std::string("coll-load-debugmeshes"), std::string(v)); break;
                case 0x22: Vars::setValue("phy-convert-collision-meshes", "1"); break;
                case 0x23: if (v.compare("1") == 0) memory::set_max_alloc_size(26000000); break;
                case 0x24: if (v.compare("1") == 0) settings->setBool(std::string("GSDebugNetwork"), true); break;
                case 0x25: if (v.compare("1") == 0) settings->setBool(std::string("GSDebugGhostManager"), true); break;
                case 0x26: if (v.compare("0") == 0) m_log->setDebugCallbackDisabled(true); break;
                case 0x27: settings->setString(std::string("GSDemo"), v); setMenuActive(false); isServer = false; break;
                case 0x28: settings->setBool(std::string("GLCompileConFiles"), true); break;
                case 0x29: settings->setBool(std::string("GLUseCompiledConFiles"), true); break;
                case 0x2a: if (v.compare("1") == 0) useAtlas = false; break;
                case 0x2b: Py_VerboseFlag = (int)__strtol_internal(v.c_str(), 0, 10, 0); break;
                case 0x39:
                case 0x3a:
                    parser.showHelp(std::string("BF2.exe"));
                    return false;
                case 0x2d:
                    settings->setString(std::string("GSGameMode"), v);
                    settings->setString(std::string("GSCommandLineGameMode"), v);
                    break;
                case 0x2c:
                    settings->setInt(std::string("GSMaxNrOfPlayers"), (int)__strtol_internal(v.c_str(), 0, 10, 0));
                    settings->setInt(std::string("GSCommandLineMaxNrOfPlayers"), (int)__strtol_internal(v.c_str(), 0, 10, 0));
                    break;
                case 0x32:
                    settings->setBool(std::string("GSDisableShaderCache"), (int)__strtol_internal(v.c_str(), 0, 10, 0) != 0);
                    settings->setBool(std::string("GSFileChangeMonitor"), true);
                    break;
                case 0x33: settings->setBool(std::string("GSQuickShaderPermutation"), (int)__strtol_internal(v.c_str(), 0, 10, 0) != 0); break;
                case 0x34: settings->setBool(std::string("GSDeferredShaderPermutation"), (int)__strtol_internal(v.c_str(), 0, 10, 0) != 0); break;
                case 0x35: settings->setBool(std::string("GSMaxValidation"), (int)__strtol_internal(v.c_str(), 0, 10, 0) != 0); break;
                case 0x36: settings->setBool(std::string("GSLowSpecEmulation"), (int)__strtol_internal(v.c_str(), 0, 10, 0) != 0); break;
                case 0x3b: settings->setBool(std::string("GSRanked"), true); break;
                case 0x3c: settings->setBool(std::string("GSFileChangeMonitor"), (int)__strtol_internal(v.c_str(), 0, 10, 0) != 0); break;
                case 0x37: settings->setBool(std::string("GSDumpAllConFiles"), (int)__strtol_internal(v.c_str(), 0, 10, 0) != 0); break;
                case 0x38: settings->setString(std::string("GSCustomConFile"), v); break;
                case 0x3e: settings->setBool(std::string("GSDeveloper"), (int)__strtol_internal(v.c_str(), 0, 10, 0) != 0); break;
                case 0x3f: Vars::set(std::string("disable-swiff"), std::string(v)); break;
                case 0x40: settings->setInt(std::string("swiffDebug"), (int)__strtol_internal(v.c_str(), 0, 10, 0)); break;
                case 0x41: settings->setInt(std::string("playNow"), (int)__strtol_internal(v.c_str(), 0, 10, 0)); break;
                case 0x44: settings->setBool(std::string("keepAINav"), true); break;
                case 0x45: settings->setString(std::string("gameName"), v); break;
                case 0x46: settings->setBool(std::string("skipMovies"), true); break;
                case 0x47: reservedSlots->setConfigFile(v); break;
                case 0x48: settings->setBool(std::string("GSSkipDXCheck"), true); break;
                case 0x49: settings->setBool(std::string("dropDynamicSpawns"), true); break;
                }
            }
        }
        renderPath = iRen;
        deviceType = iDev;
        deviceBehavior = iBeh;
    }
    if (serverSettings->empty())
        serverSettings->assign(settings->getString(std::string("GSModDirectory"), std::string("mods/bf2")) + "/settings/serversettings.con");
    if (reservedSlots->getConfigFile().empty())
        reservedSlots->setConfigFile(settings->getString(std::string("GSModDirectory"), std::string("mods/bf2")) + "/settings/reservedSlots.con");
    if (mapList->empty())
        mapList->assign(settings->getString(std::string("GSModDirectory"), std::string("mods/bf2")) + "/settings/maplist.con");
    settings->setBool(std::string("GSIsServer"), isServer);
    isServer = *settings->getBool(std::string("GSIsServer"), true);
    settings->setBool(std::string("GSDedicated"), dedicated);
    Vars::set(std::string("opt-nosound"), std::string("1"));
    settings->setInt(std::string("GSRenderPath"), int(renderPath));
    settings->setInt(std::string("GSDeviceType"), int(deviceType));
    settings->setInt(std::string("GSDeviceBehavior"), int(deviceBehavior));
    settings->setBool(std::string("GSUseEffectTextureAtlas"), useAtlas);
    if (!isServer) {
        settings->setString(std::string("GSJoinAddress"), joinAddress);
    } else {
        settings->setString(std::string("GSJoinAddress"), std::string(""));
        settings->setString(std::string("GSLoadLevel"), loadLevel);
    }
    settings->setString(std::string("AIDLL"), aidll);
    settings->setBool(std::string("UseAI"), useAI);
    return true;
}

} }
