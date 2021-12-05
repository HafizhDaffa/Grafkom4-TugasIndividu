#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint depthmapShader, shadowmapShader, cubeVBO, cubeVAO, cubeEBO, cube_texture, cubeVBO2, cubeVAO2, cubeEBO2, cube_texture2,
		cubeVBO3, cubeVAO3, cubeEBO3, cube_texture3, cubeVBO4, cubeVAO4, cubeEBO4, cube_texture4, cubeVBO5, cubeVAO5, cubeEBO5,
		cube_texture5, planeVBO, planeVAO, planeEBO, plane_texture, stexture, stexture2, stexture3, stexture4, stexture5,
		stexture6, depthMapFBO, depthMap;
	const unsigned int SHADOW_WIDTH = 1024, SHADOW_HEIGHT = 1024;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);

	void DrawPapan(GLuint shader);
	void BuildPapan();
	void BuildKaki1();
	void DrawKaki1(GLuint shader);
	void BuildKaki2();
	void DrawKaki2(GLuint shader);
	void BuildKaki3();
	void DrawKaki3(GLuint shader);
	void BuildKaki4();
	void DrawKaki4(GLuint shader);

	void BuildTexturedPlane();
	void DrawTexturedPlane(GLuint shader);

	void BuildDepthMap();
	void BuildShaders();
};

