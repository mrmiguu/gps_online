// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLShader
#include <lime/graphics/opengl/GLShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0a62cc2bc659c459_16_new,"lime.graphics.opengl.GLProgram","new",0x2d826a7c,"lime.graphics.opengl.GLProgram.new","lime/graphics/opengl/GLProgram.hx",16,0x48d7ea15)
HX_LOCAL_STACK_FRAME(_hx_pos_0a62cc2bc659c459_26_attach,"lime.graphics.opengl.GLProgram","attach",0x80ff9b29,"lime.graphics.opengl.GLProgram.attach","lime/graphics/opengl/GLProgram.hx",26,0x48d7ea15)
HX_LOCAL_STACK_FRAME(_hx_pos_0a62cc2bc659c459_33_getShaders,"lime.graphics.opengl.GLProgram","getShaders",0x3da5291c,"lime.graphics.opengl.GLProgram.getShaders","lime/graphics/opengl/GLProgram.hx",33,0x48d7ea15)
HX_LOCAL_STACK_FRAME(_hx_pos_0a62cc2bc659c459_40_getType,"lime.graphics.opengl.GLProgram","getType",0x50477a8c,"lime.graphics.opengl.GLProgram.getType","lime/graphics/opengl/GLProgram.hx",40,0x48d7ea15)
namespace lime{
namespace graphics{
namespace opengl{

void GLProgram_obj::__construct(int version, ::Dynamic id){
            	HX_STACKFRAME(&_hx_pos_0a62cc2bc659c459_16_new)
HXLINE(  18)		super::__construct(version,id);
HXLINE(  19)		this->shaders = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic GLProgram_obj::__CreateEmpty() { return new GLProgram_obj; }

void *GLProgram_obj::_hx_vtable = 0;

Dynamic GLProgram_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLProgram_obj > _hx_result = new GLProgram_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GLProgram_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x06087e70) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x06087e70;
	} else {
		return inClassId==(int)0x6ce04d1b;
	}
}

void GLProgram_obj::attach( ::lime::graphics::opengl::GLShader shader){
            	HX_STACKFRAME(&_hx_pos_0a62cc2bc659c459_26_attach)
HXLINE(  26)		this->shaders->push(shader);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GLProgram_obj,attach,(void))

::Array< ::Dynamic> GLProgram_obj::getShaders(){
            	HX_STACKFRAME(&_hx_pos_0a62cc2bc659c459_33_getShaders)
HXLINE(  33)		return this->shaders->copy();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GLProgram_obj,getShaders,return )

::String GLProgram_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_0a62cc2bc659c459_40_getType)
HXLINE(  40)		return HX_("Program",64,72,4a,c1);
            	}



hx::ObjectPtr< GLProgram_obj > GLProgram_obj::__new(int version, ::Dynamic id) {
	hx::ObjectPtr< GLProgram_obj > __this = new GLProgram_obj();
	__this->__construct(version,id);
	return __this;
}

hx::ObjectPtr< GLProgram_obj > GLProgram_obj::__alloc(hx::Ctx *_hx_ctx,int version, ::Dynamic id) {
	GLProgram_obj *__this = (GLProgram_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLProgram_obj), true, "lime.graphics.opengl.GLProgram"));
	*(void **)__this = GLProgram_obj::_hx_vtable;
	__this->__construct(version,id);
	return __this;
}

GLProgram_obj::GLProgram_obj()
{
}

void GLProgram_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLProgram);
	HX_MARK_MEMBER_NAME(shaders,"shaders");
	 ::lime::graphics::opengl::GLObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLProgram_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shaders,"shaders");
	 ::lime::graphics::opengl::GLObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GLProgram_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"attach") ) { return hx::Val( attach_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { return hx::Val( shaders); }
		if (HX_FIELD_EQ(inName,"getType") ) { return hx::Val( getType_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getShaders") ) { return hx::Val( getShaders_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GLProgram_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"shaders") ) { shaders=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLProgram_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GLProgram_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GLProgram_obj,shaders),HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GLProgram_obj_sStaticStorageInfo = 0;
#endif

static ::String GLProgram_obj_sMemberFields[] = {
	HX_HCSTRING("shaders","\xae","\x81","\x86","\x5f"),
	HX_HCSTRING("attach","\xc5","\xfb","\x0f","\xe0"),
	HX_HCSTRING("getShaders","\xb8","\x07","\xe8","\xae"),
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	::String(null()) };

static void GLProgram_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLProgram_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLProgram_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLProgram_obj::__mClass,"__mClass");
};

#endif

hx::Class GLProgram_obj::__mClass;

void GLProgram_obj::__register()
{
	hx::Object *dummy = new GLProgram_obj;
	GLProgram_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.GLProgram","\x8a","\xbc","\x6c","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLProgram_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLProgram_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLProgram_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLProgram_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLProgram_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLProgram_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl