// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_graphics_opengl_ExtensionPackedDepthStencil
#define INCLUDED_lime_graphics_opengl_ExtensionPackedDepthStencil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,ExtensionPackedDepthStencil)

namespace lime{
namespace graphics{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES ExtensionPackedDepthStencil_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ExtensionPackedDepthStencil_obj OBJ_;
		ExtensionPackedDepthStencil_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ExtensionPackedDepthStencil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ExtensionPackedDepthStencil"); }
		static hx::ObjectPtr< ExtensionPackedDepthStencil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ExtensionPackedDepthStencil_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ExtensionPackedDepthStencil","\x10","\x3e","\xf7","\x01"); }

		static void __boot();
		static Int DEPTH24_STENCIL8_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl

#endif /* INCLUDED_lime_graphics_opengl_ExtensionPackedDepthStencil */ 
