// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_ExtensionAnisotropicFiltering
#include <lime/graphics/opengl/ExtensionAnisotropicFiltering.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_574e9a3948a11606_21_new,"openfl.display3D.textures.RectangleTexture","new",0xcccbdd5b,"openfl.display3D.textures.RectangleTexture.new","openfl/display3D/textures/RectangleTexture.hx",21,0x83565556)
HX_LOCAL_STACK_FRAME(_hx_pos_574e9a3948a11606_35_uploadFromBitmapData,"openfl.display3D.textures.RectangleTexture","uploadFromBitmapData",0x711b2e49,"openfl.display3D.textures.RectangleTexture.uploadFromBitmapData","openfl/display3D/textures/RectangleTexture.hx",35,0x83565556)
HX_LOCAL_STACK_FRAME(_hx_pos_574e9a3948a11606_59_uploadFromByteArray,"openfl.display3D.textures.RectangleTexture","uploadFromByteArray",0xfd7a0ae1,"openfl.display3D.textures.RectangleTexture.uploadFromByteArray","openfl/display3D/textures/RectangleTexture.hx",59,0x83565556)
HX_LOCAL_STACK_FRAME(_hx_pos_574e9a3948a11606_64_uploadFromTypedArray,"openfl.display3D.textures.RectangleTexture","uploadFromTypedArray",0x35aa255f,"openfl.display3D.textures.RectangleTexture.uploadFromTypedArray","openfl/display3D/textures/RectangleTexture.hx",64,0x83565556)
HX_LOCAL_STACK_FRAME(_hx_pos_574e9a3948a11606_87___setSamplerState,"openfl.display3D.textures.RectangleTexture","__setSamplerState",0xea7a95c6,"openfl.display3D.textures.RectangleTexture.__setSamplerState","openfl/display3D/textures/RectangleTexture.hx",87,0x83565556)
namespace openfl{
namespace display3D{
namespace textures{

void RectangleTexture_obj::__construct( ::openfl::display3D::Context3D context,int width,int height,::String format,bool optimizeForRenderToTexture){
            	HX_STACKFRAME(&_hx_pos_574e9a3948a11606_21_new)
HXLINE(  23)		super::__construct(context,(int)3553);
HXLINE(  25)		this->_hx___width = width;
HXLINE(  26)		this->_hx___height = height;
HXLINE(  28)		this->_hx___optimizeForRenderToTexture = optimizeForRenderToTexture;
HXLINE(  30)		this->uploadFromTypedArray(null());
            	}

Dynamic RectangleTexture_obj::__CreateEmpty() { return new RectangleTexture_obj; }

void *RectangleTexture_obj::_hx_vtable = 0;

Dynamic RectangleTexture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RectangleTexture_obj > _hx_result = new RectangleTexture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool RectangleTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19affbf1) {
		if (inClassId<=(int)0x0b79cce7) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b79cce7;
		} else {
			return inClassId==(int)0x19affbf1;
		}
	} else {
		return inClassId==(int)0x1b123bf8;
	}
}

void RectangleTexture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source){
            	HX_STACKFRAME(&_hx_pos_574e9a3948a11606_35_uploadFromBitmapData)
HXLINE(  37)		if (hx::IsNull( source )) {
HXLINE(  37)			return;
            		}
HXLINE(  39)		 ::lime::graphics::Image image = this->_hx___getImage(source);
HXLINE(  41)		if (hx::IsNull( image )) {
HXLINE(  41)			return;
            		}
HXLINE(  43)		this->uploadFromTypedArray(image->get_data());
            	}


HX_DEFINE_DYNAMIC_FUNC1(RectangleTexture_obj,uploadFromBitmapData,(void))

void RectangleTexture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
            	HX_GC_STACKFRAME(&_hx_pos_574e9a3948a11606_59_uploadFromByteArray)
HXLINE(  59)		 ::haxe::io::Bytes buffer = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(data);
HXDLIN(  59)		 ::lime::utils::ArrayBufferView this1;
HXDLIN(  59)		if (hx::IsNotNull( buffer )) {
HXLINE(  59)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN(  59)			if ((byteArrayOffset < (int)0)) {
HXLINE(  59)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  59)			if ((hx::Mod(byteArrayOffset,_this->bytesPerElement) != (int)0)) {
HXLINE(  59)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  59)			int bufferByteLength = buffer->length;
HXDLIN(  59)			int elementSize = _this->bytesPerElement;
HXDLIN(  59)			int newByteLength = bufferByteLength;
HXDLIN(  59)			{
HXLINE(  59)				newByteLength = (bufferByteLength - byteArrayOffset);
HXDLIN(  59)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE(  59)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN(  59)				if ((newByteLength < (int)0)) {
HXLINE(  59)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN(  59)			_this->buffer = buffer;
HXDLIN(  59)			_this->byteOffset = byteArrayOffset;
HXDLIN(  59)			_this->byteLength = newByteLength;
HXDLIN(  59)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN(  59)			this1 = _this;
            		}
            		else {
HXLINE(  59)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            		}
HXDLIN(  59)		this->uploadFromTypedArray(this1);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RectangleTexture_obj,uploadFromByteArray,(void))

void RectangleTexture_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data){
            	HX_STACKFRAME(&_hx_pos_574e9a3948a11606_64_uploadFromTypedArray)
HXLINE(  72)		::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,this->_hx___textureID);
HXLINE(  73)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  75)		::lime::graphics::opengl::GL_obj::context->texImage2D(this->_hx___textureTarget,(int)0,this->_hx___internalFormat,this->_hx___width,this->_hx___height,(int)0,this->_hx___format,(int)5121,data);
HXLINE(  76)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  78)		::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,null());
HXLINE(  79)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  81)		int memUsage = ((this->_hx___width * this->_hx___height) * (int)4);
HXLINE(  82)		this->_hx___trackMemoryUsage(memUsage);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RectangleTexture_obj,uploadFromTypedArray,(void))

void RectangleTexture_obj::_hx___setSamplerState( ::openfl::_internal::stage3D::SamplerState state){
            	HX_STACKFRAME(&_hx_pos_574e9a3948a11606_87___setSamplerState)
HXLINE(  89)		if (!(state->equals(this->_hx___samplerState))) {
HXLINE(  91)			if ((state->maxAniso != ((Float)0.0))) {
HXLINE(  93)				::lime::graphics::opengl::GL_obj::context->texParameterf((int)3553,::lime::graphics::opengl::ExtensionAnisotropicFiltering_obj::TEXTURE_MAX_ANISOTROPY_EXT,state->maxAniso);
HXLINE(  94)				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
            			}
            		}
HXLINE( 100)		this->super::_hx___setSamplerState(state);
            	}



hx::ObjectPtr< RectangleTexture_obj > RectangleTexture_obj::__new( ::openfl::display3D::Context3D context,int width,int height,::String format,bool optimizeForRenderToTexture) {
	hx::ObjectPtr< RectangleTexture_obj > __this = new RectangleTexture_obj();
	__this->__construct(context,width,height,format,optimizeForRenderToTexture);
	return __this;
}

hx::ObjectPtr< RectangleTexture_obj > RectangleTexture_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context,int width,int height,::String format,bool optimizeForRenderToTexture) {
	RectangleTexture_obj *__this = (RectangleTexture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RectangleTexture_obj), true, "openfl.display3D.textures.RectangleTexture"));
	*(void **)__this = RectangleTexture_obj::_hx_vtable;
	__this->__construct(context,width,height,format,optimizeForRenderToTexture);
	return __this;
}

RectangleTexture_obj::RectangleTexture_obj()
{
}

hx::Val RectangleTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return hx::Val( _hx___setSamplerState_dyn()); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn()); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return hx::Val( uploadFromBitmapData_dyn()); }
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return hx::Val( uploadFromTypedArray_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *RectangleTexture_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *RectangleTexture_obj_sStaticStorageInfo = 0;
#endif

static ::String RectangleTexture_obj_sMemberFields[] = {
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("__setSamplerState","\x8b","\xe7","\xcf","\x5d"),
	::String(null()) };

static void RectangleTexture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RectangleTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RectangleTexture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RectangleTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class RectangleTexture_obj::__mClass;

void RectangleTexture_obj::__register()
{
	hx::Object *dummy = new RectangleTexture_obj;
	RectangleTexture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.RectangleTexture","\xe9","\x93","\xed","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RectangleTexture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RectangleTexture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RectangleTexture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RectangleTexture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RectangleTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RectangleTexture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures