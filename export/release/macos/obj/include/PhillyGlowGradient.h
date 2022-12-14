#ifndef INCLUDED_PhillyGlowGradient
#define INCLUDED_PhillyGlowGradient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(PhillyGlowGradient)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES PhillyGlowGradient_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef PhillyGlowGradient_obj OBJ_;
		PhillyGlowGradient_obj();

	public:
		enum { _hx_ClassId = 0x63620a29 };

		void __construct(Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PhillyGlowGradient")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PhillyGlowGradient"); }
		static ::hx::ObjectPtr< PhillyGlowGradient_obj > __new(Float x,Float y);
		static ::hx::ObjectPtr< PhillyGlowGradient_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PhillyGlowGradient_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PhillyGlowGradient",05,1d,aa,a4); }

		Float originalY;
		int originalHeight;
		Float intendedAlpha;
		void update(Float elapsed);

		void bop();
		::Dynamic bop_dyn();

};


#endif /* INCLUDED_PhillyGlowGradient */ 
