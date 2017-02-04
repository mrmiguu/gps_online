// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_media_codecs_vorbis_VorbisComment
#define INCLUDED_lime_media_codecs_vorbis_VorbisComment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,media,codecs,vorbis,VorbisComment)

namespace lime{
namespace media{
namespace codecs{
namespace vorbis{


class HXCPP_CLASS_ATTRIBUTES VorbisComment_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef VorbisComment_obj OBJ_;
		VorbisComment_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.media.codecs.vorbis.VorbisComment")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.media.codecs.vorbis.VorbisComment"); }
		static hx::ObjectPtr< VorbisComment_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VorbisComment_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("VorbisComment","\x2c","\x4f","\xa7","\x75"); }

		::Array< ::String > userComments;
		::String vendor;
};

} // end namespace lime
} // end namespace media
} // end namespace codecs
} // end namespace vorbis

#endif /* INCLUDED_lime_media_codecs_vorbis_VorbisComment */ 
