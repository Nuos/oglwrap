#ifndef OGLWRAP_ENUMS_FRAMEBUFFER_TYPE_HPP_
#define OGLWRAP_ENUMS_FRAMEBUFFER_TYPE_HPP_

#include "../config.hpp"

namespace oglwrap {

inline namespace enums {

enum class FramebufferType : GLenum {
#if OGLWRAP_DEFINE_EVERYTHING || defined(GL_READ_FRAMEBUFFER)
  Read = GL_READ_FRAMEBUFFER,
#endif
#if OGLWRAP_DEFINE_EVERYTHING || defined(GL_DRAW_FRAMEBUFFER)
  Draw = GL_DRAW_FRAMEBUFFER,
#endif
#if OGLWRAP_DEFINE_EVERYTHING || defined(GL_FRAMEBUFFER)
  Read_Draw = GL_FRAMEBUFFER,
#endif
};

} // enums

} // oglwrap

#endif