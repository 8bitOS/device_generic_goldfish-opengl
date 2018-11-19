// Copyright (C) 2018 The Android Open Source Project
// Copyright (C) 2018 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#pragma once

#include <vulkan/vulkan.h>

namespace goldfish_vk {

class VulkanHandleMapping {
public:
    VulkanHandleMapping() = default;
    virtual ~VulkanHandleMapping() { }

    virtual void mapHandles_VkInstance(VkInstance* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkDevice(VkDevice* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkQueue(VkQueue* handles, size_t count = 1) = 0;

    virtual void mapHandles_VkSemaphore(VkSemaphore* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkCommandBuffer(VkCommandBuffer* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkDeviceMemory(VkDeviceMemory* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkBuffer(VkBuffer* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkImage(VkImage* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkShaderModule(VkShaderModule* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkPipelineLayout(VkPipelineLayout* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkRenderPass(VkRenderPass* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkPipeline(VkPipeline* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkPipelineCache(VkPipelineCache* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkDescriptorSetLayout(VkDescriptorSetLayout* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkSampler(VkSampler* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkDescriptorPool(VkDescriptorPool* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkImageView(VkImageView* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkDescriptorSet(VkDescriptorSet* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkBufferView(VkBufferView* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkCommandPool(VkCommandPool* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkFramebuffer(VkFramebuffer* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkPhysicalDevice(VkPhysicalDevice* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkFence(VkFence* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkEvent(VkEvent* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkQueryPool(VkQueryPool* handles, size_t count = 1) = 0;

    virtual void mapHandles_VkSamplerYcbcrConversion(VkSamplerYcbcrConversion* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkDescriptorUpdateTemplate(VkDescriptorUpdateTemplate* handles, size_t count = 1) = 0;

#ifdef VK_KHR_swapchain
    virtual void mapHandles_VkSurfaceKHR(VkSurfaceKHR* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkSwapchainKHR(VkSwapchainKHR* handles, size_t count = 1) = 0;
#endif

#ifdef VK_KHR_display
    virtual void mapHandles_VkDisplayKHR(VkDisplayKHR* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkDisplayModeKHR(VkDisplayModeKHR* handles, size_t count = 1) = 0;
#endif

#ifdef VK_NVX_device_generated_commands
    virtual void mapHandles_VkObjectTableNVX(VkObjectTableNVX* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkIndirectCommandsLayoutNVX(VkIndirectCommandsLayoutNVX* handles, size_t count = 1) = 0;
#endif

#ifdef VK_EXT_validation_cache
    virtual void mapHandles_VkValidationCacheEXT(VkValidationCacheEXT* handles, size_t count = 1) = 0;
#endif

#ifdef VK_EXT_debug_report
    virtual void mapHandles_VkDebugReportCallbackEXT(VkDebugReportCallbackEXT* handles, size_t count = 1) = 0;
    virtual void mapHandles_VkDebugUtilsMessengerEXT(VkDebugUtilsMessengerEXT* handles, size_t count = 1) = 0;
#endif

    // Methods to store the result in a uint64_t array.
    virtual void mapHandles_VkInstance_u64(const VkInstance* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkDevice_u64(const VkDevice* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkQueue_u64(const VkQueue* handles, uint64_t* handle_u64s, size_t count = 1) = 0;

    virtual void mapHandles_VkSemaphore_u64(const VkSemaphore* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkCommandBuffer_u64(const VkCommandBuffer* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkDeviceMemory_u64(const VkDeviceMemory* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkBuffer_u64(const VkBuffer* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkImage_u64(const VkImage* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkShaderModule_u64(const VkShaderModule* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkPipelineLayout_u64(const VkPipelineLayout* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkRenderPass_u64(const VkRenderPass* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkPipeline_u64(const VkPipeline* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkPipelineCache_u64(const VkPipelineCache* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkDescriptorSetLayout_u64(const VkDescriptorSetLayout* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkSampler_u64(const VkSampler* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkDescriptorPool_u64(const VkDescriptorPool* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkImageView_u64(const VkImageView* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkDescriptorSet_u64(const VkDescriptorSet* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkBufferView_u64(const VkBufferView* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkCommandPool_u64(const VkCommandPool* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkFramebuffer_u64(const VkFramebuffer* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkPhysicalDevice_u64(const VkPhysicalDevice* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkFence_u64(const VkFence* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkEvent_u64(const VkEvent* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkQueryPool_u64(const VkQueryPool* handles, uint64_t* handle_u64s, size_t count = 1) = 0;

    virtual void mapHandles_VkSamplerYcbcrConversion_u64(const VkSamplerYcbcrConversion* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkDescriptorUpdateTemplate_u64(const VkDescriptorUpdateTemplate* handles, uint64_t* handle_u64s, size_t count = 1) = 0;

#ifdef VK_KHR_swapchain
    virtual void mapHandles_VkSurfaceKHR_u64(const VkSurfaceKHR* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkSwapchainKHR_u64(const VkSwapchainKHR* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
#endif

#ifdef VK_KHR_display
    virtual void mapHandles_VkDisplayKHR_u64(const VkDisplayKHR* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkDisplayModeKHR_u64(const VkDisplayModeKHR* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
#endif

#ifdef VK_NVX_device_generated_commands
    virtual void mapHandles_VkObjectTableNVX_u64(const VkObjectTableNVX* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkIndirectCommandsLayoutNVX_u64(const VkIndirectCommandsLayoutNVX* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
#endif

#ifdef VK_EXT_validation_cache
    virtual void mapHandles_VkValidationCacheEXT_u64(const VkValidationCacheEXT* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
#endif

#ifdef VK_EXT_debug_report
    virtual void mapHandles_VkDebugReportCallbackEXT_u64(const VkDebugReportCallbackEXT* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
    virtual void mapHandles_VkDebugUtilsMessengerEXT_u64(const VkDebugUtilsMessengerEXT* handles, uint64_t* handle_u64s, size_t count = 1) = 0;
#endif

};

} // namespace goldfish_vk
