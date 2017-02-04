// Generated by Haxe 3.3.0
#ifndef INCLUDED_Date
#define INCLUDED_Date

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)



class HXCPP_CLASS_ATTRIBUTES Date_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Date_obj OBJ_;
		Date_obj();

	public:
		void __construct(Int year,Int month,Int day,Int hour,Int min,Int sec);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Date")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"Date"); }
		static hx::ObjectPtr< Date_obj > __new(Int year,Int month,Int day,Int hour,Int min,Int sec);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Date_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Date","\x4e","\x82","\x3c","\x2d"); }

		static  ::Date now();
		static ::Dynamic now_dyn();

		static  ::Date new1( ::Dynamic t);
		static ::Dynamic new1_dyn();

		static  ::Date fromTime(Float t);
		static ::Dynamic fromTime_dyn();

		static  ::Date fromString(::String s);
		static ::Dynamic fromString_dyn();

		Float mSeconds;
		Float getTime();
		::Dynamic getTime_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};


#endif /* INCLUDED_Date */ 
