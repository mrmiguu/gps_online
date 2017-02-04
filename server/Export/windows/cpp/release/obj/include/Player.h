// Generated by Haxe 3.3.0
#ifndef INCLUDED_Player
#define INCLUDED_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Card)
HX_DECLARE_CLASS0(Globals)
HX_DECLARE_CLASS0(Node)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS2(sys,net,Socket)



class HXCPP_CLASS_ATTRIBUTES Player_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Player_obj OBJ_;
		Player_obj();

	public:
		void __construct( ::Globals g,::String user,::String pass, ::sys::net::Socket s);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Player"); }
		static hx::ObjectPtr< Player_obj > __new( ::Globals g,::String user,::String pass, ::sys::net::Socket s);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"); }

		 ::Globals g;
		::String user;
		::String pass;
		::String color;
		::Array< ::Dynamic> path;
		Int cur;
		 ::Card card;
		::Array< ::Dynamic> cards;
		Int level;
		Int req;
		Int exp;
		 ::sys::net::Socket socket;
		Int side;
		Int roller;
		Float rollerFuture;
		Bool rollerAnim;
		::String roygbiv;
		Bool onGoal();
		::Dynamic onGoal_dyn();

		void addCard( ::Card c);
		::Dynamic addCard_dyn();

		void equipCard( ::Card c);
		::Dynamic equipCard_dyn();

		void save();
		::Dynamic save_dyn();

		void init();
		::Dynamic init_dyn();

		void reset();
		::Dynamic reset_dyn();

		Bool on(Int hwy);
		::Dynamic on_dyn();

		void go(Int n);
		::Dynamic go_dyn();

		::String getUser();
		::Dynamic getUser_dyn();

		::String getColor();
		::Dynamic getColor_dyn();

		void setColor(::String c);
		::Dynamic setColor_dyn();

		void informColors();
		::Dynamic informColors_dyn();

		void informLocs();
		::Dynamic informLocs_dyn();

		void informDests();
		::Dynamic informDests_dyn();

		void broadcastColor();
		::Dynamic broadcastColor_dyn();

		void broadcastLoc();
		::Dynamic broadcastLoc_dyn();

		void broadcastDest();
		::Dynamic broadcastDest_dyn();

		::String getLoc();
		::Dynamic getLoc_dyn();

		::String getDest();
		::Dynamic getDest_dyn();

		void to(::String city);
		::Dynamic to_dyn();

		void refine( ::Node start, ::Node end);
		::Dynamic refine_dyn();

		void setCur(Int n);
		::Dynamic setCur_dyn();

		void increaseExp();
		::Dynamic increaseExp_dyn();

		void rollDie();
		::Dynamic rollDie_dyn();

		void loop(Float time);
		::Dynamic loop_dyn();

};


#endif /* INCLUDED_Player */ 
