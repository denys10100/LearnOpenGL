#include "framebuffer_size_callback.h"



// glfw: вс€кий раз, когда измен€ютс€ размеры окна (пользователем или операционной системой), вызываетс€ данна€ callback-функци€
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    // ”беждаемс€, что окно просмотра соответствует новым размерам окна. 
    // ќбратите внимание, высота окна на Retina-диспле€х будет значительно больше, чем указано в программе
    glViewport(0, 0, width, height);
}