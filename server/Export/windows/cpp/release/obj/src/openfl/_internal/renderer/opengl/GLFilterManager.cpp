// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLFilterManager
#include <openfl/_internal/renderer/opengl/GLFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_40ef2765f573c5ea_35_new,"openfl._internal.renderer.opengl.GLFilterManager","new",0xa57802be,"openfl._internal.renderer.opengl.GLFilterManager.new","openfl/_internal/renderer/opengl/GLFilterManager.hx",35,0xef502054)
HX_LOCAL_STACK_FRAME(_hx_pos_40ef2765f573c5ea_48_pushObject,"openfl._internal.renderer.opengl.GLFilterManager","pushObject",0x4b4ad99b,"openfl._internal.renderer.opengl.GLFilterManager.pushObject","openfl/_internal/renderer/opengl/GLFilterManager.hx",48,0xef502054)
HX_LOCAL_STACK_FRAME(_hx_pos_40ef2765f573c5ea_75_popObject,"openfl._internal.renderer.opengl.GLFilterManager","popObject",0x1feca00e,"openfl._internal.renderer.opengl.GLFilterManager.popObject","openfl/_internal/renderer/opengl/GLFilterManager.hx",75,0xef502054)
HX_LOCAL_STACK_FRAME(_hx_pos_40ef2765f573c5ea_147_renderPass,"openfl._internal.renderer.opengl.GLFilterManager","renderPass",0xc987d4a9,"openfl._internal.renderer.opengl.GLFilterManager.renderPass","openfl/_internal/renderer/opengl/GLFilterManager.hx",147,0xef502054)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

void GLFilterManager_obj::__construct( ::openfl::_internal::renderer::opengl::GLRenderer renderer, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_GC_STACKFRAME(&_hx_pos_40ef2765f573c5ea_35_new)
HXLINE(  37)		super::__construct(renderSession);
HXLINE(  39)		this->renderer = renderer;
HXLINE(  40)		this->gl = renderSession->gl;
HXLINE(  42)		this->filterDepth = (int)0;
HXLINE(  43)		this->matrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}

Dynamic GLFilterManager_obj::__CreateEmpty() { return new GLFilterManager_obj; }

void *GLFilterManager_obj::_hx_vtable = 0;

Dynamic GLFilterManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLFilterManager_obj > _hx_result = new GLFilterManager_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GLFilterManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x516de032) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x516de032;
	} else {
		return inClassId==(int)0x54d76a68;
	}
}

 ::openfl::display::Shader GLFilterManager_obj::pushObject( ::openfl::display::DisplayObject object){
            	HX_STACKFRAME(&_hx_pos_40ef2765f573c5ea_48_pushObject)
HXLINE(  52)		bool _hx_tmp;
HXDLIN(  52)		if (hx::IsNotNull( object->_hx___filters )) {
HXLINE(  52)			_hx_tmp = (object->_hx___filters->length > (int)0);
            		}
            		else {
HXLINE(  52)			_hx_tmp = false;
            		}
HXDLIN(  52)		if (_hx_tmp) {
HXLINE(  54)			bool _hx_tmp1;
HXDLIN(  54)			if ((object->_hx___filters->length == (int)1)) {
HXLINE(  54)				_hx_tmp1 = (object->_hx___filters->__get((int)0).StaticCast<  ::openfl::filters::BitmapFilter >()->_hx___numPasses == (int)0);
            			}
            			else {
HXLINE(  54)				_hx_tmp1 = false;
            			}
HXDLIN(  54)			if (_hx_tmp1) {
HXLINE(  56)				return object->_hx___filters->__get((int)0).StaticCast<  ::openfl::filters::BitmapFilter >()->_hx___initShader(this->renderSession,(int)0);
            			}
            			else {
HXLINE(  60)				this->renderer->getRenderTarget(true);
            			}
HXLINE(  64)			this->filterDepth++;
            		}
HXLINE(  68)		return this->renderSession->shaderManager->defaultShader;
            	}


void GLFilterManager_obj::popObject( ::openfl::display::DisplayObject object){
            	HX_STACKFRAME(&_hx_pos_40ef2765f573c5ea_75_popObject)
HXLINE(  75)		bool _hx_tmp;
HXDLIN(  75)		if (hx::IsNotNull( object->_hx___filters )) {
HXLINE(  75)			_hx_tmp = (object->_hx___filters->length > (int)0);
            		}
            		else {
HXLINE(  75)			_hx_tmp = false;
            		}
HXDLIN(  75)		if (_hx_tmp) {
HXLINE(  77)			int numPasses = (int)0;
HXLINE(  79)			bool _hx_tmp1;
HXDLIN(  79)			if ((object->_hx___filters->length <= (int)1)) {
HXLINE(  79)				_hx_tmp1 = (object->_hx___filters->__get((int)0).StaticCast<  ::openfl::filters::BitmapFilter >()->_hx___numPasses > (int)0);
            			}
            			else {
HXLINE(  79)				_hx_tmp1 = true;
            			}
HXDLIN(  79)			if (_hx_tmp1) {
HXLINE(  81)				numPasses = object->_hx___filters->length;
HXLINE(  83)				{
HXLINE(  83)					int _g = (int)0;
HXDLIN(  83)					::Array< ::Dynamic> _g1 = object->_hx___filters;
HXDLIN(  83)					while((_g < _g1->length)){
HXLINE(  83)						 ::openfl::filters::BitmapFilter filter = _g1->__get(_g).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN(  83)						_g = (_g + (int)1);
HXLINE(  85)						int numPasses1;
HXDLIN(  85)						if ((filter->_hx___numPasses > (int)0)) {
HXLINE(  85)							numPasses1 = (filter->_hx___numPasses - (int)1);
            						}
            						else {
HXLINE(  85)							numPasses1 = (int)0;
            						}
HXDLIN(  85)						numPasses = (numPasses + numPasses1);
            					}
            				}
            			}
HXLINE(  91)			if ((numPasses > (int)0)) {
HXLINE( 102)				 ::openfl::display::BitmapData currentTarget;
HXDLIN( 102)				 ::openfl::display::Shader shader;
HXLINE( 104)				{
HXLINE( 104)					int _g2 = (int)0;
HXDLIN( 104)					::Array< ::Dynamic> _g11 = object->_hx___filters;
HXDLIN( 104)					while((_g2 < _g11->length)){
HXLINE( 104)						 ::openfl::filters::BitmapFilter filter1 = _g11->__get(_g2).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN( 104)						_g2 = (_g2 + (int)1);
HXLINE( 106)						if ((filter1->_hx___numPasses > (int)0)) {
HXLINE( 108)							int _g3 = (int)0;
HXDLIN( 108)							int _g21 = filter1->_hx___numPasses;
HXDLIN( 108)							while((_g3 < _g21)){
HXLINE( 108)								_g3 = (_g3 + (int)1);
HXDLIN( 108)								int i = (_g3 - (int)1);
HXLINE( 110)								currentTarget = this->renderer->currentRenderTarget;
HXLINE( 111)								this->renderer->getRenderTarget(true);
HXLINE( 112)								shader = filter1->_hx___initShader(this->renderSession,i);
HXLINE( 114)								this->renderPass(currentTarget,shader);
            							}
            						}
            						else {
HXLINE( 120)							currentTarget = this->renderer->currentRenderTarget;
HXLINE( 121)							this->renderer->getRenderTarget(true);
HXLINE( 122)							shader = filter1->_hx___initShader(this->renderSession,(int)0);
HXLINE( 124)							this->renderPass(currentTarget,shader);
            						}
HXLINE( 129)						this->filterDepth--;
HXLINE( 130)						 ::openfl::_internal::renderer::opengl::GLRenderer _hx_tmp2 = this->renderer;
HXDLIN( 130)						_hx_tmp2->getRenderTarget((this->filterDepth > (int)0));
HXLINE( 132)						this->renderPass(this->renderer->currentRenderTarget,this->renderSession->shaderManager->defaultShader);
            					}
            				}
            			}
            			else {
HXLINE( 138)				this->filterDepth--;
            			}
            		}
            	}


void GLFilterManager_obj::renderPass( ::openfl::display::BitmapData target, ::openfl::display::Shader shader){
            	HX_STACKFRAME(&_hx_pos_40ef2765f573c5ea_147_renderPass)
HXLINE( 149)		shader->get_data()->uImage0->input = target;
HXLINE( 150)		bool _hx_tmp;
HXDLIN( 150)		if (this->renderSession->allowSmoothing) {
HXLINE( 150)			_hx_tmp = this->renderSession->upscaled;
            		}
            		else {
HXLINE( 150)			_hx_tmp = false;
            		}
HXDLIN( 150)		shader->get_data()->uImage0->smoothing = _hx_tmp;
HXLINE( 151)		shader->get_data()->uMatrix->value = this->renderer->getMatrix(this->matrix);
HXLINE( 153)		this->renderSession->shaderManager->setShader(shader);
HXLINE( 155)		 ::lime::_backend::native::NativeGLRenderContext _hx_tmp1 = this->gl;
HXDLIN( 155)		int _hx_tmp2 = this->gl->ARRAY_BUFFER;
HXDLIN( 155)		_hx_tmp1->bindBuffer(_hx_tmp2,target->getBuffer(this->gl,(int)1));
HXLINE( 156)		 ::lime::_backend::native::NativeGLRenderContext _hx_tmp3 = this->gl;
HXDLIN( 156)		_hx_tmp3->vertexAttribPointer(shader->get_data()->aPosition->index,(int)3,this->gl->FLOAT,false,(int)24,(int)0);
HXLINE( 157)		 ::lime::_backend::native::NativeGLRenderContext _hx_tmp4 = this->gl;
HXDLIN( 157)		_hx_tmp4->vertexAttribPointer(shader->get_data()->aTexCoord->index,(int)2,this->gl->FLOAT,false,(int)24,(int)12);
HXLINE( 158)		 ::lime::_backend::native::NativeGLRenderContext _hx_tmp5 = this->gl;
HXDLIN( 158)		_hx_tmp5->vertexAttribPointer(shader->get_data()->aAlpha->index,(int)1,this->gl->FLOAT,false,(int)24,(int)20);
HXLINE( 160)		this->gl->drawArrays(this->gl->TRIANGLE_STRIP,(int)0,(int)4);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GLFilterManager_obj,renderPass,(void))


hx::ObjectPtr< GLFilterManager_obj > GLFilterManager_obj::__new( ::openfl::_internal::renderer::opengl::GLRenderer renderer, ::openfl::_internal::renderer::RenderSession renderSession) {
	hx::ObjectPtr< GLFilterManager_obj > __this = new GLFilterManager_obj();
	__this->__construct(renderer,renderSession);
	return __this;
}

hx::ObjectPtr< GLFilterManager_obj > GLFilterManager_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::_internal::renderer::opengl::GLRenderer renderer, ::openfl::_internal::renderer::RenderSession renderSession) {
	GLFilterManager_obj *__this = (GLFilterManager_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLFilterManager_obj), true, "openfl._internal.renderer.opengl.GLFilterManager"));
	*(void **)__this = GLFilterManager_obj::_hx_vtable;
	__this->__construct(renderer,renderSession);
	return __this;
}

GLFilterManager_obj::GLFilterManager_obj()
{
}

void GLFilterManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLFilterManager);
	HX_MARK_MEMBER_NAME(filterDepth,"filterDepth");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	 ::openfl::_internal::renderer::AbstractFilterManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLFilterManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(filterDepth,"filterDepth");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	 ::openfl::_internal::renderer::AbstractFilterManager_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GLFilterManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return hx::Val( gl); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return hx::Val( matrix); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return hx::Val( renderer); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"popObject") ) { return hx::Val( popObject_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pushObject") ) { return hx::Val( pushObject_dyn()); }
		if (HX_FIELD_EQ(inName,"renderPass") ) { return hx::Val( renderPass_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterDepth") ) { return hx::Val( filterDepth); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GLFilterManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast<  ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast<  ::openfl::_internal::renderer::opengl::GLRenderer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterDepth") ) { filterDepth=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLFilterManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("filterDepth","\x2b","\x46","\xdc","\x86"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GLFilterManager_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GLFilterManager_obj,filterDepth),HX_HCSTRING("filterDepth","\x2b","\x46","\xdc","\x86")},
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(GLFilterManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GLFilterManager_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::GLRenderer*/ ,(int)offsetof(GLFilterManager_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GLFilterManager_obj_sStaticStorageInfo = 0;
#endif

static ::String GLFilterManager_obj_sMemberFields[] = {
	HX_HCSTRING("filterDepth","\x2b","\x46","\xdc","\x86"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("pushObject","\x39","\xe4","\x1e","\x69"),
	HX_HCSTRING("popObject","\x30","\x53","\xb5","\x91"),
	HX_HCSTRING("renderPass","\x47","\xdf","\x5b","\xe7"),
	::String(null()) };

static void GLFilterManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLFilterManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLFilterManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLFilterManager_obj::__mClass,"__mClass");
};

#endif

hx::Class GLFilterManager_obj::__mClass;

void GLFilterManager_obj::__register()
{
	hx::Object *dummy = new GLFilterManager_obj;
	GLFilterManager_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLFilterManager","\xcc","\x8b","\x5c","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLFilterManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLFilterManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLFilterManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLFilterManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLFilterManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLFilterManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl