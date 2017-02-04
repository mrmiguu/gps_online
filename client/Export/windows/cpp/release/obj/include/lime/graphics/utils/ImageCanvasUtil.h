// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_graphics_utils_ImageCanvasUtil
#define INCLUDED_lime_graphics_utils_ImageCanvasUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,ImageChannel)
HX_DECLARE_CLASS3(lime,graphics,utils,ImageCanvasUtil)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace graphics{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES ImageCanvasUtil_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ImageCanvasUtil_obj OBJ_;
		ImageCanvasUtil_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.utils.ImageCanvasUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.utils.ImageCanvasUtil"); }
		static hx::ObjectPtr< ImageCanvasUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageCanvasUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ImageCanvasUtil","\x15","\x30","\x04","\x51"); }

		static void colorTransform( ::lime::graphics::Image image, ::lime::math::Rectangle rect, ::lime::utils::ArrayBufferView colorMatrix);
		static ::Dynamic colorTransform_dyn();

		static void convertToCanvas( ::lime::graphics::Image image,hx::Null< Bool >  clear);
		static ::Dynamic convertToCanvas_dyn();

		static void convertToData( ::lime::graphics::Image image,hx::Null< Bool >  clear);
		static ::Dynamic convertToData_dyn();

		static void copyChannel( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,::hx::EnumBase sourceChannel,::hx::EnumBase destChannel);
		static ::Dynamic copyChannel_dyn();

		static void copyPixels( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint, ::lime::graphics::Image alphaImage, ::lime::math::Vector2 alphaPoint,hx::Null< Bool >  mergeAlpha);
		static ::Dynamic copyPixels_dyn();

		static void createCanvas( ::lime::graphics::Image image,Int width,Int height);
		static ::Dynamic createCanvas_dyn();

		static void createImageData( ::lime::graphics::Image image);
		static ::Dynamic createImageData_dyn();

		static void fillRect( ::lime::graphics::Image image, ::lime::math::Rectangle rect,Int color,Int format);
		static ::Dynamic fillRect_dyn();

		static void floodFill( ::lime::graphics::Image image,Int x,Int y,Int color,Int format);
		static ::Dynamic floodFill_dyn();

		static Int getPixel( ::lime::graphics::Image image,Int x,Int y,Int format);
		static ::Dynamic getPixel_dyn();

		static Int getPixel32( ::lime::graphics::Image image,Int x,Int y,Int format);
		static ::Dynamic getPixel32_dyn();

		static  ::haxe::io::Bytes getPixels( ::lime::graphics::Image image, ::lime::math::Rectangle rect,Int format);
		static ::Dynamic getPixels_dyn();

		static void merge( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,Int redMultiplier,Int greenMultiplier,Int blueMultiplier,Int alphaMultiplier);
		static ::Dynamic merge_dyn();

		static void resize( ::lime::graphics::Image image,Int newWidth,Int newHeight);
		static ::Dynamic resize_dyn();

		static void scroll( ::lime::graphics::Image image,Int x,Int y);
		static ::Dynamic scroll_dyn();

		static void setPixel( ::lime::graphics::Image image,Int x,Int y,Int color,Int format);
		static ::Dynamic setPixel_dyn();

		static void setPixel32( ::lime::graphics::Image image,Int x,Int y,Int color,Int format);
		static ::Dynamic setPixel32_dyn();

		static void setPixels( ::lime::graphics::Image image, ::lime::math::Rectangle rect, ::haxe::io::Bytes bytes,Int format);
		static ::Dynamic setPixels_dyn();

		static void sync( ::lime::graphics::Image image,Bool clear);
		static ::Dynamic sync_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace utils

#endif /* INCLUDED_lime_graphics_utils_ImageCanvasUtil */ 
