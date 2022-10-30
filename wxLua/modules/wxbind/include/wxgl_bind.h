// ---------------------------------------------------------------------------
// wxgl.h - headers and wxLua types for wxLua binding
//
// This file was generated by genwxbind.lua 
// Any changes made to this file will be lost when the file is regenerated
// ---------------------------------------------------------------------------

#ifndef __HOOK_WXLUA_wxgl_H__
#define __HOOK_WXLUA_wxgl_H__

#include "wxbind/include/wxbinddefs.h"
#include "wxluasetup.h"
#include "wxbind/include/wxcore_bind.h"

#include "wxlua/wxlstate.h"
#include "wxlua/wxlbind.h"

// ---------------------------------------------------------------------------
// Check if the version of binding generator used to create this is older than
//   the current version of the bindings.
//   See 'bindings/genwxbind.lua' and 'modules/wxlua/wxldefs.h'
#if WXLUA_BINDING_VERSION > 43
#   error "The WXLUA_BINDING_VERSION in the bindings is too old, regenerate bindings."
#endif //WXLUA_BINDING_VERSION > 43
// ---------------------------------------------------------------------------

// binding class
class WXDLLIMPEXP_BINDWXGL wxLuaBinding_wxgl : public wxLuaBinding
{
public:
    wxLuaBinding_wxgl();


private:
    DECLARE_DYNAMIC_CLASS(wxLuaBinding_wxgl)
};


// initialize wxLuaBinding_wxgl for all wxLuaStates
extern WXDLLIMPEXP_BINDWXGL wxLuaBinding* wxLuaBinding_wxgl_init();

// ---------------------------------------------------------------------------
// Includes
// ---------------------------------------------------------------------------

#if wxLUA_USE_wxGLCanvas && wxUSE_GLCANVAS
    #include "wx/glcanvas.h"
#endif // wxLUA_USE_wxGLCanvas && wxUSE_GLCANVAS

// ---------------------------------------------------------------------------
// Lua Tag Method Values and Tables for each Class
// ---------------------------------------------------------------------------

#if (wxCHECK_VERSION(3,1,0)) && (wxLUA_USE_wxGLCanvas && wxUSE_GLCANVAS)
    extern WXDLLIMPEXP_DATA_BINDWXGL(int) wxluatype_wxGLAttribsBase;
    extern WXDLLIMPEXP_DATA_BINDWXGL(int) wxluatype_wxGLAttributes;
    extern WXDLLIMPEXP_DATA_BINDWXGL(int) wxluatype_wxGLContextAttrs;
#endif // (wxCHECK_VERSION(3,1,0)) && (wxLUA_USE_wxGLCanvas && wxUSE_GLCANVAS)

#if wxLUA_USE_wxGLCanvas && wxUSE_GLCANVAS
    extern WXDLLIMPEXP_DATA_BINDWXGL(int) wxluatype_wxGLCanvas;
    extern WXDLLIMPEXP_DATA_BINDWXGL(int) wxluatype_wxGLContext;
#endif // wxLUA_USE_wxGLCanvas && wxUSE_GLCANVAS



#endif // __HOOK_WXLUA_wxgl_H__

