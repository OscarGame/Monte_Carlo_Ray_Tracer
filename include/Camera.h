#ifndef CAMERA_H
#define CAMERA_H

#include <glm/glm.hpp>
#include <glm/ext.hpp>

#include "utils.h"

class Camera
{
private:
		glm::vec3 eye_;
		glm::vec3 center_;
		glm::vec3 up_;
		float fov_;
		const int WIDTH_;
		const int HEIGHT_;
public:
	Camera(
		const glm::vec3 eye,
		const glm::vec3 center,
		const glm::vec3 up,
		const float fov,
		const int width,
		const int height);
	~Camera(){};

	const int width() {return WIDTH_;}
	const int height() {return HEIGHT_;}

	Ray castRay(
		const int pixel_x, // [0, WIDTH_ - 1]
		const int pixel_y, // [0, HEIGHT_ - 1]
		const float parameter_x, // [-0.5, 0.5]
		const float parameter_y); // [-0.5, 0.5]
};

#endif // CAMERA_H