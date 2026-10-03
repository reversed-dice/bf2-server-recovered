#pragma once
namespace dice { namespace hfe { namespace world {
class IPlayer {
public:
  // FUNCTION: BF2 0x00686ba0
  IPlayer();
  // FUNCTION: BF2 0x00686e50
  void setIsRemote(bool);
  // FUNCTION: BF2 0x00686e60
  unsigned int getIsRemote() const;
  // FUNCTION: BF2 0x00686e70
  void setIsAIPlayer(bool);
  // FUNCTION: BF2 0x00686e80
  unsigned int getIsAIPlayer() const;
};
} } }
