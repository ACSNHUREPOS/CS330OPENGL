#pragma once

#include <GL/glew.h>

class Meshes
{
	// Stores the GL data relative to a given mesh
	struct GLMesh
	{
		GLuint vao;         // Handle for the vertex array object
		GLuint vbo;         // Handle for the vertex buffer object
		GLuint nVertices;    // Number of indices of the mesh
	};

	// Stores the GL data relative to a given mesh
	struct GLIndexedMesh
	{
		GLuint vao;         // Handle for the vertex array object
		GLuint vbos[2];     // Handles for the vertex buffer objects
		GLuint nVertices;
		GLuint nIndices;    // Number of indices of the mesh
		GLuint nRestartIndex;
	};

public:
	GLMesh gCubeMesh;
	GLMesh gCylinderMesh;
	GLMesh gBackgroundPlaneMesh;
	GLMesh gPlaneMesh;
	GLIndexedMesh gSphereMesh;
	GLIndexedMesh gPyramidMesh;
	GLMesh gTorusMesh;

public:
	void CreateMeshes();
	void DestroyMeshes();

private:
	void UCreateTexturePlaneMesh(GLMesh &mesh);
	void UCreatePlaneMesh(GLMesh &mesh);
	void UCreateCubeMesh(GLMesh &mesh);
	void UCreateCylinderMesh(GLMesh &mesh);
	void UCreateTorusMesh(GLMesh &mesh);
	void UCreatePyramidMesh(GLIndexedMesh &mesh);
	void UCreateSphereMesh(GLIndexedMesh &mesh);

	void UDestroyMesh(GLMesh &mesh);
	void UDestroyIndexedMesh(GLIndexedMesh &mesh);
};