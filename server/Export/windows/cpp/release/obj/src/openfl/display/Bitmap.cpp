// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
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
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

namespace openfl{
namespace display{

void Bitmap_obj::__construct( ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< Bool >  __o_smoothing){
Bool smoothing = __o_smoothing.Default(false);
            	HX_STACK_FRAME("openfl.display.Bitmap","new",0x8bc0314b,"openfl.display.Bitmap.new","openfl/display/Bitmap.hx",40,0x461b2743)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bitmapData,"bitmapData")
            	HX_STACK_ARG(pixelSnapping,"pixelSnapping")
            	HX_STACK_ARG(smoothing,"smoothing")
HXLINE(  42)		super::__construct();
HXLINE(  44)		this->set_bitmapData(bitmapData);
HXLINE(  45)		this->pixelSnapping = pixelSnapping;
HXLINE(  46)		this->smoothing = smoothing;
HXLINE(  48)		Bool _hx_tmp = hx::IsNull( pixelSnapping );
HXDLIN(  48)		if (_hx_tmp) {
HXLINE(  50)			this->pixelSnapping = (int)1;
            		}
            	}

Dynamic Bitmap_obj::__CreateEmpty() { return new Bitmap_obj; }

hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new( ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< Bool >  __o_smoothing)
{
	hx::ObjectPtr< Bitmap_obj > _hx_result = new Bitmap_obj();
	_hx_result->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return _hx_result;
}

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Bitmap_obj > _hx_result = new Bitmap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

void Bitmap_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACK_FRAME("openfl.display.Bitmap","__getBounds",0x13081c76,"openfl.display.Bitmap.__getBounds","openfl/display/Bitmap.hx",59,0x461b2743)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
            	HX_STACK_ARG(matrix,"matrix")
HXLINE(  59)		Bool _hx_tmp = hx::IsNotNull( this->bitmapData );
HXDLIN(  59)		if (_hx_tmp) {
HXLINE(  61)			HX_VARI(  ::openfl::geom::Rectangle,bounds) = ::openfl::geom::Rectangle_obj::_hx___temp;
HXLINE(  62)			bounds->setTo((int)0,(int)0,this->bitmapData->width,this->bitmapData->height);
HXLINE(  63)			bounds->_hx___transform(bounds,matrix);
HXLINE(  65)			rect->_hx___expand(bounds->x,bounds->y,bounds->width,bounds->height);
            		}
            	}


Bool Bitmap_obj::_hx___hitTest(Float x,Float y,Bool shapeFlag,::Array< ::Dynamic> stack,Bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACK_FRAME("openfl.display.Bitmap","__hitTest",0x80f61450,"openfl.display.Bitmap.__hitTest","openfl/display/Bitmap.hx",72,0x461b2743)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(shapeFlag,"shapeFlag")
            	HX_STACK_ARG(stack,"stack")
            	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
            	HX_STACK_ARG(hitObject,"hitObject")
HXLINE(  74)		Bool _hx_tmp;
HXDLIN(  74)		Bool _hx_tmp1;
HXDLIN(  74)		Bool _hx_tmp2 = !(!(hitObject->get_visible()));
HXDLIN(  74)		if (_hx_tmp2) {
HXLINE(  74)			_hx_tmp1 = this->_hx___isMask;
            		}
            		else {
HXLINE(  74)			_hx_tmp1 = true;
            		}
HXDLIN(  74)		if (!(_hx_tmp1)) {
HXLINE(  74)			_hx_tmp = hx::IsNull( this->bitmapData );
            		}
            		else {
HXLINE(  74)			_hx_tmp = true;
            		}
HXDLIN(  74)		if (_hx_tmp) {
HXLINE(  74)			return false;
            		}
HXLINE(  75)		Bool _hx_tmp3;
HXDLIN(  75)		 ::openfl::display::DisplayObject _hx_tmp4 = this->get_mask();
HXDLIN(  75)		Bool _hx_tmp5 = hx::IsNotNull( _hx_tmp4 );
HXDLIN(  75)		if (_hx_tmp5) {
HXLINE(  75)			_hx_tmp3 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE(  75)			_hx_tmp3 = false;
            		}
HXDLIN(  75)		if (_hx_tmp3) {
HXLINE(  75)			return false;
            		}
HXLINE(  77)		this->_hx___getRenderTransform();
HXLINE(  79)		HX_VARI(  ::openfl::geom::Matrix,_this) = this->_hx___renderTransform;
HXDLIN(  79)		HX_VARI( Float,norm) = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN(  79)		HX_VAR( Float,px);
HXDLIN(  79)		if ((norm == (int)0)) {
HXLINE(  79)			px = -(_this->tx);
            		}
            		else {
HXLINE(  79)			px = (((Float)((Float)1.0) / (Float)norm) * ((_this->c * (_this->ty - y)) + (_this->d * (x - _this->tx))));
            		}
HXLINE(  80)		HX_VARI_NAME(  ::openfl::geom::Matrix,_this1,"_this") = this->_hx___renderTransform;
HXDLIN(  80)		HX_VARI_NAME( Float,norm1,"norm") = ((_this1->a * _this1->d) - (_this1->b * _this1->c));
HXDLIN(  80)		HX_VAR( Float,py);
HXDLIN(  80)		if ((norm1 == (int)0)) {
HXLINE(  80)			py = -(_this1->ty);
            		}
            		else {
HXLINE(  80)			py = (((Float)((Float)1.0) / (Float)norm1) * ((_this1->a * (y - _this1->ty)) + (_this1->b * (_this1->tx - x))));
            		}
HXLINE(  82)		Bool _hx_tmp6;
HXDLIN(  82)		Bool _hx_tmp7;
HXDLIN(  82)		Bool _hx_tmp8;
HXDLIN(  82)		if ((px > (int)0)) {
HXLINE(  82)			_hx_tmp8 = (py > (int)0);
            		}
            		else {
HXLINE(  82)			_hx_tmp8 = false;
            		}
HXDLIN(  82)		if (_hx_tmp8) {
HXLINE(  82)			_hx_tmp7 = (px <= this->bitmapData->width);
            		}
            		else {
HXLINE(  82)			_hx_tmp7 = false;
            		}
HXDLIN(  82)		if (_hx_tmp7) {
HXLINE(  82)			_hx_tmp6 = (py <= this->bitmapData->height);
            		}
            		else {
HXLINE(  82)			_hx_tmp6 = false;
            		}
HXDLIN(  82)		if (_hx_tmp6) {
HXLINE(  84)			Bool _hx_tmp9;
HXDLIN(  84)			Bool _hx_tmp10 = hx::IsNotNull( stack );
HXDLIN(  84)			if (_hx_tmp10) {
HXLINE(  84)				_hx_tmp9 = !(interactiveOnly);
            			}
            			else {
HXLINE(  84)				_hx_tmp9 = false;
            			}
HXDLIN(  84)			if (_hx_tmp9) {
HXLINE(  86)				stack->push(hitObject);
            			}
HXLINE(  90)			return true;
            		}
HXLINE(  94)		return false;
            	}


Bool Bitmap_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACK_FRAME("openfl.display.Bitmap","__hitTestMask",0x7acde95c,"openfl.display.Bitmap.__hitTestMask","openfl/display/Bitmap.hx",99,0x461b2743)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE( 101)		Bool _hx_tmp = hx::IsNull( this->bitmapData );
HXDLIN( 101)		if (_hx_tmp) {
HXLINE( 101)			return false;
            		}
HXLINE( 103)		this->_hx___getRenderTransform();
HXLINE( 105)		HX_VARI(  ::openfl::geom::Matrix,_this) = this->_hx___renderTransform;
HXDLIN( 105)		HX_VARI( Float,norm) = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN( 105)		HX_VAR( Float,px);
HXDLIN( 105)		if ((norm == (int)0)) {
HXLINE( 105)			px = -(_this->tx);
            		}
            		else {
HXLINE( 105)			px = (((Float)((Float)1.0) / (Float)norm) * ((_this->c * (_this->ty - y)) + (_this->d * (x - _this->tx))));
            		}
HXLINE( 106)		HX_VARI_NAME(  ::openfl::geom::Matrix,_this1,"_this") = this->_hx___renderTransform;
HXDLIN( 106)		HX_VARI_NAME( Float,norm1,"norm") = ((_this1->a * _this1->d) - (_this1->b * _this1->c));
HXDLIN( 106)		HX_VAR( Float,py);
HXDLIN( 106)		if ((norm1 == (int)0)) {
HXLINE( 106)			py = -(_this1->ty);
            		}
            		else {
HXLINE( 106)			py = (((Float)((Float)1.0) / (Float)norm1) * ((_this1->a * (y - _this1->ty)) + (_this1->b * (_this1->tx - x))));
            		}
HXLINE( 108)		Bool _hx_tmp1;
HXDLIN( 108)		Bool _hx_tmp2;
HXDLIN( 108)		Bool _hx_tmp3;
HXDLIN( 108)		if ((px > (int)0)) {
HXLINE( 108)			_hx_tmp3 = (py > (int)0);
            		}
            		else {
HXLINE( 108)			_hx_tmp3 = false;
            		}
HXDLIN( 108)		if (_hx_tmp3) {
HXLINE( 108)			_hx_tmp2 = (px <= this->bitmapData->width);
            		}
            		else {
HXLINE( 108)			_hx_tmp2 = false;
            		}
HXDLIN( 108)		if (_hx_tmp2) {
HXLINE( 108)			_hx_tmp1 = (py <= this->bitmapData->height);
            		}
            		else {
HXLINE( 108)			_hx_tmp1 = false;
            		}
HXDLIN( 108)		if (_hx_tmp1) {
HXLINE( 110)			return true;
            		}
HXLINE( 114)		return false;
            	}


void Bitmap_obj::_hx___renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACK_FRAME("openfl.display.Bitmap","__renderCairo",0x941372dd,"openfl.display.Bitmap.__renderCairo","openfl/display/Bitmap.hx",122,0x461b2743)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(renderSession,"renderSession")
HXLINE( 122)		Bool _hx_tmp;
HXDLIN( 122)		if (!(!(this->_hx___renderable))) {
HXLINE( 122)			_hx_tmp = (this->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE( 122)			_hx_tmp = true;
            		}
HXDLIN( 122)		if (!(_hx_tmp)) {
HXLINE( 122)			HX_VARI(  ::lime::graphics::cairo::Cairo,cairo) = renderSession->cairo;
HXDLIN( 122)			Bool _hx_tmp1;
HXDLIN( 122)			Bool _hx_tmp2 = hx::IsNotNull( this->bitmapData );
HXDLIN( 122)			if (_hx_tmp2) {
HXLINE( 122)				_hx_tmp1 = this->bitmapData->_hx___isValid;
            			}
            			else {
HXLINE( 122)				_hx_tmp1 = false;
            			}
HXDLIN( 122)			if (_hx_tmp1) {
HXLINE( 122)				renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
HXDLIN( 122)				HX_VARI(  ::openfl::geom::Matrix,transform) = this->_hx___renderTransform;
HXDLIN( 122)				Bool _hx_tmp3 = renderSession->roundPixels;
HXDLIN( 122)				if (_hx_tmp3) {
HXLINE( 122)					HX_VARI(  ::lime::math::Matrix3,matrix) = transform->_hx___toMatrix3();
HXDLIN( 122)					matrix->tx = ::Math_obj::round(matrix->tx);
HXDLIN( 122)					matrix->ty = ::Math_obj::round(matrix->ty);
HXDLIN( 122)					cairo->set_matrix(matrix);
            				}
            				else {
HXLINE( 122)					 ::lime::math::Matrix3 _hx_tmp4 = transform->_hx___toMatrix3();
HXDLIN( 122)					cairo->set_matrix(_hx_tmp4);
            				}
HXDLIN( 122)				HX_VARI(  ::Dynamic,surface) = this->bitmapData->getSurface();
HXDLIN( 122)				Bool _hx_tmp5 = hx::IsNotNull( surface );
HXDLIN( 122)				if (_hx_tmp5) {
HXLINE( 122)					HX_VARI(  ::Dynamic,pattern) = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 122)					Int _hx_tmp6;
HXDLIN( 122)					Bool _hx_tmp7;
HXDLIN( 122)					if (renderSession->allowSmoothing) {
HXLINE( 122)						_hx_tmp7 = this->smoothing;
            					}
            					else {
HXLINE( 122)						_hx_tmp7 = false;
            					}
HXDLIN( 122)					if (_hx_tmp7) {
HXLINE( 122)						_hx_tmp6 = (int)1;
            					}
            					else {
HXLINE( 122)						_hx_tmp6 = (int)3;
            					}
HXDLIN( 122)					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp6);
HXDLIN( 122)					cairo->set_source(pattern);
HXDLIN( 122)					Bool _hx_tmp8 = (this->_hx___worldAlpha == (int)1);
HXDLIN( 122)					if (_hx_tmp8) {
HXLINE( 122)						cairo->paint();
            					}
            					else {
HXLINE( 122)						cairo->paintWithAlpha(this->_hx___worldAlpha);
            					}
            				}
HXDLIN( 122)				renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
            			}
            		}
            	}


void Bitmap_obj::_hx___renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACK_FRAME("openfl.display.Bitmap","__renderCairoMask",0xba721269,"openfl.display.Bitmap.__renderCairoMask","openfl/display/Bitmap.hx",130,0x461b2743)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(renderSession,"renderSession")
HXLINE( 130)		Float _hx_tmp = this->get_width();
HXDLIN( 130)		Float _hx_tmp1 = this->get_height();
HXDLIN( 130)		renderSession->cairo->rectangle((int)0,(int)0,_hx_tmp,_hx_tmp1);
            	}


void Bitmap_obj::_hx___renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACK_FRAME("openfl.display.Bitmap","__renderCanvas",0x00421ce3,"openfl.display.Bitmap.__renderCanvas","openfl/display/Bitmap.hx",137,0x461b2743)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(renderSession,"renderSession")
            	}


void Bitmap_obj::_hx___renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACK_FRAME("openfl.display.Bitmap","__renderCanvasMask",0x68a5376f,"openfl.display.Bitmap.__renderCanvasMask","openfl/display/Bitmap.hx",144,0x461b2743)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(renderSession,"renderSession")
HXLINE( 144)		Float _hx_tmp = this->get_width();
HXDLIN( 144)		Float _hx_tmp1 = this->get_height();
HXDLIN( 144)		renderSession->context->rect((int)0,(int)0,_hx_tmp,_hx_tmp1);
            	}


void Bitmap_obj::_hx___renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACK_FRAME("openfl.display.Bitmap","__renderDOM",0xfdebb997,"openfl.display.Bitmap.__renderDOM","openfl/display/Bitmap.hx",149,0x461b2743)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(renderSession,"renderSession")
            	}


void Bitmap_obj::_hx___renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACK_FRAME("openfl.display.Bitmap","__renderGL",0xbc428090,"openfl.display.Bitmap.__renderGL","openfl/display/Bitmap.hx",160,0x461b2743)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(renderSession,"renderSession")
HXLINE( 160)		Bool _hx_tmp;
HXDLIN( 160)		if (!(!(this->_hx___renderable))) {
HXLINE( 160)			_hx_tmp = (this->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE( 160)			_hx_tmp = true;
            		}
HXDLIN( 160)		if (!(_hx_tmp)) {
HXLINE( 160)			Bool _hx_tmp1;
HXDLIN( 160)			Bool _hx_tmp2 = hx::IsNotNull( this->bitmapData );
HXDLIN( 160)			if (_hx_tmp2) {
HXLINE( 160)				_hx_tmp1 = this->bitmapData->_hx___isValid;
            			}
            			else {
HXLINE( 160)				_hx_tmp1 = false;
            			}
HXDLIN( 160)			if (_hx_tmp1) {
HXLINE( 160)				HX_VARI(  ::openfl::_internal::renderer::opengl::GLRenderer,renderer) = ( ( ::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer) );
HXDLIN( 160)				HX_VARI(  ::lime::_backend::native::NativeGLRenderContext,gl) = renderSession->gl;
HXDLIN( 160)				 ::Dynamic _hx_tmp3 = this->get_blendMode();
HXDLIN( 160)				renderSession->blendModeManager->setBlendMode(_hx_tmp3);
HXDLIN( 160)				renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
HXDLIN( 160)				HX_VARI(  ::openfl::display::Shader,shader) = renderSession->filterManager->pushObject(hx::ObjectPtr<OBJ_>(this));
HXDLIN( 160)				shader->get_data()->uImage0->input = this->bitmapData;
HXDLIN( 160)				Bool _hx_tmp4;
HXDLIN( 160)				if (renderSession->allowSmoothing) {
HXLINE( 160)					if (!(this->smoothing)) {
HXLINE( 160)						_hx_tmp4 = renderSession->upscaled;
            					}
            					else {
HXLINE( 160)						_hx_tmp4 = true;
            					}
            				}
            				else {
HXLINE( 160)					_hx_tmp4 = false;
            				}
HXDLIN( 160)				shader->get_data()->uImage0->smoothing = _hx_tmp4;
HXDLIN( 160)				shader->get_data()->uMatrix->value = renderer->getMatrix(this->_hx___renderTransform);
HXDLIN( 160)				renderSession->shaderManager->setShader(shader);
HXDLIN( 160)				Int _hx_tmp5 = gl->ARRAY_BUFFER;
HXDLIN( 160)				 ::lime::graphics::opengl::GLBuffer _hx_tmp6 = this->bitmapData->getBuffer(gl,this->_hx___worldAlpha);
HXDLIN( 160)				gl->bindBuffer(_hx_tmp5,_hx_tmp6);
HXDLIN( 160)				gl->vertexAttribPointer(shader->get_data()->aPosition->index,(int)3,gl->FLOAT,false,(int)24,(int)0);
HXDLIN( 160)				gl->vertexAttribPointer(shader->get_data()->aTexCoord->index,(int)2,gl->FLOAT,false,(int)24,(int)12);
HXDLIN( 160)				gl->vertexAttribPointer(shader->get_data()->aAlpha->index,(int)1,gl->FLOAT,false,(int)24,(int)20);
HXDLIN( 160)				gl->drawArrays(gl->TRIANGLE_STRIP,(int)0,(int)4);
HXDLIN( 160)				renderSession->filterManager->popObject(hx::ObjectPtr<OBJ_>(this));
HXDLIN( 160)				renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
            			}
            		}
            	}


void Bitmap_obj::_hx___updateMask( ::openfl::display::Graphics maskGraphics){
            	HX_STACK_FRAME("openfl.display.Bitmap","__updateMask",0x5202506a,"openfl.display.Bitmap.__updateMask","openfl/display/Bitmap.hx",165,0x461b2743)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(maskGraphics,"maskGraphics")
HXLINE( 167)		Bool _hx_tmp = hx::IsNull( this->bitmapData );
HXDLIN( 167)		if (_hx_tmp) {
HXLINE( 169)			return;
            		}
HXLINE( 173)		maskGraphics->_hx___commands->overrideMatrix(this->_hx___worldTransform);
HXLINE( 174)		maskGraphics->beginFill((int)0,null());
HXLINE( 175)		maskGraphics->drawRect((int)0,(int)0,this->bitmapData->width,this->bitmapData->height);
HXLINE( 177)		Bool _hx_tmp1 = hx::IsNull( maskGraphics->_hx___bounds );
HXDLIN( 177)		if (_hx_tmp1) {
HXLINE( 179)			maskGraphics->_hx___bounds =  ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());
            		}
HXLINE( 183)		this->_hx___getBounds(maskGraphics->_hx___bounds,::openfl::geom::Matrix_obj::_hx___identity);
HXLINE( 185)		this->super::_hx___updateMask(maskGraphics);
            	}


 ::openfl::display::BitmapData Bitmap_obj::set_bitmapData( ::openfl::display::BitmapData value){
            	HX_STACK_FRAME("openfl.display.Bitmap","set_bitmapData",0x81bf676b,"openfl.display.Bitmap.set_bitmapData","openfl/display/Bitmap.hx",196,0x461b2743)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 198)		this->bitmapData = value;
HXLINE( 199)		this->smoothing = false;
HXLINE( 201)		Bool _hx_tmp;
HXDLIN( 201)		Bool _hx_tmp1 = hx::IsNotNull( this->_hx___filters );
HXDLIN( 201)		if (_hx_tmp1) {
HXLINE( 201)			_hx_tmp = (this->_hx___filters->length > (int)0);
            		}
            		else {
HXLINE( 201)			_hx_tmp = false;
            		}
HXLINE( 211)		return this->bitmapData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_bitmapData,return )

Float Bitmap_obj::get_height(){
            	HX_STACK_FRAME("openfl.display.Bitmap","get_height",0x5901da25,"openfl.display.Bitmap.get_height","openfl/display/Bitmap.hx",216,0x461b2743)
            	HX_STACK_THIS(this)
HXLINE( 218)		Bool _hx_tmp = hx::IsNotNull( this->bitmapData );
HXDLIN( 218)		if (_hx_tmp) {
HXLINE( 220)			Int _hx_tmp1 = this->bitmapData->height;
HXDLIN( 220)			Float _hx_tmp2 = this->get_scaleY();
HXDLIN( 220)			Float _hx_tmp3 = ::Math_obj::abs(_hx_tmp2);
HXDLIN( 220)			return (_hx_tmp1 * _hx_tmp3);
            		}
HXLINE( 224)		return (int)0;
            	}


Float Bitmap_obj::set_height(Float value){
            	HX_STACK_FRAME("openfl.display.Bitmap","set_height",0x5c7f7899,"openfl.display.Bitmap.set_height","openfl/display/Bitmap.hx",229,0x461b2743)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 231)		Bool _hx_tmp = hx::IsNotNull( this->bitmapData );
HXDLIN( 231)		if (_hx_tmp) {
HXLINE( 233)			Bool _hx_tmp1 = (value != this->bitmapData->height);
HXDLIN( 233)			if (_hx_tmp1) {
HXLINE( 235)				Float _hx_tmp2 = ((Float)value / (Float)this->bitmapData->height);
HXDLIN( 235)				this->set_scaleY(_hx_tmp2);
            			}
HXLINE( 239)			return value;
            		}
HXLINE( 243)		return (int)0;
            	}


Float Bitmap_obj::get_width(){
            	HX_STACK_FRAME("openfl.display.Bitmap","get_width",0x2b347588,"openfl.display.Bitmap.get_width","openfl/display/Bitmap.hx",248,0x461b2743)
            	HX_STACK_THIS(this)
HXLINE( 250)		Bool _hx_tmp = hx::IsNotNull( this->bitmapData );
HXDLIN( 250)		if (_hx_tmp) {
HXLINE( 252)			Int _hx_tmp1 = this->bitmapData->width;
HXDLIN( 252)			Float _hx_tmp2 = ::Math_obj::abs(this->_hx___scaleX);
HXDLIN( 252)			return (_hx_tmp1 * _hx_tmp2);
            		}
HXLINE( 256)		return (int)0;
            	}


Float Bitmap_obj::set_width(Float value){
            	HX_STACK_FRAME("openfl.display.Bitmap","set_width",0x0e856194,"openfl.display.Bitmap.set_width","openfl/display/Bitmap.hx",261,0x461b2743)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 263)		Bool _hx_tmp = hx::IsNotNull( this->bitmapData );
HXDLIN( 263)		if (_hx_tmp) {
HXLINE( 265)			Bool _hx_tmp1 = (value != this->bitmapData->width);
HXDLIN( 265)			if (_hx_tmp1) {
HXLINE( 267)				Float _hx_tmp2 = ((Float)value / (Float)this->bitmapData->width);
HXDLIN( 267)				this->set_scaleX(_hx_tmp2);
            			}
HXLINE( 271)			return value;
            		}
HXLINE( 275)		return (int)0;
            	}



Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	 ::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	 ::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Bitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return hx::Val( smoothing); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return hx::Val( _hx___hitTest_dyn()); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn()); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return hx::Val( set_width_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return hx::Val( bitmapData); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return hx::Val( _hx___renderGL_dyn()); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn()); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return hx::Val( set_height_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return hx::Val( _hx___getBounds_dyn()); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return hx::Val( _hx___renderDOM_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return hx::Val( _hx___updateMask_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { return hx::Val( pixelSnapping); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return hx::Val( _hx___hitTestMask_dyn()); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return hx::Val( _hx___renderCairo_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return hx::Val( _hx___renderCanvas_dyn()); }
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return hx::Val( set_bitmapData_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return hx::Val( _hx___renderCairoMask_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return hx::Val( _hx___renderCanvasMask_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Bitmap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< Bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bitmapData(inValue) );bitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { pixelSnapping=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Bitmap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Bitmap_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Bitmap_obj,pixelSnapping),HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Bitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String Bitmap_obj_sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("set_bitmapData","\x76","\x26","\xd6","\xc9"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	::String(null()) };

static void Bitmap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Bitmap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Bitmap","\xd9","\x2f","\x4d","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Bitmap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Bitmap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bitmap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Bitmap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
