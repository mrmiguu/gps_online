// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_math__Matrix4_Matrix4_Impl_
#include <lime/math/_Matrix4/Matrix4_Impl_.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBlendModeManager
#include <openfl/_internal/renderer/opengl/GLBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLFilterManager
#include <openfl/_internal/renderer/opengl/GLFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLMaskManager
#include <openfl/_internal/renderer/opengl/GLMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLShaderManager
#include <openfl/_internal/renderer/opengl/GLShaderManager.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

void GLRenderer_obj::__construct( ::openfl::display::Stage stage, ::lime::_backend::native::NativeGLRenderContext gl,hx::Null< Bool >  __o_flipped){
Bool flipped = __o_flipped.Default(true);
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","new",0xb6a82d5e,"openfl._internal.renderer.opengl.GLRenderer.new","openfl/_internal/renderer/opengl/GLRenderer.hx",46,0xb2b97130)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(stage,"stage")
            	HX_STACK_ARG(gl,"gl")
            	HX_STACK_ARG(flipped,"flipped")
HXLINE(  48)		super::__construct(stage);
HXLINE(  50)		this->gl = gl;
HXLINE(  51)		this->flipped = flipped;
HXLINE(  53)		this->matrix = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());
HXLINE(  54)		this->values = ::Array_obj< Float >::__new();
HXLINE(  56)		this->renderSession =  ::openfl::_internal::renderer::RenderSession_obj::__new();
HXLINE(  57)		this->renderSession->gl = gl;
HXLINE(  58)		this->renderSession->roundPixels = true;
HXLINE(  59)		this->renderSession->renderer = hx::ObjectPtr<OBJ_>(this);
HXLINE(  60)		this->renderSession->blendModeManager =  ::openfl::_internal::renderer::opengl::GLBlendModeManager_obj::__new(gl);
HXLINE(  61)		this->renderSession->filterManager =  ::openfl::_internal::renderer::opengl::GLFilterManager_obj::__new(hx::ObjectPtr<OBJ_>(this),this->renderSession);
HXLINE(  62)		this->renderSession->shaderManager =  ::openfl::_internal::renderer::opengl::GLShaderManager_obj::__new(gl);
HXLINE(  63)		this->renderSession->maskManager =  ::openfl::_internal::renderer::opengl::GLMaskManager_obj::__new(this->renderSession);
HXLINE(  65)		Bool _hx_tmp = hx::IsNotNull( stage->window );
HXDLIN(  65)		if (_hx_tmp) {
HXLINE(  67)			Bool _hx_tmp1 = hx::IsNull( stage->stage3Ds->get((int)0).StaticCast<  ::openfl::display::Stage3D >()->context3D );
HXDLIN(  67)			if (_hx_tmp1) {
HXLINE(  69)				stage->stage3Ds->get((int)0).StaticCast<  ::openfl::display::Stage3D >()->_hx___createContext(stage,this->renderSession);
            			}
HXLINE(  73)			Float _hx_tmp2 = (stage->window->_hx___width * stage->window->_hx___scale);
HXDLIN(  73)			Int _hx_tmp3 = ::Math_obj::ceil(_hx_tmp2);
HXDLIN(  73)			Float _hx_tmp4 = (stage->window->_hx___height * stage->window->_hx___scale);
HXDLIN(  73)			Int _hx_tmp5 = ::Math_obj::ceil(_hx_tmp4);
HXDLIN(  73)			this->resize(_hx_tmp3,_hx_tmp5);
            		}
            	}

Dynamic GLRenderer_obj::__CreateEmpty() { return new GLRenderer_obj; }

hx::ObjectPtr< GLRenderer_obj > GLRenderer_obj::__new( ::openfl::display::Stage stage, ::lime::_backend::native::NativeGLRenderContext gl,hx::Null< Bool >  __o_flipped)
{
	hx::ObjectPtr< GLRenderer_obj > _hx_result = new GLRenderer_obj();
	_hx_result->__construct(stage,gl,__o_flipped);
	return _hx_result;
}

Dynamic GLRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLRenderer_obj > _hx_result = new GLRenderer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

void GLRenderer_obj::clear(){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","clear",0x823f8a0b,"openfl._internal.renderer.opengl.GLRenderer.clear","openfl/_internal/renderer/opengl/GLRenderer.hx",80,0xb2b97130)
            	HX_STACK_THIS(this)
HXLINE(  82)		Bool _hx_tmp = this->stage->_hx___transparent;
HXDLIN(  82)		if (_hx_tmp) {
HXLINE(  84)			this->gl->clearColor((int)0,(int)0,(int)0,(int)0);
            		}
            		else {
HXLINE(  88)			Float _hx_tmp1 = this->stage->_hx___colorSplit->__get((int)0);
HXDLIN(  88)			Float _hx_tmp2 = this->stage->_hx___colorSplit->__get((int)1);
HXDLIN(  88)			Float _hx_tmp3 = this->stage->_hx___colorSplit->__get((int)2);
HXDLIN(  88)			this->gl->clearColor(_hx_tmp1,_hx_tmp2,_hx_tmp3,(int)1);
            		}
HXLINE(  92)		this->gl->clear(this->gl->COLOR_BUFFER_BIT);
HXLINE(  94)		{
HXLINE(  94)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  94)			HX_VARI(  ::openfl::_Vector::ObjectVector,_g1) = this->stage->stage3Ds;
HXDLIN(  94)			while(true){
HXLINE(  94)				Int _hx_tmp4 = _g1->get_length();
HXDLIN(  94)				if (!((_g < _hx_tmp4))) {
HXLINE(  94)					goto _hx_goto_0;
            				}
HXDLIN(  94)				HX_VARI(  ::openfl::display::Stage3D,stage3D) = _g1->get(_g).StaticCast<  ::openfl::display::Stage3D >();
HXDLIN(  94)				++_g;
HXLINE(  96)				stage3D->_hx___renderGL(this->stage,this->renderSession);
            			}
            			_hx_goto_0:;
            		}
            	}


void GLRenderer_obj::getCacheObject(){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","getCacheObject",0xc4fee56d,"openfl._internal.renderer.opengl.GLRenderer.getCacheObject","openfl/_internal/renderer/opengl/GLRenderer.hx",103,0xb2b97130)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderer_obj,getCacheObject,(void))

::Array< Float > GLRenderer_obj::getMatrix( ::openfl::geom::Matrix transform){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","getMatrix",0x5e6beef5,"openfl._internal.renderer.opengl.GLRenderer.getMatrix","openfl/_internal/renderer/opengl/GLRenderer.hx",115,0xb2b97130)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(transform,"transform")
HXLINE( 117)		HX_VARI(  ::openfl::geom::Matrix,_matrix) = ::openfl::geom::Matrix_obj::_hx___temp;
HXLINE( 118)		_matrix->copyFrom(transform);
HXLINE( 119)		_matrix->concat(this->displayMatrix);
HXLINE( 121)		Bool _hx_tmp = this->renderSession->roundPixels;
HXDLIN( 121)		if (_hx_tmp) {
HXLINE( 123)			_matrix->tx = ::Math_obj::round(_matrix->tx);
HXLINE( 124)			_matrix->ty = ::Math_obj::round(_matrix->ty);
            		}
HXLINE( 128)		::lime::math::_Matrix4::Matrix4_Impl__obj::identity(this->matrix);
HXLINE( 129)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)0,_matrix->a);
HXLINE( 130)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)1,_matrix->b);
HXLINE( 131)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)4,_matrix->c);
HXLINE( 132)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)5,_matrix->d);
HXLINE( 133)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)12,_matrix->tx);
HXLINE( 134)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)13,_matrix->ty);
HXLINE( 135)		 ::lime::utils::ArrayBufferView _hx_tmp1;
HXDLIN( 135)		if (this->flipped) {
HXLINE( 135)			_hx_tmp1 = this->projectionFlipped;
            		}
            		else {
HXLINE( 135)			_hx_tmp1 = this->projection;
            		}
HXDLIN( 135)		::lime::math::_Matrix4::Matrix4_Impl__obj::append(this->matrix,_hx_tmp1);
HXLINE( 137)		{
HXLINE( 137)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 137)			while((_g < (int)16)){
HXLINE( 137)				HX_VARI( Int,i) = _g++;
HXLINE( 139)				Float _hx_tmp2 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(this->matrix,i);
HXDLIN( 139)				this->values[i] = _hx_tmp2;
            			}
            		}
HXLINE( 143)		return this->values;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderer_obj,getMatrix,return )

void GLRenderer_obj::getRenderTarget(Bool framebuffer){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","getRenderTarget",0x5f982efb,"openfl._internal.renderer.opengl.GLRenderer.getRenderTarget","openfl/_internal/renderer/opengl/GLRenderer.hx",150,0xb2b97130)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(framebuffer,"framebuffer")
HXLINE( 150)		if (framebuffer) {
HXLINE( 152)			Bool _hx_tmp = hx::IsNull( this->renderTargetA );
HXDLIN( 152)			if (_hx_tmp) {
HXLINE( 154)				 ::openfl::display3D::textures::RectangleTexture _hx_tmp1 = this->stage->stage3Ds->get((int)0).StaticCast<  ::openfl::display::Stage3D >()->context3D->createRectangleTexture(this->width,this->height,(int)1,true);
HXDLIN( 154)				this->renderTargetA = ::openfl::display::BitmapData_obj::fromTexture(_hx_tmp1);
HXLINE( 156)				Int _hx_tmp2 = this->gl->TEXTURE_2D;
HXDLIN( 156)				 ::lime::graphics::opengl::GLTexture _hx_tmp3 = this->renderTargetA->getTexture(this->gl);
HXDLIN( 156)				this->gl->bindTexture(_hx_tmp2,_hx_tmp3);
HXLINE( 157)				this->gl->texParameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_S,this->gl->CLAMP_TO_EDGE);
HXLINE( 158)				this->gl->texParameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_T,this->gl->CLAMP_TO_EDGE);
            			}
HXLINE( 162)			Bool _hx_tmp4 = hx::IsNull( this->renderTargetB );
HXDLIN( 162)			if (_hx_tmp4) {
HXLINE( 164)				 ::openfl::display3D::textures::RectangleTexture _hx_tmp5 = this->stage->stage3Ds->get((int)0).StaticCast<  ::openfl::display::Stage3D >()->context3D->createRectangleTexture(this->width,this->height,(int)1,true);
HXDLIN( 164)				this->renderTargetB = ::openfl::display::BitmapData_obj::fromTexture(_hx_tmp5);
HXLINE( 166)				Int _hx_tmp6 = this->gl->TEXTURE_2D;
HXDLIN( 166)				 ::lime::graphics::opengl::GLTexture _hx_tmp7 = this->renderTargetB->getTexture(this->gl);
HXDLIN( 166)				this->gl->bindTexture(_hx_tmp6,_hx_tmp7);
HXLINE( 167)				this->gl->texParameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_S,this->gl->CLAMP_TO_EDGE);
HXLINE( 168)				this->gl->texParameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_T,this->gl->CLAMP_TO_EDGE);
            			}
HXLINE( 172)			if (hx::IsEq( this->currentRenderTarget,this->renderTargetA )) {
HXLINE( 174)				this->currentRenderTarget = this->renderTargetB;
            			}
            			else {
HXLINE( 178)				this->currentRenderTarget = this->renderTargetA;
            			}
HXLINE( 182)			Int _hx_tmp8 = this->gl->FRAMEBUFFER;
HXDLIN( 182)			 ::lime::graphics::opengl::GLFramebuffer _hx_tmp9 = this->currentRenderTarget->_hx___getFramebuffer(this->gl);
HXDLIN( 182)			this->gl->bindFramebuffer(_hx_tmp8,_hx_tmp9);
HXLINE( 183)			this->gl->viewport((int)0,(int)0,this->width,this->height);
HXLINE( 184)			this->gl->clearColor((int)0,(int)0,(int)0,(int)0);
HXLINE( 185)			this->gl->clear(this->gl->COLOR_BUFFER_BIT);
HXLINE( 187)			this->flipped = false;
            		}
            		else {
HXLINE( 191)			this->gl->bindFramebuffer(this->gl->FRAMEBUFFER,null());
HXLINE( 193)			this->flipped = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderer_obj,getRenderTarget,(void))

void GLRenderer_obj::render(){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","render",0x72dac118,"openfl._internal.renderer.opengl.GLRenderer.render","openfl/_internal/renderer/opengl/GLRenderer.hx",200,0xb2b97130)
            	HX_STACK_THIS(this)
HXLINE( 202)		this->gl->viewport(this->offsetX,this->offsetY,this->displayWidth,this->displayHeight);
HXLINE( 204)		this->renderSession->allowSmoothing = hx::IsNotEq( this->stage->quality,(int)2 );
HXLINE( 205)		Bool _hx_tmp;
HXDLIN( 205)		if ((this->displayMatrix->a == (int)1)) {
HXLINE( 205)			_hx_tmp = (this->displayMatrix->d != (int)1);
            		}
            		else {
HXLINE( 205)			_hx_tmp = true;
            		}
HXDLIN( 205)		this->renderSession->upscaled = _hx_tmp;
HXLINE( 207)		this->stage->_hx___renderGL(this->renderSession);
HXLINE( 209)		Bool _hx_tmp1;
HXDLIN( 209)		if ((this->offsetX <= (int)0)) {
HXLINE( 209)			_hx_tmp1 = (this->offsetY > (int)0);
            		}
            		else {
HXLINE( 209)			_hx_tmp1 = true;
            		}
HXDLIN( 209)		if (_hx_tmp1) {
HXLINE( 211)			this->gl->clearColor((int)0,(int)0,(int)0,(int)1);
HXLINE( 212)			this->gl->enable(this->gl->SCISSOR_TEST);
HXLINE( 214)			Bool _hx_tmp2 = (this->offsetX > (int)0);
HXDLIN( 214)			if (_hx_tmp2) {
HXLINE( 216)				this->gl->scissor((int)0,(int)0,this->offsetX,this->height);
HXLINE( 217)				this->gl->clear(this->gl->COLOR_BUFFER_BIT);
HXLINE( 219)				Int _hx_tmp3 = (this->offsetX + this->displayWidth);
HXDLIN( 219)				this->gl->scissor(_hx_tmp3,(int)0,this->width,this->height);
HXLINE( 220)				this->gl->clear(this->gl->COLOR_BUFFER_BIT);
            			}
HXLINE( 224)			Bool _hx_tmp4 = (this->offsetY > (int)0);
HXDLIN( 224)			if (_hx_tmp4) {
HXLINE( 226)				this->gl->scissor((int)0,(int)0,this->width,this->offsetY);
HXLINE( 227)				this->gl->clear(this->gl->COLOR_BUFFER_BIT);
HXLINE( 229)				Int _hx_tmp5 = (this->offsetY + this->displayHeight);
HXDLIN( 229)				this->gl->scissor((int)0,_hx_tmp5,this->width,this->height);
HXLINE( 230)				this->gl->clear(this->gl->COLOR_BUFFER_BIT);
            			}
HXLINE( 234)			this->gl->disable(this->gl->SCISSOR_TEST);
            		}
            	}


void GLRenderer_obj::resize(Int width,Int height){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","resize",0x762cafb6,"openfl._internal.renderer.opengl.GLRenderer.resize","openfl/_internal/renderer/opengl/GLRenderer.hx",241,0xb2b97130)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
HXLINE( 243)		this->super::resize(width,height);
HXLINE( 255)		Bool _hx_tmp;
HXDLIN( 255)		Bool _hx_tmp1 = hx::IsNotNull( this->renderTargetA );
HXDLIN( 255)		if (_hx_tmp1) {
HXLINE( 255)			if ((this->renderTargetA->width == width)) {
HXLINE( 255)				_hx_tmp = (this->renderTargetA->height != height);
            			}
            			else {
HXLINE( 255)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 255)			_hx_tmp = false;
            		}
HXDLIN( 255)		if (_hx_tmp) {
HXLINE( 257)			 ::openfl::display3D::textures::RectangleTexture _hx_tmp2 = this->stage->stage3Ds->get((int)0).StaticCast<  ::openfl::display::Stage3D >()->context3D->createRectangleTexture(width,height,(int)1,true);
HXDLIN( 257)			this->renderTargetA = ::openfl::display::BitmapData_obj::fromTexture(_hx_tmp2);
HXLINE( 259)			Int _hx_tmp3 = this->gl->TEXTURE_2D;
HXDLIN( 259)			 ::lime::graphics::opengl::GLTexture _hx_tmp4 = this->renderTargetA->getTexture(this->gl);
HXDLIN( 259)			this->gl->bindTexture(_hx_tmp3,_hx_tmp4);
HXLINE( 260)			this->gl->texParameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_S,this->gl->CLAMP_TO_EDGE);
HXLINE( 261)			this->gl->texParameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_T,this->gl->CLAMP_TO_EDGE);
            		}
HXLINE( 265)		Bool _hx_tmp5;
HXDLIN( 265)		Bool _hx_tmp6 = hx::IsNotNull( this->renderTargetB );
HXDLIN( 265)		if (_hx_tmp6) {
HXLINE( 265)			if ((this->renderTargetB->width == width)) {
HXLINE( 265)				_hx_tmp5 = (this->renderTargetB->height != height);
            			}
            			else {
HXLINE( 265)				_hx_tmp5 = true;
            			}
            		}
            		else {
HXLINE( 265)			_hx_tmp5 = false;
            		}
HXDLIN( 265)		if (_hx_tmp5) {
HXLINE( 267)			 ::openfl::display3D::textures::RectangleTexture _hx_tmp7 = this->stage->stage3Ds->get((int)0).StaticCast<  ::openfl::display::Stage3D >()->context3D->createRectangleTexture(width,height,(int)1,true);
HXDLIN( 267)			this->renderTargetB = ::openfl::display::BitmapData_obj::fromTexture(_hx_tmp7);
HXLINE( 269)			Int _hx_tmp8 = this->gl->TEXTURE_2D;
HXDLIN( 269)			 ::lime::graphics::opengl::GLTexture _hx_tmp9 = this->renderTargetB->getTexture(this->gl);
HXDLIN( 269)			this->gl->bindTexture(_hx_tmp8,_hx_tmp9);
HXLINE( 270)			this->gl->texParameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_S,this->gl->CLAMP_TO_EDGE);
HXLINE( 271)			this->gl->texParameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_T,this->gl->CLAMP_TO_EDGE);
            		}
HXLINE( 275)		this->displayMatrix = this->stage->_hx___displayMatrix;
HXLINE( 277)		HX_VARI(  ::openfl::geom::Matrix,_this) = this->displayMatrix;
HXDLIN( 277)		Float _hx_tmp10 = ((((int)0 * _this->a) + ((int)0 * _this->c)) + _this->tx);
HXDLIN( 277)		this->offsetX = ::Math_obj::round(_hx_tmp10);
HXLINE( 278)		HX_VARI_NAME(  ::openfl::geom::Matrix,_this1,"_this") = this->displayMatrix;
HXDLIN( 278)		Float _hx_tmp11 = ((((int)0 * _this1->b) + ((int)0 * _this1->d)) + _this1->ty);
HXDLIN( 278)		this->offsetY = ::Math_obj::round(_hx_tmp11);
HXLINE( 279)		HX_VARI_NAME(  ::openfl::geom::Matrix,_this2,"_this") = this->displayMatrix;
HXDLIN( 279)		Float _hx_tmp12 = ((((this->stage->stageWidth * _this2->a) + ((int)0 * _this2->c)) + _this2->tx) - this->offsetX);
HXDLIN( 279)		this->displayWidth = ::Math_obj::round(_hx_tmp12);
HXLINE( 280)		HX_VARI_NAME(  ::openfl::geom::Matrix,_this3,"_this") = this->displayMatrix;
HXDLIN( 280)		Float _hx_tmp13 = (((((int)0 * _this3->b) + (this->stage->stageHeight * _this3->d)) + _this3->ty) - this->offsetY);
HXDLIN( 280)		this->displayHeight = ::Math_obj::round(_hx_tmp13);
HXLINE( 282)		Int _hx_tmp14 = this->offsetX;
HXDLIN( 282)		Int _hx_tmp15 = (this->displayWidth + this->offsetX);
HXDLIN( 282)		Int _hx_tmp16 = this->offsetY;
HXDLIN( 282)		Int _hx_tmp17 = (this->displayHeight + this->offsetY);
HXDLIN( 282)		this->projection = ::lime::math::_Matrix4::Matrix4_Impl__obj::createOrtho(_hx_tmp14,_hx_tmp15,_hx_tmp16,_hx_tmp17,(int)-1000,(int)1000);
HXLINE( 283)		Int _hx_tmp18 = this->offsetX;
HXDLIN( 283)		Int _hx_tmp19 = (this->displayWidth + this->offsetX);
HXDLIN( 283)		Int _hx_tmp20 = (this->displayHeight + this->offsetY);
HXDLIN( 283)		this->projectionFlipped = ::lime::math::_Matrix4::Matrix4_Impl__obj::createOrtho(_hx_tmp18,_hx_tmp19,_hx_tmp20,this->offsetY,(int)-1000,(int)1000);
            	}



GLRenderer_obj::GLRenderer_obj()
{
}

void GLRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLRenderer);
	HX_MARK_MEMBER_NAME(projection,"projection");
	HX_MARK_MEMBER_NAME(projectionFlipped,"projectionFlipped");
	HX_MARK_MEMBER_NAME(currentRenderTarget,"currentRenderTarget");
	HX_MARK_MEMBER_NAME(displayHeight,"displayHeight");
	HX_MARK_MEMBER_NAME(displayMatrix,"displayMatrix");
	HX_MARK_MEMBER_NAME(displayWidth,"displayWidth");
	HX_MARK_MEMBER_NAME(flipped,"flipped");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(renderTargetA,"renderTargetA");
	HX_MARK_MEMBER_NAME(renderTargetB,"renderTargetB");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(values,"values");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(projection,"projection");
	HX_VISIT_MEMBER_NAME(projectionFlipped,"projectionFlipped");
	HX_VISIT_MEMBER_NAME(currentRenderTarget,"currentRenderTarget");
	HX_VISIT_MEMBER_NAME(displayHeight,"displayHeight");
	HX_VISIT_MEMBER_NAME(displayMatrix,"displayMatrix");
	HX_VISIT_MEMBER_NAME(displayWidth,"displayWidth");
	HX_VISIT_MEMBER_NAME(flipped,"flipped");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(renderTargetA,"renderTargetA");
	HX_VISIT_MEMBER_NAME(renderTargetB,"renderTargetB");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(values,"values");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GLRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return hx::Val( gl); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return hx::Val( matrix); }
		if (HX_FIELD_EQ(inName,"values") ) { return hx::Val( values); }
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn()); }
		if (HX_FIELD_EQ(inName,"resize") ) { return hx::Val( resize_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { return hx::Val( flipped); }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return hx::Val( offsetX); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return hx::Val( offsetY); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getMatrix") ) { return hx::Val( getMatrix_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { return hx::Val( projection); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayWidth") ) { return hx::Val( displayWidth); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayHeight") ) { return hx::Val( displayHeight); }
		if (HX_FIELD_EQ(inName,"displayMatrix") ) { return hx::Val( displayMatrix); }
		if (HX_FIELD_EQ(inName,"renderTargetA") ) { return hx::Val( renderTargetA); }
		if (HX_FIELD_EQ(inName,"renderTargetB") ) { return hx::Val( renderTargetB); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCacheObject") ) { return hx::Val( getCacheObject_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getRenderTarget") ) { return hx::Val( getRenderTarget_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"projectionFlipped") ) { return hx::Val( projectionFlipped); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentRenderTarget") ) { return hx::Val( currentRenderTarget); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GLRenderer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast<  ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { flipped=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { projection=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayWidth") ) { displayWidth=inValue.Cast< Int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayHeight") ) { displayHeight=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayMatrix") ) { displayMatrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderTargetA") ) { renderTargetA=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderTargetB") ) { renderTargetB=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"projectionFlipped") ) { projectionFlipped=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentRenderTarget") ) { currentRenderTarget=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"));
	outFields->push(HX_HCSTRING("projectionFlipped","\x73","\xcb","\x7c","\xbf"));
	outFields->push(HX_HCSTRING("currentRenderTarget","\x20","\xd1","\x0e","\x27"));
	outFields->push(HX_HCSTRING("displayHeight","\xc9","\xc3","\xae","\xc3"));
	outFields->push(HX_HCSTRING("displayMatrix","\x23","\xf2","\x2a","\x7d"));
	outFields->push(HX_HCSTRING("displayWidth","\x64","\x8c","\xbb","\xd6"));
	outFields->push(HX_HCSTRING("flipped","\x42","\x6c","\x88","\x7f"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("renderTargetA","\x1a","\x67","\x55","\x84"));
	outFields->push(HX_HCSTRING("renderTargetB","\x1b","\x67","\x55","\x84"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GLRenderer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLRenderer_obj,projection),HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLRenderer_obj,projectionFlipped),HX_HCSTRING("projectionFlipped","\x73","\xcb","\x7c","\xbf")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(GLRenderer_obj,currentRenderTarget),HX_HCSTRING("currentRenderTarget","\x20","\xd1","\x0e","\x27")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,displayHeight),HX_HCSTRING("displayHeight","\xc9","\xc3","\xae","\xc3")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GLRenderer_obj,displayMatrix),HX_HCSTRING("displayMatrix","\x23","\xf2","\x2a","\x7d")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,displayWidth),HX_HCSTRING("displayWidth","\x64","\x8c","\xbb","\xd6")},
	{hx::fsBool,(int)offsetof(GLRenderer_obj,flipped),HX_HCSTRING("flipped","\x42","\x6c","\x88","\x7f")},
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(GLRenderer_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLRenderer_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(GLRenderer_obj,renderTargetA),HX_HCSTRING("renderTargetA","\x1a","\x67","\x55","\x84")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(GLRenderer_obj,renderTargetB),HX_HCSTRING("renderTargetB","\x1b","\x67","\x55","\x84")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GLRenderer_obj,values),HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GLRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String GLRenderer_obj_sMemberFields[] = {
	HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"),
	HX_HCSTRING("projectionFlipped","\x73","\xcb","\x7c","\xbf"),
	HX_HCSTRING("currentRenderTarget","\x20","\xd1","\x0e","\x27"),
	HX_HCSTRING("displayHeight","\xc9","\xc3","\xae","\xc3"),
	HX_HCSTRING("displayMatrix","\x23","\xf2","\x2a","\x7d"),
	HX_HCSTRING("displayWidth","\x64","\x8c","\xbb","\xd6"),
	HX_HCSTRING("flipped","\x42","\x6c","\x88","\x7f"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("renderTargetA","\x1a","\x67","\x55","\x84"),
	HX_HCSTRING("renderTargetB","\x1b","\x67","\x55","\x84"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("getCacheObject","\xab","\xfd","\x7e","\xbb"),
	HX_HCSTRING("getMatrix","\x77","\xbf","\x1e","\x38"),
	HX_HCSTRING("getRenderTarget","\xfd","\x4c","\x2d","\x19"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	::String(null()) };

static void GLRenderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLRenderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class GLRenderer_obj::__mClass;

void GLRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLRenderer","\x6c","\xe6","\x3a","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLRenderer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLRenderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
