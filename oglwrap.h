// Copyright (c) 2014, Tamas Csala

/** @file oglwrap.h
    @brief The main header, including the core files of the library.
    It doesn't include everything, just the main features.
*/

#ifndef OGLWRAP_OGLWRAP_H_
#define OGLWRAP_OGLWRAP_H_

#ifdef gl
  #undef gl
  #warning Please don not define a macro named gl before including oglwrap
#endif

#ifdef glfunc
  #undef glfunc
  #warning Please don not define a macro named glfunc before including oglwrap
#endif

// Commonly used oglwrap headers
#include "context.h"
#include "shader.h"
#include "uniform.h"
#include "buffer.h"
#include "vertex_attrib.h"

// Optional headers
#if OGLWRAP_INCLUDE_EVERYTHING
	#include "texture.h"
	#include "framebuffer.h"
	#include "transfeedback.h"
#endif

// Put a warning if someone forgot to undef a macro
#ifdef gl
  #warning Some oglwrap header forgot to undefine its internal macros.
#endif

#endif // OGLWRAP_OGLWRAP_H_