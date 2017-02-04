// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_media_HTML5AudioContext
#define INCLUDED_lime_media_HTML5AudioContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,media,AudioBuffer)
HX_DECLARE_CLASS2(lime,media,HTML5AudioContext)

namespace lime{
namespace media{


class HXCPP_CLASS_ATTRIBUTES HTML5AudioContext_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef HTML5AudioContext_obj OBJ_;
		HTML5AudioContext_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.media.HTML5AudioContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.media.HTML5AudioContext"); }
		static hx::ObjectPtr< HTML5AudioContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HTML5AudioContext_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HTML5AudioContext","\x43","\x4f","\x63","\x29"); }

		Int HAVE_CURRENT_DATA;
		Int HAVE_ENOUGH_DATA;
		Int HAVE_FUTURE_DATA;
		Int HAVE_METADATA;
		Int HAVE_NOTHING;
		Int NETWORK_EMPTY;
		Int NETWORK_IDLE;
		Int NETWORK_LOADING;
		Int NETWORK_NO_SOURCE;
		::String canPlayType( ::lime::media::AudioBuffer buffer,::String type);
		::Dynamic canPlayType_dyn();

		 ::lime::media::AudioBuffer createBuffer(::String urlString);
		::Dynamic createBuffer_dyn();

		Bool getAutoplay( ::lime::media::AudioBuffer buffer);
		::Dynamic getAutoplay_dyn();

		 ::Dynamic getBuffered( ::lime::media::AudioBuffer buffer);
		::Dynamic getBuffered_dyn();

		::String getCurrentSrc( ::lime::media::AudioBuffer buffer);
		::Dynamic getCurrentSrc_dyn();

		Float getCurrentTime( ::lime::media::AudioBuffer buffer);
		::Dynamic getCurrentTime_dyn();

		Float getDefaultPlaybackRate( ::lime::media::AudioBuffer buffer);
		::Dynamic getDefaultPlaybackRate_dyn();

		Float getDuration( ::lime::media::AudioBuffer buffer);
		::Dynamic getDuration_dyn();

		Bool getEnded( ::lime::media::AudioBuffer buffer);
		::Dynamic getEnded_dyn();

		 ::Dynamic getError( ::lime::media::AudioBuffer buffer);
		::Dynamic getError_dyn();

		Bool getLoop( ::lime::media::AudioBuffer buffer);
		::Dynamic getLoop_dyn();

		Bool getMuted( ::lime::media::AudioBuffer buffer);
		::Dynamic getMuted_dyn();

		Int getNetworkState( ::lime::media::AudioBuffer buffer);
		::Dynamic getNetworkState_dyn();

		Bool getPaused( ::lime::media::AudioBuffer buffer);
		::Dynamic getPaused_dyn();

		Float getPlaybackRate( ::lime::media::AudioBuffer buffer);
		::Dynamic getPlaybackRate_dyn();

		 ::Dynamic getPlayed( ::lime::media::AudioBuffer buffer);
		::Dynamic getPlayed_dyn();

		::String getPreload( ::lime::media::AudioBuffer buffer);
		::Dynamic getPreload_dyn();

		Int getReadyState( ::lime::media::AudioBuffer buffer);
		::Dynamic getReadyState_dyn();

		 ::Dynamic getSeekable( ::lime::media::AudioBuffer buffer);
		::Dynamic getSeekable_dyn();

		Bool getSeeking( ::lime::media::AudioBuffer buffer);
		::Dynamic getSeeking_dyn();

		::String getSrc( ::lime::media::AudioBuffer buffer);
		::Dynamic getSrc_dyn();

		Float getStartTime( ::lime::media::AudioBuffer buffer);
		::Dynamic getStartTime_dyn();

		Float getVolume( ::lime::media::AudioBuffer buffer);
		::Dynamic getVolume_dyn();

		void load( ::lime::media::AudioBuffer buffer);
		::Dynamic load_dyn();

		void pause( ::lime::media::AudioBuffer buffer);
		::Dynamic pause_dyn();

		void play( ::lime::media::AudioBuffer buffer);
		::Dynamic play_dyn();

		void setAutoplay( ::lime::media::AudioBuffer buffer,Bool value);
		::Dynamic setAutoplay_dyn();

		void setCurrentTime( ::lime::media::AudioBuffer buffer,Float value);
		::Dynamic setCurrentTime_dyn();

		void setDefaultPlaybackRate( ::lime::media::AudioBuffer buffer,Float value);
		::Dynamic setDefaultPlaybackRate_dyn();

		void setLoop( ::lime::media::AudioBuffer buffer,Bool value);
		::Dynamic setLoop_dyn();

		void setMuted( ::lime::media::AudioBuffer buffer,Bool value);
		::Dynamic setMuted_dyn();

		void setPlaybackRate( ::lime::media::AudioBuffer buffer,Float value);
		::Dynamic setPlaybackRate_dyn();

		void setPreload( ::lime::media::AudioBuffer buffer,::String value);
		::Dynamic setPreload_dyn();

		void setSrc( ::lime::media::AudioBuffer buffer,::String value);
		::Dynamic setSrc_dyn();

		void setVolume( ::lime::media::AudioBuffer buffer,Float value);
		::Dynamic setVolume_dyn();

};

} // end namespace lime
} // end namespace media

#endif /* INCLUDED_lime_media_HTML5AudioContext */ 
