#version 460
#extension GL_EXT_ray_tracing : enable
#pragma shader_stage(closest)

layout(location = 0) rayPayloadInEXT vec4 payload;

hitAttributeEXT vec3 attribs;

void main() {
  const vec3 bary = vec3(1.0 - attribs.x - attribs.y, attribs.x, attribs.y);
  payload = vec4(bary, 0);
}
