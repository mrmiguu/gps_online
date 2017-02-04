// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#define INCLUDED_openfl_display3D_textures_CubeTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,CubeTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display3D{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES CubeTexture_obj : public  ::openfl::display3D::textures::TextureBase_obj
{
	public:
		typedef  ::openfl::display3D::textures::TextureBase_obj super;
		typedef CubeTexture_obj OBJ_;
		CubeTexture_obj();

	public:
		void __construct( ::openfl::display3D::Context3D context,Int size, ::Dynamic format,Bool optimizeForRenderToTexture,Int streamingLevels);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.textures.CubeTexture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display3D.textures.CubeTexture"); }
		static hx::ObjectPtr< CubeTexture_obj > __new( ::openfl::display3D::Context3D context,Int size, ::Dynamic format,Bool optimizeForRenderToTexture,Int streamingLevels);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CubeTexture_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CubeTexture","\x46","\x04","\xc2","\x59"); }

		Int _hx___size;
		Int _hx___uploadedSides;
		void uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,Int byteArrayOffset,hx::Null< Bool >  async);
		::Dynamic uploadCompressedTextureFromByteArray_dyn();

		void uploadFromBitmapData( ::openfl::display::BitmapData source,Int side,hx::Null< Int >  miplevel,hx::Null< Bool >  generateMipmap);
		::Dynamic uploadFromBitmapData_dyn();

		void uploadFromByteArray( ::openfl::utils::ByteArrayData data,Int byteArrayOffset,Int side,hx::Null< Int >  miplevel);
		::Dynamic uploadFromByteArray_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_openfl_display3D_textures_CubeTexture */ 
