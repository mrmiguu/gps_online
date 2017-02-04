// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl_display_DisplayObject
#define INCLUDED_openfl_display_DisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
HX_DECLARE_CLASS2(lime,ui,MouseCursor)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,LoaderInfo)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,geom,Transform)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES DisplayObject_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef DisplayObject_obj OBJ_;
		DisplayObject_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.DisplayObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display.DisplayObject"); }
		static hx::ObjectPtr< DisplayObject_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DisplayObject_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("DisplayObject","\x81","\x8a","\x92","\x1e"); }

		static void __boot();
		static  ::haxe::ds::StringMap _hx___broadcastEvents;
		static Int _hx___instanceCount;
		static Int _hx___worldRenderDirty;
		static Int _hx___worldTransformDirty;
		 ::Dynamic opaqueBackground;
		 ::openfl::display::DisplayObjectContainer parent;
		 ::openfl::geom::Rectangle scale9Grid;
		 ::openfl::display::Stage stage;
		Float _hx___alpha;
		 ::Dynamic _hx___blendMode;
		Bool _hx___cacheAsBitmap;
		 ::openfl::geom::Matrix _hx___cacheAsBitmapMatrix;
		 ::lime::graphics::cairo::Cairo _hx___cairo;
		::Array< ::Dynamic> _hx___children;
		::Array< ::Dynamic> _hx___filters;
		Bool _hx___forceCacheAsBitmap;
		 ::openfl::display::Graphics _hx___graphics;
		Bool _hx___interactive;
		Bool _hx___isMask;
		 ::openfl::display::LoaderInfo _hx___loaderInfo;
		 ::openfl::display::DisplayObject _hx___mask;
		::String _hx___name;
		 ::openfl::geom::Transform _hx___objectTransform;
		Bool _hx___renderable;
		Bool _hx___renderDirty;
		 ::openfl::display::DisplayObject _hx___renderParent;
		 ::openfl::geom::Matrix _hx___renderTransform;
		 ::openfl::geom::Matrix _hx___renderTransformCache;
		Bool _hx___renderTransformChanged;
		Float _hx___rotation;
		Float _hx___rotationCosine;
		Float _hx___rotationSine;
		Float _hx___scaleX;
		Float _hx___scaleY;
		 ::openfl::geom::Rectangle _hx___scrollRect;
		 ::openfl::geom::Matrix _hx___transform;
		Bool _hx___transformDirty;
		Bool _hx___visible;
		Float _hx___worldAlpha;
		Bool _hx___worldAlphaChanged;
		 ::openfl::geom::Rectangle _hx___worldClip;
		Bool _hx___worldClipChanged;
		 ::openfl::geom::ColorTransform _hx___worldColorTransform;
		 ::openfl::geom::Matrix _hx___worldTransform;
		Bool _hx___worldVisible;
		Bool _hx___worldVisibleChanged;
		Int _hx___worldZ;
		void addEventListener(::String type, ::Dynamic listener,hx::Null< Bool >  useCapture,hx::Null< Int >  priority,hx::Null< Bool >  useWeakReference);

		Bool dispatchEvent( ::openfl::events::Event event);

		 ::openfl::geom::Rectangle getBounds( ::openfl::display::DisplayObject targetCoordinateSpace);
		::Dynamic getBounds_dyn();

		 ::openfl::geom::Rectangle getRect( ::openfl::display::DisplayObject targetCoordinateSpace);
		::Dynamic getRect_dyn();

		virtual  ::openfl::geom::Point globalToLocal( ::openfl::geom::Point pos);
		::Dynamic globalToLocal_dyn();

		Bool hitTestObject( ::openfl::display::DisplayObject obj);
		::Dynamic hitTestObject_dyn();

		Bool hitTestPoint(Float x,Float y,hx::Null< Bool >  shapeFlag);
		::Dynamic hitTestPoint_dyn();

		virtual  ::openfl::geom::Point localToGlobal( ::openfl::geom::Point point);
		::Dynamic localToGlobal_dyn();

		void removeEventListener(::String type, ::Dynamic listener,hx::Null< Bool >  useCapture);

		void _hx___cleanup();
		::Dynamic _hx___cleanup_dyn();

		Bool _hx___dispatch( ::openfl::events::Event event);
		::Dynamic _hx___dispatch_dyn();

		virtual Bool _hx___dispatchChildren( ::openfl::events::Event event);
		::Dynamic _hx___dispatchChildren_dyn();

		Bool _hx___dispatchEvent( ::openfl::events::Event event);

		virtual void _hx___enterFrame(Int deltaTime);
		::Dynamic _hx___enterFrame_dyn();

		virtual void _hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix);
		::Dynamic _hx___getBounds_dyn();

		virtual ::hx::EnumBase _hx___getCursor();
		::Dynamic _hx___getCursor_dyn();

		virtual Bool _hx___getInteractive(::Array< ::Dynamic> stack);
		::Dynamic _hx___getInteractive_dyn();

		void _hx___getLocalBounds( ::openfl::geom::Rectangle rect);
		::Dynamic _hx___getLocalBounds_dyn();

		virtual void _hx___getRenderBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix);
		::Dynamic _hx___getRenderBounds_dyn();

		 ::openfl::geom::Matrix _hx___getRenderTransform();
		::Dynamic _hx___getRenderTransform_dyn();

		 ::openfl::geom::Matrix _hx___getWorldTransform();
		::Dynamic _hx___getWorldTransform_dyn();

		virtual Bool _hx___hitTest(Float x,Float y,Bool shapeFlag,::Array< ::Dynamic> stack,Bool interactiveOnly, ::openfl::display::DisplayObject hitObject);
		::Dynamic _hx___hitTest_dyn();

		virtual Bool _hx___hitTestMask(Float x,Float y);
		::Dynamic _hx___hitTestMask_dyn();

		virtual void _hx___readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData,Bool recurse);
		::Dynamic _hx___readGraphicsData_dyn();

		virtual void _hx___renderCairo( ::openfl::_internal::renderer::RenderSession renderSession);
		::Dynamic _hx___renderCairo_dyn();

		virtual void _hx___renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession);
		::Dynamic _hx___renderCairoMask_dyn();

		virtual void _hx___renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession);
		::Dynamic _hx___renderCanvas_dyn();

		virtual void _hx___renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession);
		::Dynamic _hx___renderCanvasMask_dyn();

		virtual void _hx___renderDOM( ::openfl::_internal::renderer::RenderSession renderSession);
		::Dynamic _hx___renderDOM_dyn();

		virtual void _hx___renderGL( ::openfl::_internal::renderer::RenderSession renderSession);
		::Dynamic _hx___renderGL_dyn();

		void _hx___setRenderDirty();
		::Dynamic _hx___setRenderDirty_dyn();

		virtual void _hx___setStageReference( ::openfl::display::Stage stage);
		::Dynamic _hx___setStageReference_dyn();

		void _hx___setTransformDirty();
		::Dynamic _hx___setTransformDirty_dyn();

		virtual void _hx___stopAllMovieClips();
		::Dynamic _hx___stopAllMovieClips_dyn();

		virtual void _hx___update(Bool transformOnly,Bool updateChildren, ::openfl::display::Graphics maskGraphics);
		::Dynamic _hx___update_dyn();

		virtual void _hx___updateChildren(Bool transformOnly);
		::Dynamic _hx___updateChildren_dyn();

		virtual void _hx___updateMask( ::openfl::display::Graphics maskGraphics);
		::Dynamic _hx___updateMask_dyn();

		virtual void _hx___updateTransforms( ::openfl::geom::Matrix overrideTransform);
		::Dynamic _hx___updateTransforms_dyn();

		Float get_alpha();
		::Dynamic get_alpha_dyn();

		Float set_alpha(Float value);
		::Dynamic set_alpha_dyn();

		 ::Dynamic get_blendMode();
		::Dynamic get_blendMode_dyn();

		 ::Dynamic set_blendMode( ::Dynamic value);
		::Dynamic set_blendMode_dyn();

		Bool get_cacheAsBitmap();
		::Dynamic get_cacheAsBitmap_dyn();

		Bool set_cacheAsBitmap(Bool value);
		::Dynamic set_cacheAsBitmap_dyn();

		 ::openfl::geom::Matrix get_cacheAsBitmapMatrix();
		::Dynamic get_cacheAsBitmapMatrix_dyn();

		 ::openfl::geom::Matrix set_cacheAsBitmapMatrix( ::openfl::geom::Matrix value);
		::Dynamic set_cacheAsBitmapMatrix_dyn();

		::Array< ::Dynamic> get_filters();
		::Dynamic get_filters_dyn();

		::Array< ::Dynamic> set_filters(::Array< ::Dynamic> value);
		::Dynamic set_filters_dyn();

		virtual Float get_height();
		::Dynamic get_height_dyn();

		virtual Float set_height(Float value);
		::Dynamic set_height_dyn();

		 ::openfl::display::LoaderInfo get_loaderInfo();
		::Dynamic get_loaderInfo_dyn();

		 ::openfl::display::DisplayObject get_mask();
		::Dynamic get_mask_dyn();

		 ::openfl::display::DisplayObject set_mask( ::openfl::display::DisplayObject value);
		::Dynamic set_mask_dyn();

		virtual Float get_mouseX();
		::Dynamic get_mouseX_dyn();

		virtual Float get_mouseY();
		::Dynamic get_mouseY_dyn();

		::String get_name();
		::Dynamic get_name_dyn();

		::String set_name(::String value);
		::Dynamic set_name_dyn();

		 ::openfl::display::DisplayObject get_root();
		::Dynamic get_root_dyn();

		Float get_rotation();
		::Dynamic get_rotation_dyn();

		virtual Float set_rotation(Float value);
		::Dynamic set_rotation_dyn();

		Float get_scaleX();
		::Dynamic get_scaleX_dyn();

		virtual Float set_scaleX(Float value);
		::Dynamic set_scaleX_dyn();

		Float get_scaleY();
		::Dynamic get_scaleY_dyn();

		virtual Float set_scaleY(Float value);
		::Dynamic set_scaleY_dyn();

		 ::openfl::geom::Rectangle get_scrollRect();
		::Dynamic get_scrollRect_dyn();

		 ::openfl::geom::Rectangle set_scrollRect( ::openfl::geom::Rectangle value);
		::Dynamic set_scrollRect_dyn();

		 ::openfl::geom::Transform get_transform();
		::Dynamic get_transform_dyn();

		virtual  ::openfl::geom::Transform set_transform( ::openfl::geom::Transform value);
		::Dynamic set_transform_dyn();

		Bool get_visible();
		::Dynamic get_visible_dyn();

		Bool set_visible(Bool value);
		::Dynamic set_visible_dyn();

		virtual Float get_width();
		::Dynamic get_width_dyn();

		virtual Float set_width(Float value);
		::Dynamic set_width_dyn();

		Float get_x();
		::Dynamic get_x_dyn();

		virtual Float set_x(Float value);
		::Dynamic set_x_dyn();

		Float get_y();
		::Dynamic get_y_dyn();

		virtual Float set_y(Float value);
		::Dynamic set_y_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_DisplayObject */ 
