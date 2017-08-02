#ifndef SHADER
#define SHADER

#include "vector.h"

#define PI_CONST 3.141592

typedef struct shaderprogram_struct {
    GLuint prog;
    GLuint vert;
    GLuint frag;
} shaderprogram;

char* loadTextFile(const char* filename);
void setFOVvec(vec3f *vector, float vertFOV, float horiFOV);
void loadShaders(shaderprogram *program, const char* vname, const char* fname);
void printProgramLog(shaderprogram program);
void loadMandelbulbVars(shaderprogram program, vec3f fov, vec3f camerapos, vec3f camerdir,
	vec3f horizontalAxis, vec3f verticalAxis, vec3f depthAxis, vec3f color, float step,
	int bail, float power, float phi, float theta, vec4f totalRotation, vec2f resolution, multisampling);
void loadMandelbulbProgram(shaderprogram *program, vec3f fov, vec3f camerapos,
    vec3f cameradir, vec3f horizontalAxis, vec3f verticalAxis, vec3f depthAxis,
	vec3f color, float step, int bail, float power, float phi, float theta,
	vec4f totalRotation, resolution, multisampling);

#endif
