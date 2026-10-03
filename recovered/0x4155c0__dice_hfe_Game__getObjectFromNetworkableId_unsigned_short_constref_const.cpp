// FUNCTION: BF2 0x4155c0
namespace dice { namespace hfe { namespace io {
  class NetworkManager {
  public:
    void* getObject(unsigned short);
  };
  extern NetworkManager* networkManager;
} } }

namespace dice { namespace hfe {
  class Game {
  public:
    void* getObjectFromNetworkableId(const unsigned short&) const;
  };
  void* Game::getObjectFromNetworkableId(const unsigned short& id) const {
    if (dice::hfe::io::networkManager != 0) {
      return dice::hfe::io::networkManager->getObject(id);
    }
    return 0;
  }
} }
// REVERSED_FUNCTION: dice_hfe_Game::getObjectFromNetworkableId_unsigned_short_constref_const (0x4155c0)