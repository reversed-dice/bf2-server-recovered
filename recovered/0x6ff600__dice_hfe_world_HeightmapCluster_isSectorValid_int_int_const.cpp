// FUNCTION: BF2 0x6ff600
#include <string>
#include <vector>
namespace dice { namespace hfe { class Vec3; class EventNode; enum EventCategory { }; class IEventListener; class IEventManager; namespace world { class IObject; } } }
 namespace dice { namespace hfe { namespace world {
 class IHeightmap {
 public:
     virtual void addRef();
     virtual void getRef();
     virtual void release();
     virtual void queryInterface(unsigned int) const;
     virtual ~IHeightmap();
     virtual void loadHeightData(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&);
     virtual void saveHeightData(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const;
     virtual void createEmpty(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&);
     virtual void getModified() const;
     virtual void setModified(bool);
     virtual void setSize(int, int);
     virtual void getSize(int&, int&) const;
     virtual void setPos(int, int);
     virtual void getPos(int&, int&) const;
     virtual void getLowBoundaryX() const;
     virtual void getHighBoundaryX() const;
     virtual void getLowBoundaryZ() const;
     virtual void getHighBoundaryZ() const;
     virtual void setBitResolution(int);
     virtual void getBitResolution() const;
     virtual void setScale(dice::hfe::Vec3 const&);
     virtual void getScale() const;
     virtual void setUsePhongNormalInterpolation(bool);
     virtual void getUsePhongNormalInterpolation() const;
     virtual void setSeaWaterLevel(float);
     virtual void getSeaWaterLevel();
     virtual void getMaterialScale() const;
     virtual void setMaterialScale(int);
     virtual void loadMaterialData(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&);
     virtual void saveMaterialData(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const;
     virtual void getMaterialFromGrid(int, int) const;
     virtual void getMaterialInWorldCoords(float, float) const;
     virtual void setMaterialInGrid(int, int, unsigned char);
     virtual void getHeightFromGrid(int, int) const;
     virtual void getHeightInLocalCoords(float, float) const;
     virtual float getHeightInWorldCoords(float, float) const;
     virtual void getHeightInLocalCoords(dice::hfe::Vec3 const&) const;
     virtual void getHeightInWorldCoords(dice::hfe::Vec3 const&) const;
     virtual void getNormalInLocalCoords(float, float, dice::hfe::Vec3&) const;
     virtual void getNormalInWorldCoords(float, float, dice::hfe::Vec3&) const;
     virtual void getNormalInLocalCoords(dice::hfe::Vec3 const&, dice::hfe::Vec3&) const;
     virtual void getNormalInWorldCoords(dice::hfe::Vec3 const&, dice::hfe::Vec3&) const;
     virtual void getWorldScaledHeightInWorldCoords(float, float) const;
     virtual void getWorldScaledHeightInWorldCoords(dice::hfe::Vec3 const&) const;
     virtual void getHeightAndNormalInLocalCoords(float, float, dice::hfe::Vec3&, unsigned char&) const;
     virtual void getHeightAndNormalInWorldCoords(float, float, dice::hfe::Vec3&, unsigned char&) const;
     virtual void getTriangleAndNormalAndMaterialInWorldCoords(float, float, dice::hfe::Vec3&, dice::hfe::Vec3&, dice::hfe::Vec3&, dice::hfe::Vec3&, unsigned char&) const;
     virtual void getTriangleAndNormalAndMaterialInLocalCoords(float, float, dice::hfe::Vec3&, dice::hfe::Vec3&, dice::hfe::Vec3&, dice::hfe::Vec3&, unsigned char&) const;
     virtual void getSquareInWorldCoords(float, float, dice::hfe::Vec3*, bool&) const;
     virtual void intersectRayInLocalCoords(dice::hfe::Vec3 const&, dice::hfe::Vec3 const&, dice::hfe::Vec3&, float&, dice::hfe::Vec3&, unsigned char&, bool);
     virtual void intersectRayInWorldCoords(dice::hfe::Vec3 const&, dice::hfe::Vec3 const&, dice::hfe::Vec3&, float&, dice::hfe::Vec3&, unsigned char&, bool);
     virtual void getMinMaxHeightInLocalCoords(float, float, float, float, float&, float&);
     virtual void getMinMaxHeightInWorldCoords(float, float, float, float, float&, float&);
     virtual void getWaterLevelInLocalCoords(float, float) const;
     virtual void getWaterLevelInWorldCoords(float, float) const;
     virtual void getWaterLevelInLocalCoords(dice::hfe::Vec3 const&) const;
     virtual void getWaterLevelInWorldCoords(dice::hfe::Vec3 const&) const;
     virtual void compileWaterMeshesIntoHeightmap(std::vector<dice::hfe::world::IObject*, std::allocator<dice::hfe::world::IObject*> >&);
     virtual void getUsingValidMaterials() const;
     virtual void replaceNonMappedMaterials(int);
 };
 } } }
 namespace dice { namespace hfe { namespace world {
 class HeightmapCluster {
 public:
     virtual void addRef();
     virtual void getRef();
     virtual void release();
     virtual void queryInterface(unsigned int) const;
     virtual ~HeightmapCluster();
     virtual void init();
     virtual void cleanup();
     virtual void reset();
     virtual void setClusterSize(int);
     virtual void getClusterSize() const;
     virtual void setHeightmapSize(int);
     virtual void getHeightmapSize() const;
     virtual void getWorldSize() const;
     virtual void addHeightmap(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int, int);
     virtual void setActiveHeightmap(dice::hfe::world::IHeightmap*);
     virtual void getActiveHeightmap() const;
     virtual void getPrimaryHeightmap() const;
     virtual void getHeightmapInSector(int, int) const;
     virtual void getSectorOfHeightmap(dice::hfe::world::IHeightmap const*, int&, int&) const;
     virtual IHeightmap* getHeightmapInWorldCoords(float, float) const;
     virtual void getSectorOfWorldCoords(float, float, int*, int*) const;
     virtual void getPrimaryScale() const;
     virtual void getSecondaryScale() const;
     virtual void setSeaWaterLevel(float);
     virtual void getSeaWaterLevel();
     virtual void getHeightFromGrid(int, int) const;
     virtual void getHeightInWorldCoords(float, float) const;
     virtual void getHeightInWorldCoords(dice::hfe::Vec3 const&) const;
     virtual void getWorldScaledHeightInWorldCoords(float, float) const;
     virtual void getWorldScaledHeightInWorldCoords(dice::hfe::Vec3 const&) const;
     virtual void getNormalInWorldCoords(float, float, dice::hfe::Vec3&) const;
     virtual void getNormalInWorldCoords(dice::hfe::Vec3 const&, dice::hfe::Vec3&) const;
     virtual void getHeightAndNormalInWorldCoords(float, float, dice::hfe::Vec3&, unsigned char&) const;
     virtual void getTriangleAndNormalAndMaterialInWorldCoords(float, float, dice::hfe::Vec3&, dice::hfe::Vec3&, dice::hfe::Vec3&, dice::hfe::Vec3&, unsigned char&) const;
     virtual void getSquareInWorldCoords(float, float, dice::hfe::Vec3*, bool&) const;
     virtual void intersectRayInWorldCoords(dice::hfe::Vec3 const&, dice::hfe::Vec3 const&, dice::hfe::Vec3&, float&, dice::hfe::Vec3&, unsigned char&, bool) const;
     virtual void getMaterialInWorldCoords(float, float) const;
     virtual void getWaterLevelInWorldCoords(float, float) const;
     virtual void getWaterLevelInWorldCoords(dice::hfe::Vec3 const&) const;
     virtual bool isInsideHeightmapCluster(float, float) const;
     virtual void intersectCameraRay();
     virtual void compileWaterMeshesIntoHeightmap();
     virtual void setUsePhongNormalInterpolation(bool);
     virtual void getUsePhongNormalInterpolation() const;
     virtual void handleEvent(dice::hfe::EventCategory, unsigned int, dice::hfe::EventNode*, void*);
    bool isSectorValid(int, int) const;
    char m_pad[0x20];
    int m_clusterSize;
    char m_pad2[4];
    IHeightmap** m_heightmaps;
 };
 } } }
namespace dice { namespace hfe { namespace world {
bool HeightmapCluster::isSectorValid(int a, int b) const {
    int half = m_clusterSize / 2;
    return a >= -half && a <= half && b >= -half && b <= half;
}
} } }
