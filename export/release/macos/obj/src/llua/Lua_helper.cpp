#include <hxcpp.h>

#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_llua_Convert
#include <llua/Convert.h>
#endif
#ifndef INCLUDED_llua_Lua_helper
#include <llua/Lua_helper.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_176a1fae691a892a_526_print_function,"llua.Lua_helper","print_function",0x45befe61,"llua.Lua_helper.print_function","llua/Lua.hx",526,0x35651a49)
HX_LOCAL_STACK_FRAME(_hx_pos_176a1fae691a892a_534_register_hxtrace,"llua.Lua_helper","register_hxtrace",0x0bdf71d0,"llua.Lua_helper.register_hxtrace","llua/Lua.hx",534,0x35651a49)
HX_LOCAL_STACK_FRAME(_hx_pos_176a1fae691a892a_543___default_trace,"llua.Lua_helper","__default_trace",0xf1154c90,"llua.Lua_helper.__default_trace","llua/Lua.hx",543,0x35651a49)
HX_LOCAL_STACK_FRAME(_hx_pos_176a1fae691a892a_549_add_callback,"llua.Lua_helper","add_callback",0xe670c8da,"llua.Lua_helper.add_callback","llua/Lua.hx",549,0x35651a49)
HX_LOCAL_STACK_FRAME(_hx_pos_176a1fae691a892a_557_remove_callback,"llua.Lua_helper","remove_callback",0xf7602ac9,"llua.Lua_helper.remove_callback","llua/Lua.hx",557,0x35651a49)
HX_LOCAL_STACK_FRAME(_hx_pos_176a1fae691a892a_565_callback_handler,"llua.Lua_helper","callback_handler",0xc7862d87,"llua.Lua_helper.callback_handler","llua/Lua.hx",565,0x35651a49)
HX_LOCAL_STACK_FRAME(_hx_pos_176a1fae691a892a_547_boot,"llua.Lua_helper","boot",0x226c2b29,"llua.Lua_helper.boot","llua/Lua.hx",547,0x35651a49)
namespace llua{

void Lua_helper_obj::__construct() { }

Dynamic Lua_helper_obj::__CreateEmpty() { return new Lua_helper_obj; }

void *Lua_helper_obj::_hx_vtable = 0;

Dynamic Lua_helper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Lua_helper_obj > _hx_result = new Lua_helper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Lua_helper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7b0276d5;
}

int Lua_helper_obj::print_function(::String s){
            	HX_STACKFRAME(&_hx_pos_176a1fae691a892a_526_print_function)
HXLINE( 529)		::llua::Lua_helper_obj::trace(s,::hx::SourceInfo(HX_("llua/Lua.hx",49,1a,65,35),529,HX_("llua.Lua_helper",d7,1c,13,8b),HX_("print_function",aa,5c,49,10)));
HXLINE( 530)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lua_helper_obj,print_function,return )

void Lua_helper_obj::register_hxtrace( cpp::Reference<lua_State> l){
            	HX_STACKFRAME(&_hx_pos_176a1fae691a892a_534_register_hxtrace)
HXLINE( 536)		linc::helpers::register_hxtrace_func(::cpp::Function< int (::String)>(::hx::AnyCast(&::llua::Lua_helper_obj::print_function )));
HXLINE( 537)		linc::helpers::register_hxtrace_lib(l);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lua_helper_obj,register_hxtrace,(void))

HX_BEGIN_DEFAULT_FUNC(__default_trace,Lua_helper_obj)
void _hx_run(::String s, ::Dynamic inf){
            	HX_STACKFRAME(&_hx_pos_176a1fae691a892a_543___default_trace)
HXDLIN( 543)		::haxe::Log_obj::trace(s,::hx::SourceInfo(HX_("llua/Lua.hx",49,1a,65,35),543,HX_("llua.Lua_helper",d7,1c,13,8b),HX_("trace",85,8e,1f,16)));
            	}
HX_END_LOCAL_FUNC2((void))
HX_END_DEFAULT_FUNC

::Dynamic Lua_helper_obj::trace;

 ::haxe::ds::StringMap Lua_helper_obj::callbacks;

bool Lua_helper_obj::add_callback( cpp::Reference<lua_State> l,::String fname, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_176a1fae691a892a_549_add_callback)
HXLINE( 551)		::llua::Lua_helper_obj::callbacks->set(fname,f);
HXLINE( 552)		linc::callbacks::add_callback_function(l,fname);
HXLINE( 553)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lua_helper_obj,add_callback,return )

bool Lua_helper_obj::remove_callback( cpp::Reference<lua_State> l,::String fname){
            	HX_STACKFRAME(&_hx_pos_176a1fae691a892a_557_remove_callback)
HXLINE( 559)		::llua::Lua_helper_obj::callbacks->remove(fname);
HXLINE( 560)		linc::callbacks::remove_callback_function(l,fname);
HXLINE( 561)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lua_helper_obj,remove_callback,return )

int Lua_helper_obj::callback_handler( cpp::Reference<lua_State> l,::String fname){
            	HX_STACKFRAME(&_hx_pos_176a1fae691a892a_565_callback_handler)
HXLINE( 567)		 ::Dynamic cbf = ::llua::Lua_helper_obj::callbacks->get(fname);
HXLINE( 569)		if (::hx::IsNull( cbf )) {
HXLINE( 570)			return 0;
            		}
HXLINE( 573)		int nparams = lua_gettop(l);
HXLINE( 574)		::cpp::VirtualArray args = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 576)		{
HXLINE( 576)			int _g = 0;
HXDLIN( 576)			int _g1 = nparams;
HXDLIN( 576)			while((_g < _g1)){
HXLINE( 576)				_g = (_g + 1);
HXDLIN( 576)				int i = (_g - 1);
HXLINE( 577)				int v = (i + 1);
HXDLIN( 577)				 ::Dynamic ret = null();
HXDLIN( 577)				switch((int)(lua_type(l,v))){
            					case (int)0: {
HXLINE( 577)						ret = null();
            					}
            					break;
            					case (int)1: {
HXLINE( 577)						ret = (lua_toboolean(l,v) != 0);
            					}
            					break;
            					case (int)3: {
HXLINE( 577)						ret = lua_tonumber(l,v);
            					}
            					break;
            					case (int)4: {
HXLINE( 577)						ret = linc::lua::tostring(l,v);
            					}
            					break;
            					case (int)5: {
HXLINE( 577)						ret = ::llua::Convert_obj::toHaxeObj(l,v);
            					}
            					break;
            					default:{
HXLINE( 577)						ret = null();
HXDLIN( 577)						::haxe::Log_obj::trace((HX_("return value not supported\n",48,41,fb,c8) + v),::hx::SourceInfo(HX_("llua/Convert.hx",6e,6a,e3,49),103,HX_("llua.Convert",31,b8,44,19),HX_("fromLua",6e,2a,fd,57)));
            					}
            				}
HXDLIN( 577)				args->set(i,ret);
            			}
            		}
HXLINE( 580)		 ::Dynamic ret = null();
HXLINE( 582)		switch((int)(nparams)){
            			case (int)0: {
HXLINE( 584)				ret = cbf();
            			}
            			break;
            			case (int)1: {
HXLINE( 586)				ret = cbf(args->__get(0));
            			}
            			break;
            			case (int)2: {
HXLINE( 588)				ret = cbf(args->__get(0),args->__get(1));
            			}
            			break;
            			case (int)3: {
HXLINE( 590)				ret = cbf(args->__get(0),args->__get(1),args->__get(2));
            			}
            			break;
            			case (int)4: {
HXLINE( 592)				ret = cbf(args->__get(0),args->__get(1),args->__get(2),args->__get(3));
            			}
            			break;
            			case (int)5: {
HXLINE( 594)				ret = cbf(args->__get(0),args->__get(1),args->__get(2),args->__get(3),args->__get(4));
            			}
            			break;
            			case (int)6: {
HXLINE( 596)				ret = cbf(args->__get(0),args->__get(1),args->__get(2),args->__get(3),args->__get(4),args->__get(5));
            			}
            			break;
            			case (int)7: {
HXLINE( 598)				ret = cbf(args->__get(0),args->__get(1),args->__get(2),args->__get(3),args->__get(4),args->__get(5),args->__get(6));
            			}
            			break;
            			case (int)8: {
HXLINE( 600)				ret = cbf(args->__get(0),args->__get(1),args->__get(2),args->__get(3),args->__get(4),args->__get(5),args->__get(6),args->__get(7));
            			}
            			break;
            			default:{
HXLINE( 602)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("> 5 arguments is not supported",62,23,e5,68)));
            			}
            		}
HXLINE( 605)		if (::hx::IsNotNull( ret )) {
HXLINE( 606)			::llua::Convert_obj::toLua(l,ret);
            		}
HXLINE( 610)		return 1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lua_helper_obj,callback_handler,return )


Lua_helper_obj::Lua_helper_obj()
{
}

bool Lua_helper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"trace") ) { outValue = ( trace ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"callbacks") ) { outValue = ( callbacks ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"add_callback") ) { outValue = add_callback_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"print_function") ) { outValue = print_function_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"remove_callback") ) { outValue = remove_callback_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"register_hxtrace") ) { outValue = register_hxtrace_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"callback_handler") ) { outValue = callback_handler_dyn(); return true; }
	}
	return false;
}

bool Lua_helper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"trace") ) { trace=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"callbacks") ) { callbacks=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Lua_helper_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Lua_helper_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Lua_helper_obj::trace,HX_("trace",85,8e,1f,16)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Lua_helper_obj::callbacks,HX_("callbacks",0e,f3,bf,a6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Lua_helper_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lua_helper_obj::trace,"trace");
	HX_MARK_MEMBER_NAME(Lua_helper_obj::callbacks,"callbacks");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Lua_helper_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lua_helper_obj::trace,"trace");
	HX_VISIT_MEMBER_NAME(Lua_helper_obj::callbacks,"callbacks");
};

#endif

::hx::Class Lua_helper_obj::__mClass;

static ::String Lua_helper_obj_sStaticFields[] = {
	HX_("print_function",aa,5c,49,10),
	HX_("register_hxtrace",59,b4,74,54),
	HX_("trace",85,8e,1f,16),
	HX_("callbacks",0e,f3,bf,a6),
	HX_("add_callback",e3,d2,1d,24),
	HX_("remove_callback",60,4c,e8,65),
	HX_("callback_handler",10,70,1b,10),
	::String(null())
};

void Lua_helper_obj::__register()
{
	Lua_helper_obj _hx_dummy;
	Lua_helper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("llua.Lua_helper",d7,1c,13,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lua_helper_obj::__GetStatic;
	__mClass->mSetStaticField = &Lua_helper_obj::__SetStatic;
	__mClass->mMarkFunc = Lua_helper_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Lua_helper_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Lua_helper_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Lua_helper_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lua_helper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lua_helper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Lua_helper_obj::__boot()
{
	trace = new __default_trace;

{
            	HX_GC_STACKFRAME(&_hx_pos_176a1fae691a892a_547_boot)
HXDLIN( 547)		callbacks =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace llua
