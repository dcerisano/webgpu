/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY webgpu v0.1.1
 */
#ifndef __DESCRIPTOR_DECODER_H__
#define __DESCRIPTOR_DECODER_H__

#include "GPUDevice.h"
#include "GPUAdapter.h"
#include "GPUQueue.h"
#include "GPUFence.h"
#include "GPUBuffer.h"
#include "GPUTexture.h"
#include "GPUTextureView.h"
#include "GPUSampler.h"
#include "GPUBindGroupLayout.h"
#include "GPUPipelineLayout.h"
#include "GPUBindGroup.h"
#include "GPUShaderModule.h"
#include "GPURenderPipeline.h"
#include "GPURayTracingAccelerationContainer.h"
#include "GPURayTracingShaderBindingTable.h"
#include "GPURayTracingPipeline.h"

#include <unordered_map>

namespace DescriptorDecoder {
  
  uint32_t GPUAdapterType(std::string name);
  std::string GPUAdapterType(uint32_t value);
  
  uint32_t GPUAddressMode(std::string name);
  std::string GPUAddressMode(uint32_t value);
  
  uint32_t GPUBackendType(std::string name);
  std::string GPUBackendType(uint32_t value);
  
  uint32_t GPURayTracingAccelerationGeometryType(std::string name);
  std::string GPURayTracingAccelerationGeometryType(uint32_t value);
  
  uint32_t GPURayTracingAccelerationContainerLevel(std::string name);
  std::string GPURayTracingAccelerationContainerLevel(uint32_t value);
  
  uint32_t GPURayTracingShaderBindingTableGroupType(std::string name);
  std::string GPURayTracingShaderBindingTableGroupType(uint32_t value);
  
  uint32_t GPUBindingType(std::string name);
  std::string GPUBindingType(uint32_t value);
  
  uint32_t GPUBlendFactor(std::string name);
  std::string GPUBlendFactor(uint32_t value);
  
  uint32_t GPUBlendOperation(std::string name);
  std::string GPUBlendOperation(uint32_t value);
  
  uint32_t GPUBufferMapAsyncStatus(std::string name);
  std::string GPUBufferMapAsyncStatus(uint32_t value);
  
  uint32_t GPUCompareFunction(std::string name);
  std::string GPUCompareFunction(uint32_t value);
  
  uint32_t GPUCullMode(std::string name);
  std::string GPUCullMode(uint32_t value);
  
  uint32_t GPUErrorFilter(std::string name);
  std::string GPUErrorFilter(uint32_t value);
  
  uint32_t GPUErrorType(std::string name);
  std::string GPUErrorType(uint32_t value);
  
  uint32_t GPUFenceCompletionStatus(std::string name);
  std::string GPUFenceCompletionStatus(uint32_t value);
  
  uint32_t GPUFilterMode(std::string name);
  std::string GPUFilterMode(uint32_t value);
  
  uint32_t GPUFrontFace(std::string name);
  std::string GPUFrontFace(uint32_t value);
  
  uint32_t GPUIndexFormat(std::string name);
  std::string GPUIndexFormat(uint32_t value);
  
  uint32_t GPUInputStepMode(std::string name);
  std::string GPUInputStepMode(uint32_t value);
  
  uint32_t GPULoadOp(std::string name);
  std::string GPULoadOp(uint32_t value);
  
  uint32_t GPUStoreOp(std::string name);
  std::string GPUStoreOp(uint32_t value);
  
  uint32_t GPUPresentMode(std::string name);
  std::string GPUPresentMode(uint32_t value);
  
  uint32_t GPUPrimitiveTopology(std::string name);
  std::string GPUPrimitiveTopology(uint32_t value);
  
  uint32_t GPUStencilOperation(std::string name);
  std::string GPUStencilOperation(uint32_t value);
  
  uint32_t GPUSType(std::string name);
  std::string GPUSType(uint32_t value);
  
  uint32_t GPUTextureAspect(std::string name);
  std::string GPUTextureAspect(uint32_t value);
  
  uint32_t GPUTextureComponentType(std::string name);
  std::string GPUTextureComponentType(uint32_t value);
  
  uint32_t GPUTextureDimension(std::string name);
  std::string GPUTextureDimension(uint32_t value);
  
  uint32_t GPUTextureFormat(std::string name);
  std::string GPUTextureFormat(uint32_t value);
  
  uint32_t GPUTextureViewDimension(std::string name);
  std::string GPUTextureViewDimension(uint32_t value);
  
  uint32_t GPUVertexFormat(std::string name);
  std::string GPUVertexFormat(uint32_t value);
  

  
  WGPUAdapterProperties DecodeGPUAdapterProperties(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUBindGroupBinding DecodeGPUBindGroupBinding(GPUDevice* device, const Napi::Value& value);
  
  WGPURayTracingAccelerationGeometryVertexDescriptor DecodeGPURayTracingAccelerationGeometryVertexDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPURayTracingAccelerationGeometryIndexDescriptor DecodeGPURayTracingAccelerationGeometryIndexDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPURayTracingAccelerationGeometryAabbDescriptor DecodeGPURayTracingAccelerationGeometryAabbDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPURayTracingAccelerationGeometryDescriptor DecodeGPURayTracingAccelerationGeometryDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPUTransform3D DecodeGPUTransform3D(GPUDevice* device, const Napi::Value& value);
  
  WGPURayTracingAccelerationInstanceTransformDescriptor DecodeGPURayTracingAccelerationInstanceTransformDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPURayTracingAccelerationInstanceDescriptor DecodeGPURayTracingAccelerationInstanceDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPURayTracingAccelerationContainerDescriptor DecodeGPURayTracingAccelerationContainerDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPURayTracingShaderBindingTableStagesDescriptor DecodeGPURayTracingShaderBindingTableStagesDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPURayTracingShaderBindingTableGroupsDescriptor DecodeGPURayTracingShaderBindingTableGroupsDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPURayTracingShaderBindingTableDescriptor DecodeGPURayTracingShaderBindingTableDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPUBindGroupDescriptor DecodeGPUBindGroupDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUBindGroupLayoutBinding DecodeGPUBindGroupLayoutBinding(GPUDevice* device, const Napi::Value& value);
  
  WGPUBindGroupLayoutDescriptor DecodeGPUBindGroupLayoutDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUBlendDescriptor DecodeGPUBlendDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPUColorStateDescriptor DecodeGPUColorStateDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUBufferCopyView DecodeGPUBufferCopyView(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUBufferDescriptor DecodeGPUBufferDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUCreateBufferMappedResult DecodeGPUCreateBufferMappedResult(GPUDevice* device, const Napi::Value& value);
  
  WGPUColor DecodeGPUColor(GPUDevice* device, const Napi::Value& value);
  
  WGPUCommandBufferDescriptor DecodeGPUCommandBufferDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUCommandEncoderDescriptor DecodeGPUCommandEncoderDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUComputePassDescriptor DecodeGPUComputePassDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUComputePipelineDescriptor DecodeGPUComputePipelineDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPURayTracingPassDescriptor DecodeGPURayTracingPassDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPURayTracingStateDescriptor DecodeGPURayTracingStateDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPURayTracingPipelineDescriptor DecodeGPURayTracingPipelineDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPUDeviceProperties DecodeGPUDeviceProperties(GPUDevice* device, const Napi::Value& value);
  
  WGPUDepthStencilStateDescriptor DecodeGPUDepthStencilStateDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUExtent3D DecodeGPUExtent3D(GPUDevice* device, const Napi::Value& value);
  
  WGPUFenceDescriptor DecodeGPUFenceDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUInstanceDescriptor DecodeGPUInstanceDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUVertexAttributeDescriptor DecodeGPUVertexAttributeDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPUVertexBufferLayoutDescriptor DecodeGPUVertexBufferLayoutDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPUVertexStateDescriptor DecodeGPUVertexStateDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUOrigin3D DecodeGPUOrigin3D(GPUDevice* device, const Napi::Value& value);
  
  WGPUPipelineLayoutDescriptor DecodeGPUPipelineLayoutDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUProgrammableStageDescriptor DecodeGPUProgrammableStageDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPURasterizationStateDescriptor DecodeGPURasterizationStateDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPURenderBundleDescriptor DecodeGPURenderBundleDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPURenderBundleEncoderDescriptor DecodeGPURenderBundleEncoderDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPURenderPassColorAttachmentDescriptor DecodeGPURenderPassColorAttachmentDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPURenderPassDepthStencilAttachmentDescriptor DecodeGPURenderPassDepthStencilAttachmentDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPURenderPassDescriptor DecodeGPURenderPassDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPURenderPipelineDescriptor DecodeGPURenderPipelineDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUSamplerDescriptor DecodeGPUSamplerDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUShaderModuleDescriptor DecodeGPUShaderModuleDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUStencilStateFaceDescriptor DecodeGPUStencilStateFaceDescriptor(GPUDevice* device, const Napi::Value& value);
  
  WGPUSurfaceDescriptor DecodeGPUSurfaceDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUSurfaceDescriptorFromHTMLCanvasId DecodeGPUSurfaceDescriptorFromHTMLCanvasId(GPUDevice* device, const Napi::Value& value);
  
  WGPUSurfaceDescriptorFromMetalLayer DecodeGPUSurfaceDescriptorFromMetalLayer(GPUDevice* device, const Napi::Value& value);
  
  WGPUSurfaceDescriptorFromWindowsHWND DecodeGPUSurfaceDescriptorFromWindowsHWND(GPUDevice* device, const Napi::Value& value);
  
  WGPUSurfaceDescriptorFromXlib DecodeGPUSurfaceDescriptorFromXlib(GPUDevice* device, const Napi::Value& value);
  
  WGPUSwapChainDescriptor DecodeGPUSwapChainDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUTextureCopyView DecodeGPUTextureCopyView(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUTextureDescriptor DecodeGPUTextureDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  
  WGPUTextureViewDescriptor DecodeGPUTextureViewDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
  

  
  class GPUAdapterProperties {
    public:
      GPUAdapterProperties(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUAdapterProperties();
      WGPUAdapterProperties* operator &() { return &descriptor; };
    private:
      WGPUAdapterProperties descriptor;
  };
  
  class GPUBindGroupBinding {
    public:
      GPUBindGroupBinding(GPUDevice* device, const Napi::Value& value);
      ~GPUBindGroupBinding();
      WGPUBindGroupBinding* operator &() { return &descriptor; };
    private:
      WGPUBindGroupBinding descriptor;
  };
  
  class GPURayTracingAccelerationGeometryVertexDescriptor {
    public:
      GPURayTracingAccelerationGeometryVertexDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPURayTracingAccelerationGeometryVertexDescriptor();
      WGPURayTracingAccelerationGeometryVertexDescriptor* operator &() { return &descriptor; };
    private:
      WGPURayTracingAccelerationGeometryVertexDescriptor descriptor;
  };
  
  class GPURayTracingAccelerationGeometryIndexDescriptor {
    public:
      GPURayTracingAccelerationGeometryIndexDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPURayTracingAccelerationGeometryIndexDescriptor();
      WGPURayTracingAccelerationGeometryIndexDescriptor* operator &() { return &descriptor; };
    private:
      WGPURayTracingAccelerationGeometryIndexDescriptor descriptor;
  };
  
  class GPURayTracingAccelerationGeometryAabbDescriptor {
    public:
      GPURayTracingAccelerationGeometryAabbDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPURayTracingAccelerationGeometryAabbDescriptor();
      WGPURayTracingAccelerationGeometryAabbDescriptor* operator &() { return &descriptor; };
    private:
      WGPURayTracingAccelerationGeometryAabbDescriptor descriptor;
  };
  
  class GPURayTracingAccelerationGeometryDescriptor {
    public:
      GPURayTracingAccelerationGeometryDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPURayTracingAccelerationGeometryDescriptor();
      WGPURayTracingAccelerationGeometryDescriptor* operator &() { return &descriptor; };
    private:
      WGPURayTracingAccelerationGeometryDescriptor descriptor;
  };
  
  class GPUTransform3D {
    public:
      GPUTransform3D(GPUDevice* device, const Napi::Value& value);
      ~GPUTransform3D();
      WGPUTransform3D* operator &() { return &descriptor; };
    private:
      WGPUTransform3D descriptor;
  };
  
  class GPURayTracingAccelerationInstanceTransformDescriptor {
    public:
      GPURayTracingAccelerationInstanceTransformDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPURayTracingAccelerationInstanceTransformDescriptor();
      WGPURayTracingAccelerationInstanceTransformDescriptor* operator &() { return &descriptor; };
    private:
      WGPURayTracingAccelerationInstanceTransformDescriptor descriptor;
  };
  
  class GPURayTracingAccelerationInstanceDescriptor {
    public:
      GPURayTracingAccelerationInstanceDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPURayTracingAccelerationInstanceDescriptor();
      WGPURayTracingAccelerationInstanceDescriptor* operator &() { return &descriptor; };
    private:
      WGPURayTracingAccelerationInstanceDescriptor descriptor;
  };
  
  class GPURayTracingAccelerationContainerDescriptor {
    public:
      GPURayTracingAccelerationContainerDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPURayTracingAccelerationContainerDescriptor();
      WGPURayTracingAccelerationContainerDescriptor* operator &() { return &descriptor; };
    private:
      WGPURayTracingAccelerationContainerDescriptor descriptor;
  };
  
  class GPURayTracingShaderBindingTableStagesDescriptor {
    public:
      GPURayTracingShaderBindingTableStagesDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPURayTracingShaderBindingTableStagesDescriptor();
      WGPURayTracingShaderBindingTableStagesDescriptor* operator &() { return &descriptor; };
    private:
      WGPURayTracingShaderBindingTableStagesDescriptor descriptor;
  };
  
  class GPURayTracingShaderBindingTableGroupsDescriptor {
    public:
      GPURayTracingShaderBindingTableGroupsDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPURayTracingShaderBindingTableGroupsDescriptor();
      WGPURayTracingShaderBindingTableGroupsDescriptor* operator &() { return &descriptor; };
    private:
      WGPURayTracingShaderBindingTableGroupsDescriptor descriptor;
  };
  
  class GPURayTracingShaderBindingTableDescriptor {
    public:
      GPURayTracingShaderBindingTableDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPURayTracingShaderBindingTableDescriptor();
      WGPURayTracingShaderBindingTableDescriptor* operator &() { return &descriptor; };
    private:
      WGPURayTracingShaderBindingTableDescriptor descriptor;
  };
  
  class GPUBindGroupDescriptor {
    public:
      GPUBindGroupDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUBindGroupDescriptor();
      WGPUBindGroupDescriptor* operator &() { return &descriptor; };
    private:
      WGPUBindGroupDescriptor descriptor;
  };
  
  class GPUBindGroupLayoutBinding {
    public:
      GPUBindGroupLayoutBinding(GPUDevice* device, const Napi::Value& value);
      ~GPUBindGroupLayoutBinding();
      WGPUBindGroupLayoutBinding* operator &() { return &descriptor; };
    private:
      WGPUBindGroupLayoutBinding descriptor;
  };
  
  class GPUBindGroupLayoutDescriptor {
    public:
      GPUBindGroupLayoutDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUBindGroupLayoutDescriptor();
      WGPUBindGroupLayoutDescriptor* operator &() { return &descriptor; };
    private:
      WGPUBindGroupLayoutDescriptor descriptor;
  };
  
  class GPUBlendDescriptor {
    public:
      GPUBlendDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPUBlendDescriptor();
      WGPUBlendDescriptor* operator &() { return &descriptor; };
    private:
      WGPUBlendDescriptor descriptor;
  };
  
  class GPUColorStateDescriptor {
    public:
      GPUColorStateDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUColorStateDescriptor();
      WGPUColorStateDescriptor* operator &() { return &descriptor; };
    private:
      WGPUColorStateDescriptor descriptor;
  };
  
  class GPUBufferCopyView {
    public:
      GPUBufferCopyView(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUBufferCopyView();
      WGPUBufferCopyView* operator &() { return &descriptor; };
    private:
      WGPUBufferCopyView descriptor;
  };
  
  class GPUBufferDescriptor {
    public:
      GPUBufferDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUBufferDescriptor();
      WGPUBufferDescriptor* operator &() { return &descriptor; };
    private:
      WGPUBufferDescriptor descriptor;
  };
  
  class GPUCreateBufferMappedResult {
    public:
      GPUCreateBufferMappedResult(GPUDevice* device, const Napi::Value& value);
      ~GPUCreateBufferMappedResult();
      WGPUCreateBufferMappedResult* operator &() { return &descriptor; };
    private:
      WGPUCreateBufferMappedResult descriptor;
  };
  
  class GPUColor {
    public:
      GPUColor(GPUDevice* device, const Napi::Value& value);
      ~GPUColor();
      WGPUColor* operator &() { return &descriptor; };
    private:
      WGPUColor descriptor;
  };
  
  class GPUCommandBufferDescriptor {
    public:
      GPUCommandBufferDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUCommandBufferDescriptor();
      WGPUCommandBufferDescriptor* operator &() { return &descriptor; };
    private:
      WGPUCommandBufferDescriptor descriptor;
  };
  
  class GPUCommandEncoderDescriptor {
    public:
      GPUCommandEncoderDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUCommandEncoderDescriptor();
      WGPUCommandEncoderDescriptor* operator &() { return &descriptor; };
    private:
      WGPUCommandEncoderDescriptor descriptor;
  };
  
  class GPUComputePassDescriptor {
    public:
      GPUComputePassDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUComputePassDescriptor();
      WGPUComputePassDescriptor* operator &() { return &descriptor; };
    private:
      WGPUComputePassDescriptor descriptor;
  };
  
  class GPUComputePipelineDescriptor {
    public:
      GPUComputePipelineDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUComputePipelineDescriptor();
      WGPUComputePipelineDescriptor* operator &() { return &descriptor; };
    private:
      WGPUComputePipelineDescriptor descriptor;
  };
  
  class GPURayTracingPassDescriptor {
    public:
      GPURayTracingPassDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPURayTracingPassDescriptor();
      WGPURayTracingPassDescriptor* operator &() { return &descriptor; };
    private:
      WGPURayTracingPassDescriptor descriptor;
  };
  
  class GPURayTracingStateDescriptor {
    public:
      GPURayTracingStateDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPURayTracingStateDescriptor();
      WGPURayTracingStateDescriptor* operator &() { return &descriptor; };
    private:
      WGPURayTracingStateDescriptor descriptor;
  };
  
  class GPURayTracingPipelineDescriptor {
    public:
      GPURayTracingPipelineDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPURayTracingPipelineDescriptor();
      WGPURayTracingPipelineDescriptor* operator &() { return &descriptor; };
    private:
      WGPURayTracingPipelineDescriptor descriptor;
  };
  
  class GPUDeviceProperties {
    public:
      GPUDeviceProperties(GPUDevice* device, const Napi::Value& value);
      ~GPUDeviceProperties();
      WGPUDeviceProperties* operator &() { return &descriptor; };
    private:
      WGPUDeviceProperties descriptor;
  };
  
  class GPUDepthStencilStateDescriptor {
    public:
      GPUDepthStencilStateDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUDepthStencilStateDescriptor();
      WGPUDepthStencilStateDescriptor* operator &() { return &descriptor; };
    private:
      WGPUDepthStencilStateDescriptor descriptor;
  };
  
  class GPUExtent3D {
    public:
      GPUExtent3D(GPUDevice* device, const Napi::Value& value);
      ~GPUExtent3D();
      WGPUExtent3D* operator &() { return &descriptor; };
    private:
      WGPUExtent3D descriptor;
  };
  
  class GPUFenceDescriptor {
    public:
      GPUFenceDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUFenceDescriptor();
      WGPUFenceDescriptor* operator &() { return &descriptor; };
    private:
      WGPUFenceDescriptor descriptor;
  };
  
  class GPUInstanceDescriptor {
    public:
      GPUInstanceDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUInstanceDescriptor();
      WGPUInstanceDescriptor* operator &() { return &descriptor; };
    private:
      WGPUInstanceDescriptor descriptor;
  };
  
  class GPUVertexAttributeDescriptor {
    public:
      GPUVertexAttributeDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPUVertexAttributeDescriptor();
      WGPUVertexAttributeDescriptor* operator &() { return &descriptor; };
    private:
      WGPUVertexAttributeDescriptor descriptor;
  };
  
  class GPUVertexBufferLayoutDescriptor {
    public:
      GPUVertexBufferLayoutDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPUVertexBufferLayoutDescriptor();
      WGPUVertexBufferLayoutDescriptor* operator &() { return &descriptor; };
    private:
      WGPUVertexBufferLayoutDescriptor descriptor;
  };
  
  class GPUVertexStateDescriptor {
    public:
      GPUVertexStateDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUVertexStateDescriptor();
      WGPUVertexStateDescriptor* operator &() { return &descriptor; };
    private:
      WGPUVertexStateDescriptor descriptor;
  };
  
  class GPUOrigin3D {
    public:
      GPUOrigin3D(GPUDevice* device, const Napi::Value& value);
      ~GPUOrigin3D();
      WGPUOrigin3D* operator &() { return &descriptor; };
    private:
      WGPUOrigin3D descriptor;
  };
  
  class GPUPipelineLayoutDescriptor {
    public:
      GPUPipelineLayoutDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUPipelineLayoutDescriptor();
      WGPUPipelineLayoutDescriptor* operator &() { return &descriptor; };
    private:
      WGPUPipelineLayoutDescriptor descriptor;
  };
  
  class GPUProgrammableStageDescriptor {
    public:
      GPUProgrammableStageDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUProgrammableStageDescriptor();
      WGPUProgrammableStageDescriptor* operator &() { return &descriptor; };
    private:
      WGPUProgrammableStageDescriptor descriptor;
  };
  
  class GPURasterizationStateDescriptor {
    public:
      GPURasterizationStateDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPURasterizationStateDescriptor();
      WGPURasterizationStateDescriptor* operator &() { return &descriptor; };
    private:
      WGPURasterizationStateDescriptor descriptor;
  };
  
  class GPURenderBundleDescriptor {
    public:
      GPURenderBundleDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPURenderBundleDescriptor();
      WGPURenderBundleDescriptor* operator &() { return &descriptor; };
    private:
      WGPURenderBundleDescriptor descriptor;
  };
  
  class GPURenderBundleEncoderDescriptor {
    public:
      GPURenderBundleEncoderDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPURenderBundleEncoderDescriptor();
      WGPURenderBundleEncoderDescriptor* operator &() { return &descriptor; };
    private:
      WGPURenderBundleEncoderDescriptor descriptor;
  };
  
  class GPURenderPassColorAttachmentDescriptor {
    public:
      GPURenderPassColorAttachmentDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPURenderPassColorAttachmentDescriptor();
      WGPURenderPassColorAttachmentDescriptor* operator &() { return &descriptor; };
    private:
      WGPURenderPassColorAttachmentDescriptor descriptor;
  };
  
  class GPURenderPassDepthStencilAttachmentDescriptor {
    public:
      GPURenderPassDepthStencilAttachmentDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPURenderPassDepthStencilAttachmentDescriptor();
      WGPURenderPassDepthStencilAttachmentDescriptor* operator &() { return &descriptor; };
    private:
      WGPURenderPassDepthStencilAttachmentDescriptor descriptor;
  };
  
  class GPURenderPassDescriptor {
    public:
      GPURenderPassDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPURenderPassDescriptor();
      WGPURenderPassDescriptor* operator &() { return &descriptor; };
    private:
      WGPURenderPassDescriptor descriptor;
  };
  
  class GPURenderPipelineDescriptor {
    public:
      GPURenderPipelineDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPURenderPipelineDescriptor();
      WGPURenderPipelineDescriptor* operator &() { return &descriptor; };
    private:
      WGPURenderPipelineDescriptor descriptor;
  };
  
  class GPUSamplerDescriptor {
    public:
      GPUSamplerDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUSamplerDescriptor();
      WGPUSamplerDescriptor* operator &() { return &descriptor; };
    private:
      WGPUSamplerDescriptor descriptor;
  };
  
  class GPUShaderModuleDescriptor {
    public:
      GPUShaderModuleDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUShaderModuleDescriptor();
      WGPUShaderModuleDescriptor* operator &() { return &descriptor; };
    private:
      WGPUShaderModuleDescriptor descriptor;
  };
  
  class GPUStencilStateFaceDescriptor {
    public:
      GPUStencilStateFaceDescriptor(GPUDevice* device, const Napi::Value& value);
      ~GPUStencilStateFaceDescriptor();
      WGPUStencilStateFaceDescriptor* operator &() { return &descriptor; };
    private:
      WGPUStencilStateFaceDescriptor descriptor;
  };
  
  class GPUSurfaceDescriptor {
    public:
      GPUSurfaceDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUSurfaceDescriptor();
      WGPUSurfaceDescriptor* operator &() { return &descriptor; };
    private:
      WGPUSurfaceDescriptor descriptor;
  };
  
  class GPUSurfaceDescriptorFromHTMLCanvasId {
    public:
      GPUSurfaceDescriptorFromHTMLCanvasId(GPUDevice* device, const Napi::Value& value);
      ~GPUSurfaceDescriptorFromHTMLCanvasId();
      WGPUSurfaceDescriptorFromHTMLCanvasId* operator &() { return &descriptor; };
    private:
      WGPUSurfaceDescriptorFromHTMLCanvasId descriptor;
  };
  
  class GPUSurfaceDescriptorFromMetalLayer {
    public:
      GPUSurfaceDescriptorFromMetalLayer(GPUDevice* device, const Napi::Value& value);
      ~GPUSurfaceDescriptorFromMetalLayer();
      WGPUSurfaceDescriptorFromMetalLayer* operator &() { return &descriptor; };
    private:
      WGPUSurfaceDescriptorFromMetalLayer descriptor;
  };
  
  class GPUSurfaceDescriptorFromWindowsHWND {
    public:
      GPUSurfaceDescriptorFromWindowsHWND(GPUDevice* device, const Napi::Value& value);
      ~GPUSurfaceDescriptorFromWindowsHWND();
      WGPUSurfaceDescriptorFromWindowsHWND* operator &() { return &descriptor; };
    private:
      WGPUSurfaceDescriptorFromWindowsHWND descriptor;
  };
  
  class GPUSurfaceDescriptorFromXlib {
    public:
      GPUSurfaceDescriptorFromXlib(GPUDevice* device, const Napi::Value& value);
      ~GPUSurfaceDescriptorFromXlib();
      WGPUSurfaceDescriptorFromXlib* operator &() { return &descriptor; };
    private:
      WGPUSurfaceDescriptorFromXlib descriptor;
  };
  
  class GPUSwapChainDescriptor {
    public:
      GPUSwapChainDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUSwapChainDescriptor();
      WGPUSwapChainDescriptor* operator &() { return &descriptor; };
    private:
      WGPUSwapChainDescriptor descriptor;
  };
  
  class GPUTextureCopyView {
    public:
      GPUTextureCopyView(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUTextureCopyView();
      WGPUTextureCopyView* operator &() { return &descriptor; };
    private:
      WGPUTextureCopyView descriptor;
  };
  
  class GPUTextureDescriptor {
    public:
      GPUTextureDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUTextureDescriptor();
      WGPUTextureDescriptor* operator &() { return &descriptor; };
    private:
      WGPUTextureDescriptor descriptor;
  };
  
  class GPUTextureViewDescriptor {
    public:
      GPUTextureViewDescriptor(GPUDevice* device, const Napi::Value& value, void* nextInChain = nullptr);
      ~GPUTextureViewDescriptor();
      WGPUTextureViewDescriptor* operator &() { return &descriptor; };
    private:
      WGPUTextureViewDescriptor descriptor;
  };
  

  
  void DestroyGPUAdapterProperties(WGPUAdapterProperties descriptor);
  
  void DestroyGPUBindGroupBinding(WGPUBindGroupBinding descriptor);
  
  void DestroyGPURayTracingAccelerationGeometryVertexDescriptor(WGPURayTracingAccelerationGeometryVertexDescriptor descriptor);
  
  void DestroyGPURayTracingAccelerationGeometryIndexDescriptor(WGPURayTracingAccelerationGeometryIndexDescriptor descriptor);
  
  void DestroyGPURayTracingAccelerationGeometryAabbDescriptor(WGPURayTracingAccelerationGeometryAabbDescriptor descriptor);
  
  void DestroyGPURayTracingAccelerationGeometryDescriptor(WGPURayTracingAccelerationGeometryDescriptor descriptor);
  
  void DestroyGPUTransform3D(WGPUTransform3D descriptor);
  
  void DestroyGPURayTracingAccelerationInstanceTransformDescriptor(WGPURayTracingAccelerationInstanceTransformDescriptor descriptor);
  
  void DestroyGPURayTracingAccelerationInstanceDescriptor(WGPURayTracingAccelerationInstanceDescriptor descriptor);
  
  void DestroyGPURayTracingAccelerationContainerDescriptor(WGPURayTracingAccelerationContainerDescriptor descriptor);
  
  void DestroyGPURayTracingShaderBindingTableStagesDescriptor(WGPURayTracingShaderBindingTableStagesDescriptor descriptor);
  
  void DestroyGPURayTracingShaderBindingTableGroupsDescriptor(WGPURayTracingShaderBindingTableGroupsDescriptor descriptor);
  
  void DestroyGPURayTracingShaderBindingTableDescriptor(WGPURayTracingShaderBindingTableDescriptor descriptor);
  
  void DestroyGPUBindGroupDescriptor(WGPUBindGroupDescriptor descriptor);
  
  void DestroyGPUBindGroupLayoutBinding(WGPUBindGroupLayoutBinding descriptor);
  
  void DestroyGPUBindGroupLayoutDescriptor(WGPUBindGroupLayoutDescriptor descriptor);
  
  void DestroyGPUBlendDescriptor(WGPUBlendDescriptor descriptor);
  
  void DestroyGPUColorStateDescriptor(WGPUColorStateDescriptor descriptor);
  
  void DestroyGPUBufferCopyView(WGPUBufferCopyView descriptor);
  
  void DestroyGPUBufferDescriptor(WGPUBufferDescriptor descriptor);
  
  void DestroyGPUCreateBufferMappedResult(WGPUCreateBufferMappedResult descriptor);
  
  void DestroyGPUColor(WGPUColor descriptor);
  
  void DestroyGPUCommandBufferDescriptor(WGPUCommandBufferDescriptor descriptor);
  
  void DestroyGPUCommandEncoderDescriptor(WGPUCommandEncoderDescriptor descriptor);
  
  void DestroyGPUComputePassDescriptor(WGPUComputePassDescriptor descriptor);
  
  void DestroyGPUComputePipelineDescriptor(WGPUComputePipelineDescriptor descriptor);
  
  void DestroyGPURayTracingPassDescriptor(WGPURayTracingPassDescriptor descriptor);
  
  void DestroyGPURayTracingStateDescriptor(WGPURayTracingStateDescriptor descriptor);
  
  void DestroyGPURayTracingPipelineDescriptor(WGPURayTracingPipelineDescriptor descriptor);
  
  void DestroyGPUDeviceProperties(WGPUDeviceProperties descriptor);
  
  void DestroyGPUDepthStencilStateDescriptor(WGPUDepthStencilStateDescriptor descriptor);
  
  void DestroyGPUExtent3D(WGPUExtent3D descriptor);
  
  void DestroyGPUFenceDescriptor(WGPUFenceDescriptor descriptor);
  
  void DestroyGPUInstanceDescriptor(WGPUInstanceDescriptor descriptor);
  
  void DestroyGPUVertexAttributeDescriptor(WGPUVertexAttributeDescriptor descriptor);
  
  void DestroyGPUVertexBufferLayoutDescriptor(WGPUVertexBufferLayoutDescriptor descriptor);
  
  void DestroyGPUVertexStateDescriptor(WGPUVertexStateDescriptor descriptor);
  
  void DestroyGPUOrigin3D(WGPUOrigin3D descriptor);
  
  void DestroyGPUPipelineLayoutDescriptor(WGPUPipelineLayoutDescriptor descriptor);
  
  void DestroyGPUProgrammableStageDescriptor(WGPUProgrammableStageDescriptor descriptor);
  
  void DestroyGPURasterizationStateDescriptor(WGPURasterizationStateDescriptor descriptor);
  
  void DestroyGPURenderBundleDescriptor(WGPURenderBundleDescriptor descriptor);
  
  void DestroyGPURenderBundleEncoderDescriptor(WGPURenderBundleEncoderDescriptor descriptor);
  
  void DestroyGPURenderPassColorAttachmentDescriptor(WGPURenderPassColorAttachmentDescriptor descriptor);
  
  void DestroyGPURenderPassDepthStencilAttachmentDescriptor(WGPURenderPassDepthStencilAttachmentDescriptor descriptor);
  
  void DestroyGPURenderPassDescriptor(WGPURenderPassDescriptor descriptor);
  
  void DestroyGPURenderPipelineDescriptor(WGPURenderPipelineDescriptor descriptor);
  
  void DestroyGPUSamplerDescriptor(WGPUSamplerDescriptor descriptor);
  
  void DestroyGPUShaderModuleDescriptor(WGPUShaderModuleDescriptor descriptor);
  
  void DestroyGPUStencilStateFaceDescriptor(WGPUStencilStateFaceDescriptor descriptor);
  
  void DestroyGPUSurfaceDescriptor(WGPUSurfaceDescriptor descriptor);
  
  void DestroyGPUSurfaceDescriptorFromHTMLCanvasId(WGPUSurfaceDescriptorFromHTMLCanvasId descriptor);
  
  void DestroyGPUSurfaceDescriptorFromMetalLayer(WGPUSurfaceDescriptorFromMetalLayer descriptor);
  
  void DestroyGPUSurfaceDescriptorFromWindowsHWND(WGPUSurfaceDescriptorFromWindowsHWND descriptor);
  
  void DestroyGPUSurfaceDescriptorFromXlib(WGPUSurfaceDescriptorFromXlib descriptor);
  
  void DestroyGPUSwapChainDescriptor(WGPUSwapChainDescriptor descriptor);
  
  void DestroyGPUTextureCopyView(WGPUTextureCopyView descriptor);
  
  void DestroyGPUTextureDescriptor(WGPUTextureDescriptor descriptor);
  
  void DestroyGPUTextureViewDescriptor(WGPUTextureViewDescriptor descriptor);
  
}

#endif
