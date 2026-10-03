#pragma once
namespace dice { namespace hfe {
class GhostManager;
class ServerConnection {
public:
  // FUNCTION: BF2 0x0043ba50
  ServerConnection();
  // FUNCTION: BF2 0x0043baf0
  void sub_4085b8();
  // FUNCTION: BF2 0x0043baf0
  void sub_436d90();
  // FUNCTION: BF2 0x0043bb10
  bool getIsRecordingConnection() const;
  // FUNCTION: BF2 0x0043bd30
  void getAllObjects();

  void* m_unk_0x38;  // +0x38, inferred, seen in 1 method(s)
  unsigned int m_unk_0x3D;  // +0x3D, inferred, seen in 2 method(s)
  unsigned int m_unk_0x3E;  // +0x3E, inferred, seen in 2 method(s)
  GhostManager* m_ghostManager;  // +0x40, corroborated (local type)
  unsigned int m_unk_0xF0;  // +0xF0, inferred, seen in 1 method(s)
  unsigned char m_unk_0x1DC;  // +0x1DC, inferred, seen in 2 method(s)
  unsigned int m_unk_0x1EC;  // +0x1EC, inferred, seen in 2 method(s)
};
} }
