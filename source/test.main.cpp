#include "program/triangle_example.h"
#include "program/debug_gui_example.h"
#include "program/textured_cube_example.h"
#include "program/skybox_example.h"
#include "program/static_mesh_example.h"

#include "engine/octree/linear_octree.h"

int main(int argc, const char** argv)
{
	//return std::make_shared<program::TriangleExample>(argc, argv)->exec();
	//return std::make_shared<program::DebugGuiExample>(argc, argv)->exec();
	//return std::make_shared<program::TexturedCubeExample>(argc, argv)->exec();
	//return std::make_shared<program::SkyboxExample>(argc, argv)->exec();
	return std::make_shared<program::StaticMeshExample>(argc, argv)->exec();
}