#ifndef VULKAN_RENDERER_H
#define VULKAN_RENDERER_H

#include <vulkan/vulkan.h>

class VulkanRenderer {
public:
    VulkanRenderer();
    ~VulkanRenderer();

    void InitVulkan();
    void DrawFrame();

private:
    VkInstance instance;
    VkDevice device;
    // Additional Vulkan setup code here (physical device, swap chains, etc.)
};

#endif // VULKAN_RENDERER_H

