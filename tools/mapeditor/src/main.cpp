#include <string>
#include "mainwindow.hpp"
#include "aboutwindow.hpp"
#include "wilimagepackage.hpp"
#include "mir2map.hpp"
#include <FL/Fl.H>
#include <FL/Fl_Shared_Image.H>
#include "groundinfowindow.hpp"
#include <vector>
#include <unordered_map>
#include <cstdint>
#include <array>
#include "cropconfigurewindow.hpp"

MainWindow          *g_MainWindow;
AboutWindow         *g_AboutWindow;
GroundInfoWindow    *g_GroundInfoWindow;
CropConfigureWindow *g_CropConfigureWindow;
WilImagePackage      g_WilImagePackage[128];
std::string          g_WilFilePathName;
std::string          g_WorkingPathName;
Mir2Map              g_Map;
bool                 g_Dragging;

std::vector<std::vector<std::unordered_map<uint32_t, Fl_Shared_Image *>>> g_PNGCache;
std::vector<std::vector<std::array<uint32_t, 4>>>                         g_GroundInfo;

int main()
{
    fl_register_images();

    g_WilFilePathName  = "";
    g_WorkingPathName  = "";

    g_MainWindow          = new MainWindow();
    g_AboutWindow         = new AboutWindow();
    g_GroundInfoWindow    = new GroundInfoWindow();
    g_CropConfigureWindow = new CropConfigureWindow();

    g_MainWindow->ShowAll();
    return Fl::run();
}